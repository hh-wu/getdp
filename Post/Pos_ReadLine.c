#define RCSID "$Id: Pos_ReadLine.c,v 1.12 2003-03-22 03:30:19 geuzaine Exp $"
/*
 * Copyright (C) 1986 - 1993   Thomas Williams, Colin Kelley
 *
 * Permission to use, copy, and distribute this software and its
 * documentation for any purpose with or without fee is hereby granted, 
 * provided that the above copyright notice appear in all copies and 
 * that both that copyright notice and this permission notice appear 
 * in supporting documentation.
 *
 * Permission to modify the software is granted, but not the right to 	 
 * distribute the modified code.  Modifications are to be distributed 	 
 * as patches to released version.
 *
 * This software is provided "as is" without express or implied warranty.
 * 
 * AUTHORS
 *
 *   Original Software:
 *     Tom Tkacik
 *
 *   Msdos port and some enhancements:
 *     Gershon Elber and many others.
 */

/* This is a stripped-down version for getdp */

/* a small portable version of GNU's readline */
/* this is not the BASH or GNU EMACS version of READLINE due to Copyleft 
   restrictions */
/* do not need any terminal capabilities except backspace, */
/* and space overwrites a character */

/* NANO-EMACS line editing facility */
/* printable characters print as themselves (insert not overwrite) */
/* ^A moves to the beginning of the line */
/* ^B moves back a single character */
/* ^E moves to the end of the line */
/* ^F moves forward a single character */
/* ^K kills from current position to the end of line */
/* ^P moves back through history */
/* ^N moves forward through history */
/* ^H and DEL delete the previous character */
/* ^D deletes the current character, or EOF if line is empty */
/* ^L/^R redraw line in case it gets trashed */
/* ^U kills the entire line */
/* ^W kills last word */
/* LF and CR return the entire line regardless of the cursor postition */
/* EOF with an empty line returns (char *)NULL */
/* all other characters are ignored */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
#include <signal.h>

extern int InteractiveInterrupt;

#ifndef MSDOS

#ifdef SGTTY
#  include <sgtty.h>
static struct sgttyb orig_termio, rl_termio;
/* define terminal control characters */
static struct tchars s_tchars;
#  define VERASE    0
#  define VEOF      1
#  define VKILL     2
#  ifdef TIOCGLTC /* available only with the 'new' line discipline */
static struct ltchars s_ltchars;
#    define VWERASE   3
#    define VREPRINT  4
#    define VSUSP     5
#  endif /* TIOCGLTC */
#  define NCCS      6
#else /* SGTTY */
/* SIGTSTP defines job control */
/* if there is job control then we need termios.h instead of termio.h */
/* (Are there any systems with job control that use termio.h?  I hope not.) */
#  ifdef SIGTSTP
#    define TERMIOS
#    include <termios.h>
/* Added by Robert Eckardt, RobertE@beta.TP2.Ruhr-Uni-Bochum.de */
#    ifdef ISC22
#      ifndef ONOCR             /* taken from sys/termio.h */
#         define ONOCR 0000020  /* true at least for ISC 2.2 */
#      endif
#      ifndef IUCLC
#         define IUCLC 0001000
#      endif
#    endif /* ISC22 */
static struct termios orig_termio, rl_termio;
#  else
#    include <termio.h>
static struct termio orig_termio, rl_termio;
/* termio defines NCC instead of NCCS */
#    define NCCS    NCC
#  endif /* SIGTSTP */
#endif /* SGTTY */

/* define characters to use with our input character handler */
static char term_chars[NCCS];
static int term_set = 0;        /* =1 if rl_termio set */

#endif /* !MSDOS */

char * alloc (unsigned long size, char *message){
  char *p; /* the new allocation */
  char errbuf[100]; /* error message string */

  p = (char *) malloc ((size_t) size);
  if (p == (char *) NULL) {
    p = (char *) malloc ((size_t) size); /* try again */
    if (p == (char *) NULL) {
      /* really out of memory */
      if (message != NULL) {
        (void) sprintf (errbuf, "out of memory for %s", message);
        /* NOTREACHED */
      }
      /* else we return NULL */
    }
  }
  return (p);
}

#define MAXBUF  1024
#define BACKSPACE 0x08          /* ^H */
#define SPACE   ' '

struct hist
{
  char *line;
  struct hist *prev;
  struct hist *next;
};

static struct hist *history = NULL;     /* no history yet */
static struct hist *cur_entry = NULL;
static char cur_line[MAXBUF];   /* current contents of the line */
static int cur_pos = 0;         /* current position of the cursor */
static int max_pos = 0;         /* maximum character position */


/* user_putc and user_puts should be used in the place of
   fputc(ch,stderr) and fputs(str,stderr) for all output
   of user typed characters.  This allows MS-Windows to 
   display user input in a different color. */
int user_putc (int ch){
  int rv;
  rv = fputc (ch, stderr);
  return rv;
}

int user_puts (char *str){
  int rv;
  rv = fputs (str, stderr);
  return rv;
}

/* This function provides a centralized non-destructive backspace capability */
/* M. Castro */

void backspace (){
  user_putc (BACKSPACE);
}

/* Convert ANSI arrow keys to control characters */
static char ansi_getc (){
  char c = getc (stdin);
  if (c == 033) {
    c = getc (stdin);           /* check for CSI */
    if (c == '[') {
      c = getc (stdin);         /* get command character */
      switch (c) {
      case 'D':         /* left arrow key */
        c = 002;
        break;
      case 'C':         /* right arrow key */
        c = 006;
        break;
      case 'A':         /* up arrow key */
        c = 020;
        break;
      case 'B':         /* down arrow key */
        c = 016;
        break;
      }
    }
  }
  return c;
}

/* Convert DOS arrow keystrokes to control characters */
#ifdef MSDOS
static char msdos_getch (){
  char c = getch ();
  if (c == 0) {
    c = getch ();               /* Get the extended code. */
    switch (c) {
    case 75:                    /* Left Arrow. */
      c = 002;
      break;
    case 77:                    /* Right Arrow. */
      c = 006;
      break;
    case 72:                    /* Up Arrow. */
      c = 020;
      break;
    case 80:                    /* Down Arrow. */
      c = 016;
      break;
    case 115:                   /* Ctl Left Arrow. */
    case 71:                    /* Home */
      c = 001;
      break;
    case 116:                   /* Ctl Right Arrow. */
    case 79:                    /* End */
      c = 005;
      break;
    case 83:                    /* Delete */
      c = 004;
      break;
    default:
      c = 0;
      break;
    }
  }
  else if (c == 033) {          /* ESC */
    c = 025;
  }
  return c;
}
#endif /* MSDOS */

/* fix up the line from cur_pos to max_pos */
/* do not need any terminal capabilities except backspace, */
/* and space overwrites a character */
static void fix_line (){
  int i;

  /* write tail of string */
  for (i = cur_pos; i < max_pos; i++)
    user_putc (cur_line[i]);

  /* write a space at the end of the line in case we deleted one */
  user_putc (SPACE);

  /* backup to original position */
  for (i = max_pos + 1; i > cur_pos; i--)
    backspace ();

}

/* redraw the entire line, putting the cursor where it belongs */
static void redraw_line (char *prompt){
  int i;

  fputs (prompt, stderr);
  user_puts (cur_line);

  /* put the cursor where it belongs */
  for (i = max_pos; i > cur_pos; i--)
    backspace ();
}

/* clear cur_line and the screen line */
static void clear_line (char *prompt){
  int i;
  for (i = 0; i < max_pos; i++)
    cur_line[i] = '\0';

  for (i = cur_pos; i > 0; i--)
    backspace ();

  for (i = 0; i < max_pos; i++)
    putc (SPACE, stderr);

  putc ('\r', stderr);
  fputs (prompt, stderr);

  cur_pos = 0;
  max_pos = 0;
}

/* clear to end of line and the screen end of line */
static void clear_eoline (){
  int i;
  for (i = cur_pos; i < max_pos; i++)
    cur_line[i] = '\0';

  for (i = cur_pos; i < max_pos; i++)
    putc (SPACE, stderr);
  for (i = cur_pos; i < max_pos; i++)
    backspace ();
}

/* copy line to cur_line, draw it and set cur_pos and max_pos */
static void copy_line (char *line){
  strcpy (cur_line, line);
  user_puts (cur_line);
  cur_pos = max_pos = strlen (cur_line);
}

/* add line to the history */
void add_history(char *line){
  struct hist *entry;

  entry = history;
  while (entry != NULL) {
    /* Don't store duplicate entries */
    if (!strcmp(entry->line, line)) {
      /* cmd lines are equal, relink entry that was found last */
      if (entry->next == NULL) {
	/* previous command repeated, no change */
	return;
      }
      if (entry->prev == NULL) {
	/* current cmd line equals the first in the history */
	(entry->next)->prev = NULL;
	history->next = entry;
	entry->prev = history;
	entry->next = NULL;
	history = entry;
	return;
      }
      /* bridge over entry's vacancy, then move it to the end */
      (entry->prev)->next = entry->next;
      (entry->next)->prev = entry->prev;
      entry->prev = history;
      history->next = entry;
      entry->next = NULL;
      history = entry;
      return;
    }
    entry = entry->prev;
  }
  
  entry = (struct hist *) alloc(sizeof(struct hist), "history");
  entry->line = alloc((strlen(line) + 1), "history");
  strcpy(entry->line, line);

  entry->prev = history;
  entry->next = NULL;
  if (history != NULL) {
    history->next = entry;
  }
  history = entry;
}

/* save history to file */
void save_history (int num, FILE * file){
  struct hist *entry = history;
  int i = 0;
  /* rewind */
  while (entry && entry->prev && i < num) {
    entry = entry->prev;
    i++;
  }
  /* print */
  while (entry) {
    fprintf (file, "%s\n", entry->line);
    entry = entry->next;
  }
}

/* set termio so we can do our own input processing */
static void set_termio (){
#ifndef MSDOS
  /* set termio so we can do our own input processing */
  /* and save the old terminal modes so we can reset them later */
  if (term_set == 0) {
    /* Get terminal modes. */
#ifdef SGTTY
    ioctl (0, TIOCGETP, &orig_termio);
#else /* SGTTY */
#ifdef TERMIOS
#ifdef TCGETS
    ioctl (0, TCGETS, &orig_termio);
#else
    tcgetattr (0, &orig_termio);
#endif /* TCGETS */
#else
    ioctl (0, TCGETA, &orig_termio);
#endif /* TERMIOS */
#endif /* SGTTY */

    /* Save terminal modes */
    rl_termio = orig_termio;

    /* Set the modes to the way we want them and save our input special characters */
#ifdef SGTTY
    rl_termio.sg_flags |= CBREAK;
    rl_termio.sg_flags &= ~(ECHO | XTABS);
    ioctl (0, TIOCSETN, &rl_termio);

    ioctl (0, TIOCGETC, &s_tchars);
    term_chars[VERASE] = orig_termio.sg_erase;
    term_chars[VEOF] = s_tchars.t_eofc;
    term_chars[VKILL] = orig_termio.sg_kill;
#ifdef TIOCGLTC
    ioctl (0, TIOCGLTC, &s_ltchars);
    term_chars[VWERASE] = s_ltchars.t_werasc;
    term_chars[VREPRINT] = s_ltchars.t_rprntc;
    term_chars[VSUSP] = s_ltchars.t_suspc;

    /* disable suspending process on ^Z */
    s_ltchars.t_suspc = 0;
    ioctl (0, TIOCSLTC, &s_ltchars);
#endif /* TIOCGLTC */
#else /* SGTTY */
#ifdef __APPLE__
    rl_termio.c_iflag &= ~(BRKINT | PARMRK | INPCK | IXON | IXOFF);
#else /* __APPLE__ */
    rl_termio.c_iflag &= ~(BRKINT | PARMRK | INPCK | IUCLC | IXON | IXOFF);
#endif /* __APPLE__ */
    rl_termio.c_iflag |= (IGNBRK | IGNPAR);

    /* rl_termio.c_oflag &= ~(ONOCR); Costas Sphocleous Irvine,CA */

    rl_termio.c_lflag &= ~(ICANON | ECHO | ECHOE | ECHOK | ECHONL | NOFLSH);
    rl_termio.c_lflag |= (ISIG);
    rl_termio.c_cc[VMIN] = 1;
    rl_termio.c_cc[VTIME] = 0;

#ifndef VWERASE
#define VWERASE 3
#endif
    term_chars[VERASE] = orig_termio.c_cc[VERASE];
    term_chars[VEOF] = orig_termio.c_cc[VEOF];
    term_chars[VKILL] = orig_termio.c_cc[VKILL];
#ifdef TERMIOS
    term_chars[VWERASE] = orig_termio.c_cc[VWERASE];
#ifdef VREPRINT
    term_chars[VREPRINT] = orig_termio.c_cc[VREPRINT];
#else
#ifdef VRPRNT
    term_chars[VRPRNT] = orig_termio.c_cc[VRPRNT];
#endif
#endif
    term_chars[VSUSP] = orig_termio.c_cc[VSUSP];

    /* disable suspending process on ^Z */
    rl_termio.c_cc[VSUSP] = 0;
#endif /* TERMIOS */
#endif /* SGTTY */

    /* Set the new terminal modes. */
#ifdef SGTTY
    ioctl (0, TIOCSLTC, &s_ltchars);
#else
#ifdef TERMIOS
#ifdef TCSETSW
    ioctl (0, TCSETSW, &rl_termio);
#else
    tcsetattr (0, TCSADRAIN, &rl_termio);
#endif /* TCSETSW */
#else
    ioctl (0, TCSETAW, &rl_termio);
#endif /* TERMIOS */
#endif /* SGTTY */
    term_set = 1;
  }
#endif /* !MSDOS */
}

static void reset_termio (){
#ifndef MSDOS
  /* reset saved terminal modes */
  if (term_set == 1) {
#ifdef SGTTY
    ioctl (0, TIOCSETN, &orig_termio);
#ifdef TIOCGLTC
    /* enable suspending process on ^Z */
    s_ltchars.t_suspc = term_chars[VSUSP];
    ioctl (0, TIOCSLTC, &s_ltchars);
#endif /* TIOCGLTC */
#else /* SGTTY */
#ifdef TERMIOS
#ifdef TCSETSW
    ioctl (0, TCSETSW, &orig_termio);
#else
    tcsetattr (0, TCSADRAIN, &orig_termio);
#endif /* TCSETSW */
#else
    ioctl (0, TCSETAW, &orig_termio);
#endif /* TERMIOS */
#endif /* SGTTY */
    term_set = 0;
  }
#endif /* !MSDOS */
}

char * readline (char *prompt){
  unsigned char cur_char;
  char *new_line;

  /* set the termio so we can do our own input processing */
  set_termio ();

  /* print the prompt */
  fputs (prompt, stderr);
  cur_line[0] = '\0';
  cur_pos = 0;
  max_pos = 0;
  cur_entry = NULL;

  /* get characters */
  for (;;) {

    if (InteractiveInterrupt) {
      InteractiveInterrupt = 0;
      putc ('\n', stderr);
      fputs (prompt, stderr);
      cur_line[0] = '\0';
      cur_pos = 0;
      max_pos = 0;
      cur_entry = NULL;
    }

#ifdef MSDOS
    cur_char = msdos_getch ();
#else
    cur_char = ansi_getc ();
#endif

    if ((isprint (cur_char)
         ) && max_pos < MAXBUF - 1) {
      int i;
      for (i = max_pos; i > cur_pos; i--) {
        cur_line[i] = cur_line[i - 1];
      }
      user_putc (cur_char);
      cur_line[cur_pos] = cur_char;
      cur_pos += 1;
      max_pos += 1;
      if (cur_pos < max_pos)
        fix_line ();
      cur_line[max_pos] = '\0';

      /* else interpret unix terminal driver characters */
#ifdef VERASE
    }
    else if (cur_char == term_chars[VERASE]) {  /* DEL? */
      if (cur_pos > 0) {
        int i;
        cur_pos -= 1;
        backspace ();
        for (i = cur_pos; i < max_pos; i++)
          cur_line[i] = cur_line[i + 1];
        max_pos -= 1;
        fix_line ();
      }
#endif /* VERASE */
#ifdef VEOF
    }
    else if (cur_char == term_chars[VEOF]) {    /* ^D? */
      if (max_pos == 0) {
        reset_termio ();
        return ((char *) NULL);
      }
      if ((cur_pos < max_pos) && (cur_char == 004)) {   /* ^D */
        int i;
        for (i = cur_pos; i < max_pos; i++)
          cur_line[i] = cur_line[i + 1];
        max_pos -= 1;
        fix_line ();
      }
#endif /* VEOF */
#ifdef VKILL
    }
    else if (cur_char == term_chars[VKILL]) {   /* ^U? */
      clear_line (prompt);
#endif /* VKILL */
#ifdef VWERASE
    }
    else if (cur_char == term_chars[VWERASE]) { /* ^W? */
      while ((cur_pos > 0) && (cur_line[cur_pos - 1] == SPACE)) {
        cur_pos -= 1;
        backspace ();
      }
      while ((cur_pos > 0) && (cur_line[cur_pos - 1] != SPACE)) {
        cur_pos -= 1;
        backspace ();
      }
      clear_eoline ();
      max_pos = cur_pos;
#endif /* VWERASE */
#ifdef VREPRINT
    }
    else if (cur_char == term_chars[VREPRINT]) {        /* ^R? */
      putc ('\n', stderr);      /* go to a fresh line */
      redraw_line (prompt);
#endif /* VREPRINT */
#ifdef VSUSP
    }
    else if (cur_char == term_chars[VSUSP]) {
      reset_termio ();
      kill (0, SIGTSTP);

      /* process stops here */

      set_termio ();
      /* print the prompt */
      redraw_line (prompt);
#endif /* VSUSP */
    }
    else {
      /* do normal editing commands */
      /* some of these are also done above */
      int i;
      switch (cur_char) {
      case EOF:
        reset_termio ();
        return ((char *) NULL);
      case 001:         /* ^A */
        while (cur_pos > 0) {
          cur_pos -= 1;
          backspace ();
        }
        break;
      case 002:         /* ^B */
        if (cur_pos > 0) {
          cur_pos -= 1;
          backspace ();
        }
        break;
      case 005:         /* ^E */
        while (cur_pos < max_pos) {
          user_putc (cur_line[cur_pos]);
          cur_pos += 1;
        }
        break;
      case 006:         /* ^F */
        if (cur_pos < max_pos) {
          user_putc (cur_line[cur_pos]);
          cur_pos += 1;
        }
        break;
      case 013:         /* ^K */
        clear_eoline ();
        max_pos = cur_pos;
        break;
      case 020:         /* ^P */
        if (history != NULL) {
          if (cur_entry == NULL) {
            cur_entry = history;
            clear_line (prompt);
            copy_line (cur_entry->line);
          }
          else if (cur_entry->prev != NULL) {
            cur_entry = cur_entry->prev;
            clear_line (prompt);
            copy_line (cur_entry->line);
          }
        }
        break;
      case 016:         /* ^N */
        if (cur_entry != NULL) {
          cur_entry = cur_entry->next;
          clear_line (prompt);
          if (cur_entry != NULL)
            copy_line (cur_entry->line);
          else
            cur_pos = max_pos = 0;
        }
        break;
      case 014:         /* ^L */
      case 022:         /* ^R */
        putc ('\n', stderr);    /* go to a fresh line */
        redraw_line (prompt);
        break;
      case 0177:                /* DEL */
      case 010:         /* ^H */
        if (cur_pos > 0) {
          cur_pos -= 1;
          backspace ();
          for (i = cur_pos; i < max_pos; i++)
            cur_line[i] = cur_line[i + 1];
          max_pos -= 1;
          fix_line ();
        }
        break;
      case 004:         /* ^D */
        if (max_pos == 0) {
          reset_termio ();
          return ((char *) NULL);
        }
        if (cur_pos < max_pos) {
          for (i = cur_pos; i < max_pos; i++)
            cur_line[i] = cur_line[i + 1];
          max_pos -= 1;
          fix_line ();
        }
        break;
      case 025:         /* ^U */
        clear_line (prompt);
        break;
      case 027:         /* ^W */
        while ((cur_pos > 0) && (cur_line[cur_pos - 1] == SPACE)) {
          cur_pos -= 1;
          backspace ();
        }
        while ((cur_pos > 0) && (cur_line[cur_pos - 1] != SPACE)) {
          cur_pos -= 1;
          backspace ();
        }
        clear_eoline ();
        max_pos = cur_pos;
        break;
      case '\n':                /* ^J */
      case '\r':                /* ^M */
        cur_line[max_pos + 1] = '\0';
        putc ('\n', stderr);
        new_line =
          (char *) alloc ((unsigned long) (strlen (cur_line) + 1), "history");
        strcpy (new_line, cur_line);
        reset_termio ();
        return (new_line);
      default:
        break;
      }
    }
  }
}

