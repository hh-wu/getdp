#define RCSID "$Id: EigenPar.c,v 1.4 2006-02-26 00:42:54 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   Andre Nicolet
 */

#include "GetDP.h"
#include "CurrentData.h"
#include "EigenPar.h"

static void EigenGetDouble(char *text, double *d){
  char str[256];
  printf("%s (default=%.16g): ", text, *d);
  fgets(str, sizeof(str), stdin);
  if(strlen(str) && strcmp(str, "\n"))
    *d = atof(str);
}

static void EigenGetInt(char *text, int *i){
  char str[256];
  printf("%s (default=%d): ", text, *i);
  fgets(str, sizeof(str), stdin);
  if(strlen(str) && strcmp(str, "\n"))
    *i = atoi(str);
}

void EigenPar(char *filename, struct EigenPar *par){
  char path[MAX_FILE_NAME_LENGTH];
  FILE *fp;

  /* set some defaults */
  par->prec = 1.e-4;
  par->reortho = 0;
  par->size = 50;

  /* try to read parameters from file */
  strcpy(path, Name_Path);
  strcat(path, filename);
  fp = fopen(path, "r");
  if(fp) {
    Msg(INFO, "Loading eigenproblem parameter file '%s'", path);
    fscanf(fp, "%lf", &par->prec); 
    fscanf(fp, "%d", &par->reortho);
    fscanf(fp, "%d", &par->size);
    fclose(fp);
  }
  else{
    fp = fopen(path, "w");
    if(fp){
      /* get parameters from command line */
      EigenGetDouble("Precision", &par->prec);
      EigenGetInt("Reorthogonalization", &par->reortho);
      EigenGetInt("Krylov basis size", &par->size);
      /* write file */
      fprintf(fp, "%.16g\n", par->prec);
      fprintf(fp, "%d\n", par->reortho);
      fprintf(fp, "%d\n", par->size);
      fprintf(fp,
	      "/*\n"
	      "   The numbers above are the parameters for the numerical\n"
	      "   eigenvalue problem:\n"
	      "\n"
	      "   prec = aimed accuracy for eigenvectors (default=1.e-4)\n"
	      "   reortho = reorthogonalisation of Krylov basis: yes=1, no=0 (default=0) \n"
	      "   size = size of the Krylov basis\n"
	      "\n"
	      "   The shift is given in the .pro file because its choice relies\n"
	      "   on physical considerations.\n"
	      "*/");
      fclose(fp);
    }
    else{
      Msg(GERROR, "Unable to open file '%s'", path);
    }
  }
  
  Msg(INFO, "Eigenproblem parameters: prec = %g, reortho = %d, size = %d", 
      par->prec, par->reortho, par->size);
}
