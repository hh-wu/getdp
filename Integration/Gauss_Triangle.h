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
 */

/* 1 integration point */

double xt1[1] = {0.333333333333333};
double yt1[1] = {0.333333333333333};
double pt1[1] = {0.5};

/* 3 integration points */

double xt3[3] = {0.16666666666666,0.66666666666666,0.16666666666666};
double yt3[3] = {0.16666666666666,0.16666666666666,0.66666666666666};
double pt3[3] = {0.16666666666666,0.16666666666666,0.16666666666666};

/* 4 integration points */

double xt4[4] = {0.333333333333333,0.6,0.2,0.2};
double yt4[4] = {0.3333333333333333,0.2,0.6,0.2};
double pt4[4] = {-0.28125,.260416666666,.260416666666,.260416666666};

/* 6 integration points */

double xt6[6] = {0.816847572980459,0.091576213509771,0.091576213509771,
		 0.108103018168070,0.445948490915965,0.445948490915965};
double yt6[6] = {0.091576213509771,0.816847572980459,0.091576213509771,
		 0.445948490915965,0.108103018168070,0.445948490915965};
double pt6[6] = {0.054975871827661,0.054975871827661,0.054975871827661,
		 0.111690794839,0.111690794839,0.111690794839};

/* 7 integration points */

double xt7[7] = {0.333333333333333,0.797426985353087,0.101286507323456,
		 0.101286507323456,0.470142064105115,0.059715871789770,
		 0.470142064105115};
double yt7[7] = {0.333333333333333,0.101286507323456,0.797426985353087,
		 0.101286507323456,0.059715871789770,0.470142064105115,
		 0.470142064105115};
double pt7[7] = {.11251500015000000000,.06296959027241350000,.06296959027241350000,
		 .06296959027241350000,.06619707639425300000,.06619707639425300000,
		 .06619707639425300000};

/* 12 integration points */

double xt12[12] = {0.873821971016996,0.063089014491502,0.063089014491502,
		   0.501426509658179,0.249286745170910,0.249286745170910,
		   0.636502499121399,0.310352451033785,0.636502499121399,
		   0.310352451033785,0.053145049844816,0.053145049844816};
double yt12[12] = {0.063089014491502,0.873821971016996,0.063089014491502,
		   0.249286745170910,0.501426509658179,0.249286745170910,
		   0.310352451033785,0.636502499121399,0.053145049844816,
		   0.053145049844816,0.310352451033785,0.636502499121399};
double pt12[12] = {0.050844906370207/2.,0.050844906370207/2.,0.050844906370207/2.,
		   0.116786275726379/2.,0.116786275726379/2.,0.116786275726379/2.,
		   0.082851075618374/2.,0.082851075618374/2.,0.082851075618374/2.,
		   0.082851075618374/2.,0.082851075618374/2.,0.082851075618374/2.};

/* 13 integration points */

double xt13[13] = {0.333333333333333,0.479308067841920,0.260345966079040,
		   0.260345966079040,0.869739794195568,0.065130102902216,
		   0.065130102902216,0.048690315425316,0.312865496004874,
		   0.638444188569810,0.048690315425316,0.312865496004874,
		   0.638444188569810};
double yt13[13] = {0.333333333333333,0.260345966079040,0.479308067841920,
		   0.260345966079040,0.065130102902216,0.869739794195568,
		   0.065130102902216,0.312865496004874,0.048690315425316,
		   0.048690315425316,0.638444188569810,0.638444188569810,
		   0.312865496004874};
double pt13[13] = {-0.149570044467682/2.,0.175615257433208/2.,0.175615257433208/2., 
		   0.175615257433208/2.,0.053347235608838/2.,0.053347235608838/2., 
		   0.053347235608838/2.,0.077113760890257/2.,0.077113760890257/2., 
		   0.077113760890257/2.,0.077113760890257/2.,0.077113760890257/2., 
		   0.077113760890257/2.};

/* 16 integration points */

double xt16[16] = {0.333333333333333,0.081414823414554,0.459292588292723,
		   0.459292588292723,0.658861384496480,0.170569307751760,
		   0.170569307751760,0.898905543365938,0.050547228317031,
		   0.050547228317031,0.008394777409958,0.728492392955404,
		   0.263112829634638,0.008394777409958,0.263112829634638,
		   0.728492392955404};
double yt16[16] = {0.333333333333333,0.459292588292723,0.081414823414554,
		   0.459292588292723,0.170569307751760,0.658861384496480,
		   0.170569307751760,0.050547228317031,0.898905543365938,
		   0.050547228317031,0.728492392955404,0.008394777409958,
		   0.008394777409958,0.263112829634638,0.728492392955404,
		   0.263112829634638};
double pt16[16] = {0.144315607677787/2.,0.095091634267285/2.,0.095091634267285/2.,
		   0.095091634267285/2.,0.103217370534718/2.,0.103217370534718/2.,
		   0.103217370534718/2.,0.032458497623198/2.,0.032458497623198/2.,
		   0.032458497623198/2.,0.027230314174435/2.,0.027230314174435/2.,
		   0.027230314174435/2.,0.027230314174435/2.,0.027230314174435/2.,
		   0.027230314174435/2.};

/* 
   GAUSS TRIANGLE WITH 1/R SINGULARITY OVER NODE (0,0,0)
   
   ref.: H. L. G. Pina, J. L. M. Fernandes, C. A. Brebbia, 
         Some numerical integration formulae over triangles and 
	 squares with a 1/R singularity, 
	 Appl. Math. Modelling, Vol 5, June 1981, pp 209--211 
*/ 

/* 1 integration point */

double xts1[1] = {0.25};
double yts1[1] = {0.25};
double pts1[1] = {1.24645048};

/* 3 integration points */

double xts3[3] = {0.16666667,0.81742619,0.18257381};
double yts3[3] = {0.16666667,0.18257381,0.81742619};
double pts3[3] = {0.93483790,0.15580629,0.15580629};

/* 4 integration points */

double xts4[4] = {0.16385495,0.61114353,0.04756957,0.17753138};
double yts4[4] = {0.04756957,0.17753138,0.16385495,0.61114353};
double pts4[4] = {0.31161231,0.31161293,0.31161231,0.31161293};

