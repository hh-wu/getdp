/* $Id: endian.c,v 1.2 2000-09-07 18:47:31 geuzaine Exp $ */

/* Are we little or big endian?  From Harbison&Steele.  */

main () {
  union{
    long l;
    char c[sizeof (long)];
  } u;

  u.l = 1;
  if (u.c[0] == 1)
    printf ("LittleEndian\n");
  else if (u.c[sizeof (long) - 1] == 1)
    printf ("BigEndian\n");
  else
    printf ("unknownEndian");
  
  exit (u.c[sizeof (long) - 1] == 1);
}


