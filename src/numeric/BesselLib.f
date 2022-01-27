      REAL FUNCTION R1MACH(I)
      INTEGER I
C
C  SINGLE-PRECISION MACHINE CONSTANTS
C  R1MACH(1) = B**(EMIN-1), THE SMALLEST POSITIVE MAGNITUDE.
C  R1MACH(2) = B**EMAX*(1 - B**(-T)), THE LARGEST MAGNITUDE.
C  R1MACH(3) = B**(-T), THE SMALLEST RELATIVE SPACING.
C  R1MACH(4) = B**(1-T), THE LARGEST RELATIVE SPACING.
C  R1MACH(5) = LOG10(B)
C
C  THIS VERSION ADAPTS AUTOMATICALLY TO MOST CURRENT MACHINES,
C  INCLUDING AUTO-DOUBLE COMPILERS.
C  TO ALTER FOR A PARTICULAR ENVIRONMENT, THE DESIRED SET OF DATA
C  STATEMENTS MAY BE ACTIVATED BY REMOVING THE C FROM COLUMN 1.
C  CONSTANTS FOR OLDER MACHINES CAN BE OBTAINED BY
C          mail netlib@research.bell-labs.com
C          send old1mach from blas
C  PLEASE SEND CORRECTIONS TO dmg OR ehg@bell-labs.com.
C
      INTEGER SMALL(2)
      INTEGER LARGE(2)
      INTEGER RIGHT(2)
      INTEGER DIVER(2)
      INTEGER LOG10(2)
      INTEGER SC
      SAVE SMALL, LARGE, RIGHT, DIVER, LOG10, SC
      REAL RMACH(5)
      EQUIVALENCE (RMACH(1),SMALL(1))
      EQUIVALENCE (RMACH(2),LARGE(1))
      EQUIVALENCE (RMACH(3),RIGHT(1))
      EQUIVALENCE (RMACH(4),DIVER(1))
      EQUIVALENCE (RMACH(5),LOG10(1))
      INTEGER J, K, L, T3E(3)
      DATA T3E(1) / 9777664 /
      DATA T3E(2) / 5323660 /
      DATA T3E(3) / 46980 /
C     MACHINE CONSTANTS FOR THE HONEYWELL DPS 8/70 SERIES.
C      DATA RMACH(1) / O402400000000 /
C      DATA RMACH(2) / O376777777777 /
C      DATA RMACH(3) / O714400000000 /
C      DATA RMACH(4) / O716400000000 /
C      DATA RMACH(5) / O776464202324 /, SC/987/
C
C     MACHINE CONSTANTS FOR PDP-11 FORTRANS SUPPORTING
C     32-BIT INTEGERS (EXPRESSED IN INTEGER AND OCTAL).
C      DATA SMALL(1) /    8388608 /
C      DATA LARGE(1) / 2147483647 /
C      DATA RIGHT(1) /  880803840 /
C      DATA DIVER(1) /  889192448 /
C      DATA LOG10(1) / 1067065499 /, SC/987/
C      DATA RMACH(1) / O00040000000 /
C      DATA RMACH(2) / O17777777777 /
C      DATA RMACH(3) / O06440000000 /
C      DATA RMACH(4) / O06500000000 /
C      DATA RMACH(5) / O07746420233 /, SC/987/
C
C     MACHINE CONSTANTS FOR THE SEQUENT BALANCE 8000.
C      DATA SMALL(1) / $00800000 /
C      DATA LARGE(1) / $7F7FFFFF /
C      DATA RIGHT(1) / $33800000 /
C      DATA DIVER(1) / $34000000 /
C      DATA LOG10(1) / $3E9A209B /, SC/987/
C
C     MACHINE CONSTANTS FOR THE UNIVAC 1100 SERIES.
C      DATA RMACH(1) / O000400000000 /
C      DATA RMACH(2) / O377777777777 /
C      DATA RMACH(3) / O146400000000 /
C      DATA RMACH(4) / O147400000000 /
C      DATA RMACH(5) / O177464202324 /, SC/987/
C
      IF (SC .NE. 987) THEN
*        *** CHECK FOR AUTODOUBLE ***
         SMALL(2) = 0
         RMACH(1) = 1E13
         IF (SMALL(2) .NE. 0) THEN
*           *** AUTODOUBLED ***
            IF (      SMALL(1) .EQ. 1117925532
     *          .AND. SMALL(2) .EQ. -448790528) THEN
*              *** IEEE BIG ENDIAN ***
               SMALL(1) = 1048576
               SMALL(2) = 0
               LARGE(1) = 2146435071
               LARGE(2) = -1
               RIGHT(1) = 1017118720
               RIGHT(2) = 0
               DIVER(1) = 1018167296
               DIVER(2) = 0
               LOG10(1) = 1070810131
               LOG10(2) = 1352628735
            ELSE IF ( SMALL(2) .EQ. 1117925532
     *          .AND. SMALL(1) .EQ. -448790528) THEN
*              *** IEEE LITTLE ENDIAN ***
               SMALL(2) = 1048576
               SMALL(1) = 0
               LARGE(2) = 2146435071
               LARGE(1) = -1
               RIGHT(2) = 1017118720
               RIGHT(1) = 0
               DIVER(2) = 1018167296
               DIVER(1) = 0
               LOG10(2) = 1070810131
               LOG10(1) = 1352628735
            ELSE IF ( SMALL(1) .EQ. -2065213935
     *          .AND. SMALL(2) .EQ. 10752) THEN
*              *** VAX WITH D_FLOATING ***
               SMALL(1) = 128
               SMALL(2) = 0
               LARGE(1) = -32769
               LARGE(2) = -1
               RIGHT(1) = 9344
               RIGHT(2) = 0
               DIVER(1) = 9472
               DIVER(2) = 0
               LOG10(1) = 546979738
               LOG10(2) = -805796613
            ELSE IF ( SMALL(1) .EQ. 1267827943
     *          .AND. SMALL(2) .EQ. 704643072) THEN
*              *** IBM MAINFRAME ***
               SMALL(1) = 1048576
               SMALL(2) = 0
               LARGE(1) = 2147483647
               LARGE(2) = -1
               RIGHT(1) = 856686592
               RIGHT(2) = 0
               DIVER(1) = 873463808
               DIVER(2) = 0
               LOG10(1) = 1091781651
               LOG10(2) = 1352628735
            ELSE
               WRITE(*,9010)
               STOP 777
               END IF
         ELSE
            RMACH(1) = 1234567.
            IF (SMALL(1) .EQ. 1234613304) THEN
*              *** IEEE ***
               SMALL(1) = 8388608
               LARGE(1) = 2139095039
               RIGHT(1) = 864026624
               DIVER(1) = 872415232
               LOG10(1) = 1050288283
            ELSE IF (SMALL(1) .EQ. -1271379306) THEN
*              *** VAX ***
               SMALL(1) = 128
               LARGE(1) = -32769
               RIGHT(1) = 13440
               DIVER(1) = 13568
               LOG10(1) = 547045274
            ELSE IF (SMALL(1) .EQ. 1175639687) THEN
*              *** IBM MAINFRAME ***
               SMALL(1) = 1048576
               LARGE(1) = 2147483647
               RIGHT(1) = 990904320
               DIVER(1) = 1007681536
               LOG10(1) = 1091781651
            ELSE IF (SMALL(1) .EQ. 1251390520) THEN
*              *** CONVEX C-1 ***
               SMALL(1) = 8388608
               LARGE(1) = 2147483647
               RIGHT(1) = 880803840
               DIVER(1) = 889192448
               LOG10(1) = 1067065499
            ELSE
               DO 10 L = 1, 3
                  J = SMALL(1) / 10000000
                  K = SMALL(1) - 10000000*J
                  IF (K .NE. T3E(L)) GO TO 20
                  SMALL(1) = J
 10               CONTINUE
*              *** CRAY T3E ***
               CALL I1MT3E(SMALL, 16, 0, 0)
               CALL I1MT3E(LARGE, 32751, 16777215, 16777215)
               CALL I1MT3E(RIGHT, 15520, 0, 0)
               CALL I1MT3E(DIVER, 15536, 0, 0)
               CALL I1MT3E(LOG10, 16339, 4461392, 10451455)
               GO TO 30
 20            CALL I1MCRA(J, K, 16405, 9876536, 0)
               IF (SMALL(1) .NE. J) THEN
                  WRITE(*,9020)
                  STOP 777
                  END IF
*              *** CRAY 1, XMP, 2, AND 3 ***
               CALL I1MCRA(SMALL(1), K, 8195, 8388608, 0)
               CALL I1MCRA(LARGE(1), K, 24574, 16777215, 16777214)
               CALL I1MCRA(RIGHT(1), K, 16338, 8388608, 0)
               CALL I1MCRA(DIVER(1), K, 16339, 8388608, 0)
               CALL I1MCRA(LOG10(1), K, 16383, 10100890, 8715216)
               END IF
            END IF
 30      SC = 987
         END IF
*     SANITY CHECK
      IF (RMACH(4) .GE. 1.0) STOP 776
      IF (I .LT. 1 .OR. I .GT. 5) THEN
         WRITE(*,*) 'R1MACH(I): I =',I,' is out of bounds.'
         STOP
         END IF
      R1MACH = RMACH(I)
      RETURN
 9010 FORMAT(/' Adjust autodoubled R1MACH by getting data'/
     *' appropriate for your machine from D1MACH.')
 9020 FORMAT(/' Adjust R1MACH by uncommenting data statements'/
     *' appropriate for your machine.')
* /* C source for R1MACH -- remove the * in column 1 */
*#include <stdio.h>
*#include <float.h>
*#include <math.h>
*float r1mach_(long *i)
*{
*	switch(*i){
*	  case 1: return FLT_MIN;
*	  case 2: return FLT_MAX;
*	  case 3: return FLT_EPSILON/FLT_RADIX;
*	  case 4: return FLT_EPSILON;
*	  case 5: return log10(FLT_RADIX);
*	  }
*	fprintf(stderr, "invalid argument: r1mach(%ld)\n", *i);
*	exit(1); return 0; /* else complaint of missing return value */
*}
      END
      SUBROUTINE I1MT3E(A, B, C, D)
**** SPECIAL COMPUTATION FOR CRAY T3E ****
**** 64-BIT INTEGERS, "REAL" = IEEE DOUBLE ****
      INTEGER A(2), B, C, D
      A(2) = 16777216*B + C
      A(1) = 16777216*A(1) + D
      END
      SUBROUTINE I1MCRA(A, A1, B, C, D)
**** SPECIAL COMPUTATION FOR OLD CRAY MACHINES ****
      INTEGER A, A1, B, C, D
      A1 = 16777216*B + C
      A = 16777216*A1 + D
      END
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      DOUBLE PRECISION FUNCTION D1MACH(I)
      INTEGER I
C
C  DOUBLE-PRECISION MACHINE CONSTANTS
C  D1MACH( 1) = B**(EMIN-1), THE SMALLEST POSITIVE MAGNITUDE.
C  D1MACH( 2) = B**EMAX*(1 - B**(-T)), THE LARGEST MAGNITUDE.
C  D1MACH( 3) = B**(-T), THE SMALLEST RELATIVE SPACING.
C  D1MACH( 4) = B**(1-T), THE LARGEST RELATIVE SPACING.
C  D1MACH( 5) = LOG10(B)
C
C  THIS VERSION ADAPTS AUTOMATICALLY TO MOST CURRENT MACHINES.
C  R1MACH CAN HANDLE AUTO-DOUBLE COMPILING, BUT THIS VERSION OF
C  D1MACH DOES NOT, BECAUSE WE DO NOT HAVE QUAD CONSTANTS FOR
C  MANY MACHINES YET.
C  TO ALTER FOR A PARTICULAR ENVIRONMENT, THE DESIRED SET OF DATA
C  STATEMENTS MAY BE ACTIVATED BY REMOVING THE C FROM COLUMN 1.
C  CONSTANTS FOR OLDER MACHINES CAN BE OBTAINED BY
C          mail netlib@research.bell-labs.com
C          send old1mach from blas
C  PLEASE SEND CORRECTIONS TO dmg OR ehg@bell-labs.com.
C
      INTEGER SMALL(2)
      INTEGER LARGE(2)
      INTEGER RIGHT(2)
      INTEGER DIVER(2)
      INTEGER LOG10(2)
      INTEGER SC, CRAY1(38), J
      COMMON /D9MACH/ CRAY1
      SAVE SMALL, LARGE, RIGHT, DIVER, LOG10, SC
      DOUBLE PRECISION DMACH(5)
      EQUIVALENCE (DMACH(1),SMALL(1))
      EQUIVALENCE (DMACH(2),LARGE(1))
      EQUIVALENCE (DMACH(3),RIGHT(1))
      EQUIVALENCE (DMACH(4),DIVER(1))
      EQUIVALENCE (DMACH(5),LOG10(1))
C
C     MACHINE CONSTANTS FOR THE HONEYWELL DPS 8/70 SERIES.
C      DATA SMALL(1),SMALL(2) / O402400000000, O000000000000 /
C      DATA LARGE(1),LARGE(2) / O376777777777, O777777777777 /
C      DATA RIGHT(1),RIGHT(2) / O604400000000, O000000000000 /
C      DATA DIVER(1),DIVER(2) / O606400000000, O000000000000 /
C      DATA LOG10(1),LOG10(2) / O776464202324, O117571775714 /, SC/987/
C
C     MACHINE CONSTANTS FOR PDP-11 FORTRANS SUPPORTING
C     32-BIT INTEGERS.
C      DATA SMALL(1),SMALL(2) /    8388608,           0 /
C      DATA LARGE(1),LARGE(2) / 2147483647,          -1 /
C      DATA RIGHT(1),RIGHT(2) /  612368384,           0 /
C      DATA DIVER(1),DIVER(2) /  620756992,           0 /
C      DATA LOG10(1),LOG10(2) / 1067065498, -2063872008 /, SC/987/
C
C     MACHINE CONSTANTS FOR THE SEQUENT BALANCE 8000
C      DATA SMALL(1),SMALL(2) / $00000000,  $00100000 /
C      DATA LARGE(1),LARGE(2) / $FFFFFFFF,  $7FEFFFFF /
C      DATA RIGHT(1),RIGHT(2) / $00000000,  $3CA00000 /
C      DATA DIVER(1),DIVER(2) / $00000000,  $3CB00000 /
C      DATA LOG10(1),LOG10(2) / $509F79FF,  $3FD34413 /, SC/987/
C
C     MACHINE CONSTANTS FOR THE UNIVAC 1100 SERIES.
C      DATA SMALL(1),SMALL(2) / O000040000000, O000000000000 /
C      DATA LARGE(1),LARGE(2) / O377777777777, O777777777777 /
C      DATA RIGHT(1),RIGHT(2) / O170540000000, O000000000000 /
C      DATA DIVER(1),DIVER(2) / O170640000000, O000000000000 /
C      DATA LOG10(1),LOG10(2) / O177746420232, O411757177572 /, SC/987/
C
C     ON FIRST CALL, IF NO DATA UNCOMMENTED, TEST MACHINE TYPES.
      IF (SC .NE. 987) THEN
         DMACH(1) = 1.D13
         IF (      SMALL(1) .EQ. 1117925532
     *       .AND. SMALL(2) .EQ. -448790528) THEN
*           *** IEEE BIG ENDIAN ***
            SMALL(1) = 1048576
            SMALL(2) = 0
            LARGE(1) = 2146435071
            LARGE(2) = -1
            RIGHT(1) = 1017118720
            RIGHT(2) = 0
            DIVER(1) = 1018167296
            DIVER(2) = 0
            LOG10(1) = 1070810131
            LOG10(2) = 1352628735
         ELSE IF ( SMALL(2) .EQ. 1117925532
     *       .AND. SMALL(1) .EQ. -448790528) THEN
*           *** IEEE LITTLE ENDIAN ***
            SMALL(2) = 1048576
            SMALL(1) = 0
            LARGE(2) = 2146435071
            LARGE(1) = -1
            RIGHT(2) = 1017118720
            RIGHT(1) = 0
            DIVER(2) = 1018167296
            DIVER(1) = 0
            LOG10(2) = 1070810131
            LOG10(1) = 1352628735
         ELSE IF ( SMALL(1) .EQ. -2065213935
     *       .AND. SMALL(2) .EQ. 10752) THEN
*               *** VAX WITH D_FLOATING ***
            SMALL(1) = 128
            SMALL(2) = 0
            LARGE(1) = -32769
            LARGE(2) = -1
            RIGHT(1) = 9344
            RIGHT(2) = 0
            DIVER(1) = 9472
            DIVER(2) = 0
            LOG10(1) = 546979738
            LOG10(2) = -805796613
         ELSE IF ( SMALL(1) .EQ. 1267827943
     *       .AND. SMALL(2) .EQ. 704643072) THEN
*               *** IBM MAINFRAME ***
            SMALL(1) = 1048576
            SMALL(2) = 0
            LARGE(1) = 2147483647
            LARGE(2) = -1
            RIGHT(1) = 856686592
            RIGHT(2) = 0
            DIVER(1) = 873463808
            DIVER(2) = 0
            LOG10(1) = 1091781651
            LOG10(2) = 1352628735
         ELSE IF ( SMALL(1) .EQ. 1120022684
     *       .AND. SMALL(2) .EQ. -448790528) THEN
*           *** CONVEX C-1 ***
            SMALL(1) = 1048576
            SMALL(2) = 0
            LARGE(1) = 2147483647
            LARGE(2) = -1
            RIGHT(1) = 1019215872
            RIGHT(2) = 0
            DIVER(1) = 1020264448
            DIVER(2) = 0
            LOG10(1) = 1072907283
            LOG10(2) = 1352628735
         ELSE IF ( SMALL(1) .EQ. 815547074
     *       .AND. SMALL(2) .EQ. 58688) THEN
*           *** VAX G-FLOATING ***
            SMALL(1) = 16
            SMALL(2) = 0
            LARGE(1) = -32769
            LARGE(2) = -1
            RIGHT(1) = 15552
            RIGHT(2) = 0
            DIVER(1) = 15568
            DIVER(2) = 0
            LOG10(1) = 1142112243
            LOG10(2) = 2046775455
         ELSE
            DMACH(2) = 1.D27 + 1
            DMACH(3) = 1.D27
            LARGE(2) = LARGE(2) - RIGHT(2)
            IF (LARGE(2) .EQ. 64 .AND. SMALL(2) .EQ. 0) THEN
               CRAY1(1) = 67291416
               DO 10 J = 1, 20
 10               CRAY1(J+1) = CRAY1(J) + CRAY1(J)
               CRAY1(22) = CRAY1(21) + 321322
               DO 20 J = 22, 37
 20               CRAY1(J+1) = CRAY1(J) + CRAY1(J)
               IF (CRAY1(38) .EQ. SMALL(1)) THEN
*                  *** CRAY ***
                  CALL I1MCRY(SMALL(1), J, 8285, 8388608, 0)
                  SMALL(2) = 0
                  CALL I1MCRY(LARGE(1), J, 24574, 16777215, 16777215)
                  CALL I1MCRY(LARGE(2), J, 0, 16777215, 16777214)
                  CALL I1MCRY(RIGHT(1), J, 16291, 8388608, 0)
                  RIGHT(2) = 0
                  CALL I1MCRY(DIVER(1), J, 16292, 8388608, 0)
                  DIVER(2) = 0
                  CALL I1MCRY(LOG10(1), J, 16383, 10100890, 8715215)
                  CALL I1MCRY(LOG10(2), J, 0, 16226447, 9001388)
               ELSE
                  WRITE(*,9000)
                  STOP 779
                  END IF
            ELSE
               WRITE(*,9000)
               STOP 779
               END IF
            END IF
         SC = 987
         END IF
*    SANITY CHECK
      IF (DMACH(4) .GE. 1.0D0) STOP 778
      IF (I .LT. 1 .OR. I .GT. 5) THEN
         WRITE(*,*) 'D1MACH(I): I =',I,' is out of bounds.'
         STOP
         END IF
      D1MACH = DMACH(I)
      RETURN
 9000 FORMAT(/' Adjust D1MACH by uncommenting data statements'/
     *' appropriate for your machine.')
* /* Standard C source for D1MACH -- remove the * in column 1 */
*#include <stdio.h>
*#include <float.h>
*#include <math.h>
*double d1mach_(long *i)
*{
*	switch(*i){
*	  case 1: return DBL_MIN;
*	  case 2: return DBL_MAX;
*	  case 3: return DBL_EPSILON/FLT_RADIX;
*	  case 4: return DBL_EPSILON;
*	  case 5: return log10(FLT_RADIX);
*	  }
*	fprintf(stderr, "invalid argument: d1mach(%ld)\n", *i);
*	exit(1); return 0; /* some compilers demand return values */
*}
      END
      SUBROUTINE I1MCRY(A, A1, B, C, D)
**** SPECIAL COMPUTATION FOR OLD CRAY MACHINES ****
      INTEGER A, A1, B, C, D
      A1 = 16777216*B + C
      A = 16777216*A1 + D
      END
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      INTEGER FUNCTION I1MACH(I)
      INTEGER I
C
C    I1MACH( 1) = THE STANDARD INPUT UNIT.
C    I1MACH( 2) = THE STANDARD OUTPUT UNIT.
C    I1MACH( 3) = THE STANDARD PUNCH UNIT.
C    I1MACH( 4) = THE STANDARD ERROR MESSAGE UNIT.
C    I1MACH( 5) = THE NUMBER OF BITS PER INTEGER STORAGE UNIT.
C    I1MACH( 6) = THE NUMBER OF CHARACTERS PER CHARACTER STORAGE UNIT.
C    INTEGERS HAVE FORM SIGN ( X(S-1)*A**(S-1) + ... + X(1)*A + X(0) )
C    I1MACH( 7) = A, THE BASE.
C    I1MACH( 8) = S, THE NUMBER OF BASE-A DIGITS.
C    I1MACH( 9) = A**S - 1, THE LARGEST MAGNITUDE.
C    FLOATS HAVE FORM  SIGN (B**E)*( (X(1)/B) + ... + (X(T)/B**T) )
C               WHERE  EMIN .LE. E .LE. EMAX.
C    I1MACH(10) = B, THE BASE.
C  SINGLE-PRECISION
C    I1MACH(11) = T, THE NUMBER OF BASE-B DIGITS.
C    I1MACH(12) = EMIN, THE SMALLEST EXPONENT E.
C    I1MACH(13) = EMAX, THE LARGEST EXPONENT E.
C  DOUBLE-PRECISION
C    I1MACH(14) = T, THE NUMBER OF BASE-B DIGITS.
C    I1MACH(15) = EMIN, THE SMALLEST EXPONENT E.
C    I1MACH(16) = EMAX, THE LARGEST EXPONENT E.
C
      INTEGER IMACH(16), OUTPUT, SANITY, SMALL(2)
      SAVE IMACH, SANITY
      REAL RMACH
      EQUIVALENCE (IMACH(4),OUTPUT), (RMACH,SMALL(1))
      INTEGER J, K, T3E(3)
      DATA T3E(1) / 9777664 /
      DATA T3E(2) / 5323660 /
      DATA T3E(3) / 46980 /
C
C     MACHINE CONSTANTS FOR THE HONEYWELL DPS 8/70 SERIES.
C
C      DATA IMACH( 1) /    5 /
C      DATA IMACH( 2) /    6 /
C      DATA IMACH( 3) /   43 /
C      DATA IMACH( 4) /    6 /
C      DATA IMACH( 5) /   36 /
C      DATA IMACH( 6) /    4 /
C      DATA IMACH( 7) /    2 /
C      DATA IMACH( 8) /   35 /
C      DATA IMACH( 9) / O377777777777 /
C      DATA IMACH(10) /    2 /
C      DATA IMACH(11) /   27 /
C      DATA IMACH(12) / -127 /
C      DATA IMACH(13) /  127 /
C      DATA IMACH(14) /   63 /
C      DATA IMACH(15) / -127 /
C      DATA IMACH(16) /  127 /, SANITY/987/
C
C     MACHINE CONSTANTS FOR PDP-11 FORTRANS SUPPORTING
C     32-BIT INTEGER ARITHMETIC.
C
C      DATA IMACH( 1) /    5 /
C      DATA IMACH( 2) /    6 /
C      DATA IMACH( 3) /    7 /
C      DATA IMACH( 4) /    6 /
C      DATA IMACH( 5) /   32 /
C      DATA IMACH( 6) /    4 /
C      DATA IMACH( 7) /    2 /
C      DATA IMACH( 8) /   31 /
C      DATA IMACH( 9) / 2147483647 /
C      DATA IMACH(10) /    2 /
C      DATA IMACH(11) /   24 /
C      DATA IMACH(12) / -127 /
C      DATA IMACH(13) /  127 /
C      DATA IMACH(14) /   56 /
C      DATA IMACH(15) / -127 /
C      DATA IMACH(16) /  127 /, SANITY/987/
C
C     MACHINE CONSTANTS FOR THE SEQUENT BALANCE 8000.
C
C      DATA IMACH( 1) /     0 /
C      DATA IMACH( 2) /     0 /
C      DATA IMACH( 3) /     7 /
C      DATA IMACH( 4) /     0 /
C      DATA IMACH( 5) /    32 /
C      DATA IMACH( 6) /     1 /
C      DATA IMACH( 7) /     2 /
C      DATA IMACH( 8) /    31 /
C      DATA IMACH( 9) /  2147483647 /
C      DATA IMACH(10) /     2 /
C      DATA IMACH(11) /    24 /
C      DATA IMACH(12) /  -125 /
C      DATA IMACH(13) /   128 /
C      DATA IMACH(14) /    53 /
C      DATA IMACH(15) / -1021 /
C      DATA IMACH(16) /  1024 /, SANITY/987/
C
C     MACHINE CONSTANTS FOR THE UNIVAC 1100 SERIES.
C
C     NOTE THAT THE PUNCH UNIT, I1MACH(3), HAS BEEN SET TO 7
C     WHICH IS APPROPRIATE FOR THE UNIVAC-FOR SYSTEM.
C     IF YOU HAVE THE UNIVAC-FTN SYSTEM, SET IT TO 1.
C
C      DATA IMACH( 1) /    5 /
C      DATA IMACH( 2) /    6 /
C      DATA IMACH( 3) /    7 /
C      DATA IMACH( 4) /    6 /
C      DATA IMACH( 5) /   36 /
C      DATA IMACH( 6) /    6 /
C      DATA IMACH( 7) /    2 /
C      DATA IMACH( 8) /   35 /
C      DATA IMACH( 9) / O377777777777 /
C      DATA IMACH(10) /    2 /
C      DATA IMACH(11) /   27 /
C      DATA IMACH(12) / -128 /
C      DATA IMACH(13) /  127 /
C      DATA IMACH(14) /   60 /
C      DATA IMACH(15) /-1024 /
C      DATA IMACH(16) / 1023 /, SANITY/987/
C
      IF (SANITY .NE. 987) THEN
*        *** CHECK FOR AUTODOUBLE ***
         SMALL(2) = 0
         RMACH = 1E13
         IF (SMALL(2) .NE. 0) THEN
*           *** AUTODOUBLED ***
            IF (      (SMALL(1) .EQ. 1117925532
     *           .AND. SMALL(2) .EQ. -448790528)
     *       .OR.     (SMALL(2) .EQ. 1117925532
     *           .AND. SMALL(1) .EQ. -448790528)) THEN
*               *** IEEE ***
               IMACH(10) = 2
               IMACH(14) = 53
               IMACH(15) = -1021
               IMACH(16) = 1024
            ELSE IF ( SMALL(1) .EQ. -2065213935
     *          .AND. SMALL(2) .EQ. 10752) THEN
*               *** VAX WITH D_FLOATING ***
               IMACH(10) = 2
               IMACH(14) = 56
               IMACH(15) = -127
               IMACH(16) = 127
            ELSE IF ( SMALL(1) .EQ. 1267827943
     *          .AND. SMALL(2) .EQ. 704643072) THEN
*               *** IBM MAINFRAME ***
               IMACH(10) = 16
               IMACH(14) = 14
               IMACH(15) = -64
               IMACH(16) = 63
            ELSE
               WRITE(*,9010)
               STOP 777
               END IF
            IMACH(11) = IMACH(14)
            IMACH(12) = IMACH(15)
            IMACH(13) = IMACH(16)
         ELSE
            RMACH = 1234567.
            IF (SMALL(1) .EQ. 1234613304) THEN
*               *** IEEE ***
               IMACH(10) = 2
               IMACH(11) = 24
               IMACH(12) = -125
               IMACH(13) = 128
               IMACH(14) = 53
               IMACH(15) = -1021
               IMACH(16) = 1024
               SANITY = 987
            ELSE IF (SMALL(1) .EQ. -1271379306) THEN
*               *** VAX ***
               IMACH(10) = 2
               IMACH(11) = 24
               IMACH(12) = -127
               IMACH(13) = 127
               IMACH(14) = 56
               IMACH(15) = -127
               IMACH(16) = 127
               SANITY = 987
            ELSE IF (SMALL(1) .EQ. 1175639687) THEN
*               *** IBM MAINFRAME ***
               IMACH(10) = 16
               IMACH(11) = 6
               IMACH(12) = -64
               IMACH(13) = 63
               IMACH(14) = 14
               IMACH(15) = -64
               IMACH(16) = 63
               SANITY = 987
            ELSE IF (SMALL(1) .EQ. 1251390520) THEN
*              *** CONVEX C-1 ***
               IMACH(10) = 2
               IMACH(11) = 24
               IMACH(12) = -128
               IMACH(13) = 127
               IMACH(14) = 53
               IMACH(15) = -1024
               IMACH(16) = 1023
            ELSE
               DO 10 I = 1, 3
                  J = SMALL(1) / 10000000
                  K = SMALL(1) - 10000000*J
                  IF (K .NE. T3E(I)) GO TO 20
                  SMALL(1) = J
 10               CONTINUE
*              *** CRAY T3E ***
               IMACH(10) = 2
               IMACH(11) = 53
               IMACH(12) = -1024
               IMACH(13) = 1023
               IMACH(14) = 0
               IMACH(15) = 0
               IMACH(16) = 0
               GO TO 30
 20            CALL I1MCR1(J, K, 16405, 9876536, 0)
               IF (SMALL(1) .NE. J) THEN
                  WRITE(*,9020)
                  STOP 777
                  END IF
*              *** CRAY 1, XMP, 2, AND 3 ***
               IMACH(1) = 5
               IMACH(2) = 6
               IMACH(3) = 102
               IMACH(4) = 6
               IMACH(5) = 64
               IMACH(6) = 8
               IMACH(7) = 2
               IMACH(8) = 63
               CALL I1MCR1(IMACH(9), K, 32767, 16777215, 16777215)
               IMACH(10) = 2
               IMACH(11) = 47
               IMACH(12) = -8189
               IMACH(13) = 8190
               IMACH(14) = 94
               IMACH(15) = -8099
               IMACH(16) = 8190
               GO TO 35
               END IF
            END IF
 30      IMACH( 1) = 5
         IMACH( 2) = 6
         IMACH( 3) = 7
         IMACH( 4) = 6
         IMACH( 5) = 32
         IMACH( 6) = 4
         IMACH( 7) = 2
         IMACH( 8) = 31
         IMACH( 9) = 2147483647
 35      SANITY = 987
         END IF
 9010 FORMAT(/' Adjust autodoubled I1MACH by uncommenting data'/
     * ' statements appropriate for your machine and setting'/
     * ' IMACH(I) = IMACH(I+3) for I = 11, 12, and 13.')
 9020 FORMAT(/' Adjust I1MACH by uncommenting data statements'/
     * ' appropriate for your machine.')
      IF (I .LT. 1  .OR.  I .GT. 16) GO TO 40
      I1MACH = IMACH(I)
C REMOVE THE FOLLOWING LINE IF FORTRAN66 IS PREFERRED TO FORTRAN77.
      IF (I .EQ. 6) I1MACH = 1
      RETURN
 40   WRITE(*,*) 'I1MACH(I): I =',I,' is out of bounds.'
      STOP
* /* C source for I1MACH -- remove the * in column 1 */
* /* Note that some values may need changing. */
*#include <stdio.h>
*#include <float.h>
*#include <limits.h>
*#include <math.h>
*
*long i1mach_(long *i)
*{
*	switch(*i){
*	  case 1:  return 5;	/* standard input */
*	  case 2:  return 6;	/* standard output */
*	  case 3:  return 7;	/* standard punch */
*	  case 4:  return 0;	/* standard error */
*	  case 5:  return 32;	/* bits per integer */
*	  case 6:  return 1;	/* Fortran 77 value */
*	  case 7:  return 2;	/* base for integers */
*	  case 8:  return 31;	/* digits of integer base */
*	  case 9:  return LONG_MAX;
*	  case 10: return FLT_RADIX;
*	  case 11: return FLT_MANT_DIG;
*	  case 12: return FLT_MIN_EXP;
*	  case 13: return FLT_MAX_EXP;
*	  case 14: return DBL_MANT_DIG;
*	  case 15: return DBL_MIN_EXP;
*	  case 16: return DBL_MAX_EXP;
*	  }
*	fprintf(stderr, "invalid argument: i1mach(%ld)\n", *i);
*	exit(1);return 0; /* some compilers demand return values */
*}
      END
      SUBROUTINE I1MCR1(A, A1, B, C, D)
**** SPECIAL COMPUTATION FOR OLD CRAY MACHINES ****
      INTEGER A, A1, B, C, D
      A1 = 16777216*B + C
      A = 16777216*A1 + D
      END
c-----------------------------------------------------------------------
      double precision function dgamln(z,ierr)
c     Logarithm of Gamma function
c     author  Amos, Donald E., Sandia National Laboratories
c
c         dgamln computes the natural log of the gamma function for
c         z.gt.0.  the asymptotic expansion is used to generate values
c         greater than zmin which are adjusted by the recursion
c         g(z+1)=z*g(z) for z.le.zmin.  the function was made as
c         portable as possible by computimg zmin from the number of base
c         10 digits in a word, rln=amax1(-alog10(r1mach(4)),0.5e-18)
c         limited to 18 digits of (relative) accuracy.
c
c         since integer arguments are common, a table look up on 100
c         values is used for speed of execution.
c
c     description of arguments
c
c         input      z is d0uble precision
c           z      - argument, z.gt.0.0d0
c
c         output      dgamln is double precision
c           dgamln  - natural log of the gamma function at z.ne.0.0d0
c           ierr    - error flag
c                     ierr=0, normal return, computation completed
c                     ierr=1, z.le.0.0d0,    no computation
c
c
c***routines called  i1mach,d1mach
      double precision cf, con, fln, fz, gln, rln, s, tlg, trm, tst,
     * t1, wdtol, z, zdmy, zinc, zm, zmin, zp, zsq, d1mach
      integer i, ierr, i1m, k, mz, nz, i1mach
      dimension cf(22), gln(100)
c           lngamma(n), n=1,100
      data gln(1), gln(2), gln(3), gln(4), gln(5), gln(6), gln(7),
     1     gln(8), gln(9), gln(10), gln(11), gln(12), gln(13), gln(14),
     2     gln(15), gln(16), gln(17), gln(18), gln(19), gln(20),
     3     gln(21), gln(22)/
     4     0.00000000000000000d+00,     0.00000000000000000d+00,
     5     6.93147180559945309d-01,     1.79175946922805500d+00,
     6     3.17805383034794562d+00,     4.78749174278204599d+00,
     7     6.57925121201010100d+00,     8.52516136106541430d+00,
     8     1.06046029027452502d+01,     1.28018274800814696d+01,
     9     1.51044125730755153d+01,     1.75023078458738858d+01,
     a     1.99872144956618861d+01,     2.25521638531234229d+01,
     b     2.51912211827386815d+01,     2.78992713838408916d+01,
     c     3.06718601060806728d+01,     3.35050734501368889d+01,
     d     3.63954452080330536d+01,     3.93398841871994940d+01,
     e     4.23356164607534850d+01,     4.53801388984769080d+01/
      data gln(23), gln(24), gln(25), gln(26), gln(27), gln(28),
     1     gln(29), gln(30), gln(31), gln(32), gln(33), gln(34),
     2     gln(35), gln(36), gln(37), gln(38), gln(39), gln(40),
     3     gln(41), gln(42), gln(43), gln(44)/
     4     4.84711813518352239d+01,     5.16066755677643736d+01,
     5     5.47847293981123192d+01,     5.80036052229805199d+01,
     6     6.12617017610020020d+01,     6.45575386270063311d+01,
     7     6.78897431371815350d+01,     7.12570389671680090d+01,
     8     7.46582363488301644d+01,     7.80922235533153106d+01,
     9     8.15579594561150372d+01,     8.50544670175815174d+01,
     a     8.85808275421976788d+01,     9.21361756036870925d+01,
     b     9.57196945421432025d+01,     9.93306124547874269d+01,
     c     1.02968198614513813d+02,     1.06631760260643459d+02,
     d     1.10320639714757395d+02,     1.14034211781461703d+02,
     e     1.17771881399745072d+02,     1.21533081515438634d+02/
      data gln(45), gln(46), gln(47), gln(48), gln(49), gln(50),
     1     gln(51), gln(52), gln(53), gln(54), gln(55), gln(56),
     2     gln(57), gln(58), gln(59), gln(60), gln(61), gln(62),
     3     gln(63), gln(64), gln(65), gln(66)/
     4     1.25317271149356895d+02,     1.29123933639127215d+02,
     5     1.32952575035616310d+02,     1.36802722637326368d+02,
     6     1.40673923648234259d+02,     1.44565743946344886d+02,
     7     1.48477766951773032d+02,     1.52409592584497358d+02,
     8     1.56360836303078785d+02,     1.60331128216630907d+02,
     9     1.64320112263195181d+02,     1.68327445448427652d+02,
     a     1.72352797139162802d+02,     1.76395848406997352d+02,
     b     1.80456291417543771d+02,     1.84533828861449491d+02,
     c     1.88628173423671591d+02,     1.92739047287844902d+02,
     d     1.96866181672889994d+02,     2.01009316399281527d+02,
     e     2.05168199482641199d+02,     2.09342586752536836d+02/
      data gln(67), gln(68), gln(69), gln(70), gln(71), gln(72),
     1     gln(73), gln(74), gln(75), gln(76), gln(77), gln(78),
     2     gln(79), gln(80), gln(81), gln(82), gln(83), gln(84),
     3     gln(85), gln(86), gln(87), gln(88)/
     4     2.13532241494563261d+02,     2.17736934113954227d+02,
     5     2.21956441819130334d+02,     2.26190548323727593d+02,
     6     2.30439043565776952d+02,     2.34701723442818268d+02,
     7     2.38978389561834323d+02,     2.43268849002982714d+02,
     8     2.47572914096186884d+02,     2.51890402209723194d+02,
     9     2.56221135550009525d+02,     2.60564940971863209d+02,
     a     2.64921649798552801d+02,     2.69291097651019823d+02,
     b     2.73673124285693704d+02,     2.78067573440366143d+02,
     c     2.82474292687630396d+02,     2.86893133295426994d+02,
     d     2.91323950094270308d+02,     2.95766601350760624d+02,
     e     3.00220948647014132d+02,     3.04686856765668715d+02/
      data gln(89), gln(90), gln(91), gln(92), gln(93), gln(94),
     1     gln(95), gln(96), gln(97), gln(98), gln(99), gln(100)/
     2     3.09164193580146922d+02,     3.13652829949879062d+02,
     3     3.18152639620209327d+02,     3.22663499126726177d+02,
     4     3.27185287703775217d+02,     3.31717887196928473d+02,
     5     3.36261181979198477d+02,     3.40815058870799018d+02,
     6     3.45379407062266854d+02,     3.49954118040770237d+02,
     7     3.54539085519440809d+02,     3.59134205369575399d+02/
c             coefficients of asymptotic expansion
      data cf(1), cf(2), cf(3), cf(4), cf(5), cf(6), cf(7), cf(8),
     1     cf(9), cf(10), cf(11), cf(12), cf(13), cf(14), cf(15),
     2     cf(16), cf(17), cf(18), cf(19), cf(20), cf(21), cf(22)/
     3     8.33333333333333333d-02,    -2.77777777777777778d-03,
     4     7.93650793650793651d-04,    -5.95238095238095238d-04,
     5     8.41750841750841751d-04,    -1.91752691752691753d-03,
     6     6.41025641025641026d-03,    -2.95506535947712418d-02,
     7     1.79644372368830573d-01,    -1.39243221690590112d+00,
     8     1.34028640441683920d+01,    -1.56848284626002017d+02,
     9     2.19310333333333333d+03,    -3.61087712537249894d+04,
     a     6.91472268851313067d+05,    -1.52382215394074162d+07,
     b     3.82900751391414141d+08,    -1.08822660357843911d+10,
     c     3.47320283765002252d+11,    -1.23696021422692745d+13,
     d     4.88788064793079335d+14,    -2.13203339609193739d+16/
c
c             ln(2*pi)
      data con                    /     1.83787706640934548d+00/
c
c***first executable statement  dgamln
      ierr=0
      if (z.le.0.0d0) go to 70
      if (z.gt.101.0d0) go to 10
      nz = int(sngl(z))
      fz = z - float(nz)
      if (fz.gt.0.0d0) go to 10
      if (nz.gt.100) go to 10
      dgamln = gln(nz)
      return
   10 continue
      wdtol = d1mach(4)
      wdtol = dmax1(wdtol,0.5d-18)
      i1m = i1mach(14)
      rln = d1mach(5)*float(i1m)
      fln = dmin1(rln,20.0d0)
      fln = dmax1(fln,3.0d0)
      fln = fln - 3.0d0
      zm = 1.8000d0 + 0.3875d0*fln
      mz = int(sngl(zm)) + 1
      zmin = float(mz)
      zdmy = z
      zinc = 0.0d0
      if (z.ge.zmin) go to 20
      zinc = zmin - float(nz)
      zdmy = z + zinc
   20 continue
      zp = 1.0d0/zdmy
      t1 = cf(1)*zp
      s = t1
      if (zp.lt.wdtol) go to 40
      zsq = zp*zp
      tst = t1*wdtol
      do 30 k=2,22
        zp = zp*zsq
        trm = cf(k)*zp
        if (dabs(trm).lt.tst) go to 40
        s = s + trm
   30 continue
   40 continue
      if (zinc.ne.0.0d0) go to 50
      tlg = dlog(z)
      dgamln = z*(tlg-1.0d0) + 0.5d0*(con-tlg) + s
      return
   50 continue
      zp = 1.0d0
      nz = int(sngl(zinc))
      do 60 i=1,nz
        zp = zp*(z+float(i-1))
   60 continue
      tlg = dlog(zdmy)
      dgamln = zdmy*(tlg-1.0d0) - dlog(zp) + 0.5d0*(con-tlg) + s
      return
c
c
   70 continue     
      dgamln = d1mach(7)
      ierr=1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine xerror(mess,nmess,l1,l2)
c
c     this is a dummy xerror routine to print error messages with nmess
c     characters. l1 and l2 are dummy parameters to make this call
c     compatible with the slatec xerror routine. this is a fortran 77
c     routine.
c
      character*(*) mess
      nn=nmess/70
      nr=nmess-70*nn
      if(nr.ne.0) nn=nn+1
      k=1
      print 900
  900 format(/)
      do 10 i=1,nn
        kmin=min0(k+69,nmess)
        print *, mess(k:kmin)
        k=k+70
   10 continue
      print 900
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      double precision function zabs2(zr, zi)
c     refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c     zabs2 computes the absolute value or magnitude of a double
c     precision complex variable cmplx(zr,zi)
c
      double precision zr, zi, u, v, q, s
      u = dabs(zr)
      v = dabs(zi)
      s = u + v
c-----------------------------------------------------------------------
c     s*1.0d0 makes an unnormalized underflow on cdc machines into a
c     true floating zero
c-----------------------------------------------------------------------
      s = s*1.0d+0
      if (s.eq.0.0d+0) go to 20
      if (u.gt.v) go to 10
      q = u/v
      zabs2 = v*dsqrt(1.d+0+q*q)
      return
   10 q = v/u
      zabs2 = u*dsqrt(1.d+0+q*q)
      return
   20 zabs2 = 0.0d+0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zacai(zr, zi, fnu, kode, mr, n, yr, yi, nz, rl, tol,
     * elim, alim)
c     Refer to  zairy
c
c     zacai applies the analytic continuation formula
c
c         k(fnu,zn*exp(mp))=k(fnu,zn)*exp(-mp*fnu) - mp*i(fnu,zn)
c                 mp=pi*mr*cmplx(0.0,1.0)
c
c     to continue the k function from the right half to the left
c     half z plane for use with zairy where fnu=1/3 or 2/3 and n=1.
c     zacai is the same as zacon with the parts for larger orders and
c     recurrence removed. a recursive call to zacon can result if zacon
c     is called from zairy.
c
c***routines called  zasyi,zbknu,zmlri,zseri,zs1s2,d1mach,zabs2
c     complex csgn,cspn,c1,c2,y,z,zn,cy
      double precision alim, arg, ascle, az, csgnr, csgni, cspnr,
     * cspni, c1r, c1i, c2r, c2i, cyr, cyi, dfnu, elim, fmr, fnu, pi,
     * rl, sgn, tol, yy, yr, yi, zr, zi, znr, zni, d1mach, zabs2
      integer inu, iuf, kode, mr, n, nn, nw, nz
      dimension yr(n), yi(n), cyr(2), cyi(2)
      data pi / 3.14159265358979324d0 /
      nz = 0
      znr = -zr
      zni = -zi
      az = zabs2(zr,zi)
      nn = n
      dfnu = fnu + dble(float(n-1))
      if (az.le.2.0d0) go to 10
      if (az*az*0.25d0.gt.dfnu+1.0d0) go to 20
   10 continue
c-----------------------------------------------------------------------
c     power series for the i function
c-----------------------------------------------------------------------
      call zseri(znr, zni, fnu, kode, nn, yr, yi, nw, tol, elim, alim)
      go to 40
   20 continue
      if (az.lt.rl) go to 30
c-----------------------------------------------------------------------
c     asymptotic expansion for large z for the i function
c-----------------------------------------------------------------------
      call zasyi(znr, zni, fnu, kode, nn, yr, yi, nw, rl, tol, elim,
     * alim)
      if (nw.lt.0) go to 80
      go to 40
   30 continue
c-----------------------------------------------------------------------
c     miller algorithm normalized by the series for the i function
c-----------------------------------------------------------------------
      call zmlri(znr, zni, fnu, kode, nn, yr, yi, nw, tol)
      if(nw.lt.0) go to 80
   40 continue
c-----------------------------------------------------------------------
c     analytic continuation to the left half plane for the k function
c-----------------------------------------------------------------------
      call zbknu(znr, zni, fnu, kode, 1, cyr, cyi, nw, tol, elim, alim)
      if (nw.ne.0) go to 80
      fmr = dble(float(mr))
      sgn = -dsign(pi,fmr)
      csgnr = 0.0d0
      csgni = sgn
      if (kode.eq.1) go to 50
      yy = -zni
      csgnr = -csgni*dsin(yy)
      csgni = csgni*dcos(yy)
   50 continue
c-----------------------------------------------------------------------
c     calculate cspn=exp(fnu*pi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      arg = (fnu-dble(float(inu)))*sgn
      cspnr = dcos(arg)
      cspni = dsin(arg)
      if (mod(inu,2).eq.0) go to 60
      cspnr = -cspnr
      cspni = -cspni
   60 continue
      c1r = cyr(1)
      c1i = cyi(1)
      c2r = yr(1)
      c2i = yi(1)
      if (kode.eq.1) go to 70
      iuf = 0
      ascle = 1.0d+3*d1mach(1)/tol
      call zs1s2(znr, zni, c1r, c1i, c2r, c2i, nw, ascle, alim, iuf)
      nz = nz + nw
   70 continue
      yr(1) = cspnr*c1r - cspni*c1i + csgnr*c2r - csgni*c2i
      yi(1) = cspnr*c1i + cspni*c1r + csgnr*c2i + csgni*c2r
      return
   80 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
      end
c-----------------------------------------------------------------------
      subroutine zacon(zr, zi, fnu, kode, mr, n, yr, yi, nz, rl, fnul,
     * tol, elim, alim)
c     Refer to  zbesk,zbesh
c
c     zacon applies the analytic continuation formula
c
c         k(fnu,zn*exp(mp))=k(fnu,zn)*exp(-mp*fnu) - mp*i(fnu,zn)
c                 mp=pi*mr*cmplx(0.0,1.0)
c
c     to continue the k function from the right half to the left
c     half z plane
c
c***routines called  zbinu,zbknu,zs1s2,d1mach,zabs2,zmlt
c
c     complex ck,cone,cscl,cscr,csgn,cspn,cy,czero,c1,c2,rz,sc1,sc2,st,
c    *s1,s2,y,z,zn
      double precision alim, arg, ascle, as2, azn, bry, bscle, cki,
     * ckr, coner, cpn, cscl, cscr, csgni, csgnr, cspni, cspnr,
     * csr, csrr, cssr, cyi, cyr, c1i, c1m, c1r, c2i, c2r, elim, fmr,
     * fn, fnu, fnul, pi, pti, ptr, razn, rl, rzi, rzr, sc1i, sc1r,
     * sc2i, sc2r, sgn, spn, sti, str, s1i, s1r, s2i, s2r, tol, yi, yr,
     * yy, zeror, zi, zni, znr, zr, d1mach, zabs2
      integer i, inu, iuf, kflag, kode, mr, n, nn, nw, nz
      dimension yr(n), yi(n), cyr(2), cyi(2), cssr(3), csrr(3), bry(3)
      data pi / 3.14159265358979324d0 /
      data zeror,coner / 0.0d0,1.0d0 /
      nz = 0
      znr = -zr
      zni = -zi
      nn = n
      call zbinu(znr, zni, fnu, kode, nn, yr, yi, nw, rl, fnul, tol,
     * elim, alim)
      if (nw.lt.0) go to 90
c-----------------------------------------------------------------------
c     analytic continuation to the left half plane for the k function
c-----------------------------------------------------------------------
      nn = min0(2,n)
      call zbknu(znr, zni, fnu, kode, nn, cyr, cyi, nw, tol, elim, alim)
      if (nw.ne.0) go to 90
      s1r = cyr(1)
      s1i = cyi(1)
      fmr = dble(float(mr))
      sgn = -dsign(pi,fmr)
      csgnr = zeror
      csgni = sgn
      if (kode.eq.1) go to 10
      yy = -zni
      cpn = dcos(yy)
      spn = dsin(yy)
      call zmlt(csgnr, csgni, cpn, spn, csgnr, csgni)
   10 continue
c-----------------------------------------------------------------------
c     calculate cspn=exp(fnu*pi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      arg = (fnu-dble(float(inu)))*sgn
      cpn = dcos(arg)
      spn = dsin(arg)
      cspnr = cpn
      cspni = spn
      if (mod(inu,2).eq.0) go to 20
      cspnr = -cspnr
      cspni = -cspni
   20 continue
      iuf = 0
      c1r = s1r
      c1i = s1i
      c2r = yr(1)
      c2i = yi(1)
      ascle = 1.0d+3*d1mach(1)/tol
      if (kode.eq.1) go to 30
      call zs1s2(znr, zni, c1r, c1i, c2r, c2i, nw, ascle, alim, iuf)
      nz = nz + nw
      sc1r = c1r
      sc1i = c1i
   30 continue
      call zmlt(cspnr, cspni, c1r, c1i, str, sti)
      call zmlt(csgnr, csgni, c2r, c2i, ptr, pti)
      yr(1) = str + ptr
      yi(1) = sti + pti
      if (n.eq.1) return
      cspnr = -cspnr
      cspni = -cspni
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = s2r
      c1i = s2i
      c2r = yr(2)
      c2i = yi(2)
      if (kode.eq.1) go to 40
      call zs1s2(znr, zni, c1r, c1i, c2r, c2i, nw, ascle, alim, iuf)
      nz = nz + nw
      sc2r = c1r
      sc2i = c1i
   40 continue
      call zmlt(cspnr, cspni, c1r, c1i, str, sti)
      call zmlt(csgnr, csgni, c2r, c2i, ptr, pti)
      yr(2) = str + ptr
      yi(2) = sti + pti
      if (n.eq.2) return
      cspnr = -cspnr
      cspni = -cspni
      azn = zabs2(znr,zni)
      razn = 1.0d0/azn
      str = znr*razn
      sti = -zni*razn
      rzr = (str+str)*razn
      rzi = (sti+sti)*razn
      fn = fnu + 1.0d0
      ckr = fn*rzr
      cki = fn*rzi
c-----------------------------------------------------------------------
c     scale near exponent extremes during recurrence on k functions
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      cscr = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = cscr
      csrr(1) = cscr
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = ascle
      bry(2) = 1.0d0/ascle
      bry(3) = d1mach(2)
      as2 = zabs2(s2r,s2i)
      kflag = 2
      if (as2.gt.bry(1)) go to 50
      kflag = 1
      go to 60
   50 continue
      if (as2.lt.bry(2)) go to 60
      kflag = 3
   60 continue
      bscle = bry(kflag)
      s1r = s1r*cssr(kflag)
      s1i = s1i*cssr(kflag)
      s2r = s2r*cssr(kflag)
      s2i = s2i*cssr(kflag)
      csr = csrr(kflag)
      do 80 i=3,n
        str = s2r
        sti = s2i
        s2r = ckr*str - cki*sti + s1r
        s2i = ckr*sti + cki*str + s1i
        s1r = str
        s1i = sti
        c1r = s2r*csr
        c1i = s2i*csr
        str = c1r
        sti = c1i
        c2r = yr(i)
        c2i = yi(i)
        if (kode.eq.1) go to 70
        if (iuf.lt.0) go to 70
        call zs1s2(znr, zni, c1r, c1i, c2r, c2i, nw, ascle, alim, iuf)
        nz = nz + nw
        sc1r = sc2r
        sc1i = sc2i
        sc2r = c1r
        sc2i = c1i
        if (iuf.ne.3) go to 70
        iuf = -4
        s1r = sc1r*cssr(kflag)
        s1i = sc1i*cssr(kflag)
        s2r = sc2r*cssr(kflag)
        s2i = sc2i*cssr(kflag)
        str = sc2r
        sti = sc2i
   70   continue
        ptr = cspnr*c1r - cspni*c1i
        pti = cspnr*c1i + cspni*c1r
        yr(i) = ptr + csgnr*c2r - csgni*c2i
        yi(i) = pti + csgnr*c2i + csgni*c2r
        ckr = ckr + rzr
        cki = cki + rzi
        cspnr = -cspnr
        cspni = -cspni
        if (kflag.ge.3) go to 80
        ptr = dabs(c1r)
        pti = dabs(c1i)
        c1m = dmax1(ptr,pti)
        if (c1m.le.bscle) go to 80
        kflag = kflag + 1
        bscle = bry(kflag)
        s1r = s1r*csr
        s1i = s1i*csr
        s2r = str
        s2i = sti
        s1r = s1r*cssr(kflag)
        s1i = s1i*cssr(kflag)
        s2r = s2r*cssr(kflag)
        s2i = s2i*cssr(kflag)
        csr = csrr(kflag)
   80 continue
      return
   90 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zdiv(ar, ai, br, bi, cr, ci)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex divide c=a/b.
c
c***routines called  zabs2
c
      double precision ar, ai, br, bi, cr, ci, bm, ca, cb, cc, cd
      double precision zabs2
      bm = 1.0d0/zabs2(br,bi)
      cc = br*bm
      cd = bi*bm
      ca = (ar*cc+ai*cd)*bm
      cb = (ai*cc-ar*cd)*bm
      cr = ca
      ci = cb
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zexp(ar, ai, br, bi)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex exponential function b=exp(a)
c
      double precision ar, ai, br, bi, zm, ca, cb
      zm = dexp(ar)
      ca = zm*dcos(ai)
      cb = zm*dsin(ai)
      br = ca
      bi = cb
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zkscl(zrr,zri,fnu,n,yr,yi,nz,rzr,rzi,ascle,tol,elim)
c     geuz for g77
      EXTERNAL zlog
c     refer to  zbesk
c
c     set k functions to zero on underflow, continue recurrence
c     on scaled functions until two members come on scale, then
c     return with min(nz+2,n) values scaled by 1/tol.
c
c     routines called  zuchk,zabs2,zlog
c
c     complex ck,cs,cy,czero,rz,s1,s2,y,zr,zd,celm
      double precision acs, as, ascle, cki, ckr, csi, csr, cyi,
     * cyr, elim, fn, fnu, rzi, rzr, str, s1i, s1r, s2i,
     * s2r, tol, yi, yr, zeroi, zeror, zri, zrr, zabs2,
     * zdr, zdi, celmr, elm, helim, alas
      integer i, ic, idum, kk, n, nn, nw, nz
      dimension yr(n), yi(n), cyr(2), cyi(2)
      data zeror,zeroi / 0.0d0 , 0.0d0 /
c
      nz = 0
      ic = 0
      nn = min0(2,n)
      do 10 i=1,nn
        s1r = yr(i)
        s1i = yi(i)
        cyr(i) = s1r
        cyi(i) = s1i
        as = zabs2(s1r,s1i)
        acs = -zrr + dlog(as)
        nz = nz + 1
        yr(i) = zeror
        yi(i) = zeroi
        if (acs.lt.(-elim)) go to 10
        call zlog(s1r, s1i, csr, csi, idum)
        csr = csr - zrr
        csi = csi - zri
        str = dexp(csr)/tol
        csr = str*dcos(csi)
        csi = str*dsin(csi)
        call zuchk(csr, csi, nw, ascle, tol)
        if (nw.ne.0) go to 10
        yr(i) = csr
        yi(i) = csi
        ic = i
        nz = nz - 1
   10 continue
      if (n.eq.1) return
      if (ic.gt.1) go to 20
      yr(1) = zeror
      yi(1) = zeroi
      nz = 2
   20 continue
      if (n.eq.2) return
      if (nz.eq.0) return
      fn = fnu + 1.0d0
      ckr = fn*rzr
      cki = fn*rzi
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      helim = 0.5d0*elim
      elm = dexp(-elim)
      celmr = elm
      zdr = zrr
      zdi = zri
c
c     find two consecutive y values on scale. scale recurrence if
c     s2 gets larger than exp(elim/2)
c
      do 30 i=3,n
        kk = i
        csr = s2r
        csi = s2i
        s2r = ckr*csr - cki*csi + s1r
        s2i = cki*csr + ckr*csi + s1i
        s1r = csr
        s1i = csi
        ckr = ckr + rzr
        cki = cki + rzi
        as = zabs2(s2r,s2i)
        alas = dlog(as)
        acs = -zdr + alas
        nz = nz + 1
        yr(i) = zeror
        yi(i) = zeroi
        if (acs.lt.(-elim)) go to 25
        call zlog(s2r, s2i, csr, csi, idum)
        csr = csr - zdr
        csi = csi - zdi
        str = dexp(csr)/tol
        csr = str*dcos(csi)
        csi = str*dsin(csi)
        call zuchk(csr, csi, nw, ascle, tol)
        if (nw.ne.0) go to 25
        yr(i) = csr
        yi(i) = csi
        nz = nz - 1
        if (ic.eq.kk-1) go to 40
        ic = kk
        go to 30
   25   continue
        if(alas.lt.helim) go to 30
        zdr = zdr - elim
        s1r = s1r*celmr
        s1i = s1i*celmr
        s2r = s2r*celmr
        s2i = s2i*celmr
   30 continue
      nz = n
      if(ic.eq.n) nz=n-1
      go to 45
   40 continue
      nz = kk - 2
   45 continue
      do 50 i=1,nz
        yr(i) = zeror
        yi(i) = zeroi
   50 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zlog(ar, ai, br, bi, ierr)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex logarithm b=clog(a)
c     ierr=0,normal return      ierr=1, z=cmplx(0.0,0.0)
c***routines called  zabs2
      double precision ar, ai, br, bi, zm, dtheta, dpi, dhpi
      double precision zabs2
      data dpi , dhpi  / 3.141592653589793238462643383d+0,
     1                   1.570796326794896619231321696d+0/
c
      ierr=0
      if (ar.eq.0.0d+0) go to 10
      if (ai.eq.0.0d+0) go to 20
      dtheta = datan(ai/ar)
      if (dtheta.le.0.0d+0) go to 40
      if (ar.lt.0.0d+0) dtheta = dtheta - dpi
      go to 50
   10 if (ai.eq.0.0d+0) go to 60
      bi = dhpi
      br = dlog(dabs(ai))
      if (ai.lt.0.0d+0) bi = -bi
      return
   20 if (ar.gt.0.0d+0) go to 30
      br = dlog(dabs(ar))
      bi = dpi
      return
   30 br = dlog(ar)
      bi = 0.0d+0
      return
   40 if (ar.lt.0.0d+0) dtheta = dtheta + dpi
   50 zm = zabs2(ar,ai)
      br = dlog(zm)
      bi = dtheta
      return
   60 continue
      ierr=1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zmlt(ar, ai, br, bi, cr, ci)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex multiply, c=a*b.
c
      double precision ar, ai, br, bi, cr, ci, ca, cb
      ca = ar*br - ai*bi
      cb = ar*bi + ai*br
      cr = ca
      ci = cb
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zrati(zr, zi, fnu, n, cyr, cyi, tol)
c     Refer to  zbesi,zbesk,zbesh
c
c     zrati computes ratios of i bessel functions by backward
c     recurrence.  the starting index is determined by forward
c     recurrence as described in j. res. of nat. bur. of standards-b,
c     mathematical sciences, vol 77b, p111-114, september, 1973,
c     bessel functions i and j of complex argument and integer order,
c     by d. j. sookne.
c
c***routines called  zabs2,zdiv
c     complex z,cy(1),cone,czero,p1,p2,t1,rz,pt,cdfnu
      double precision ak, amagz, ap1, ap2, arg, az, cdfnui, cdfnur,
     * conei, coner, cyi, cyr, czeroi, czeror, dfnu, fdnu, flam, fnu,
     * fnup, pti, ptr, p1i, p1r, p2i, p2r, rak, rap1, rho, rt2, rzi,
     * rzr, test, test1, tol, tti, ttr, t1i, t1r, zi, zr, zabs2
      integer i, id, idnu, inu, itime, k, kk, magz, n
      dimension cyr(n), cyi(n)
      data czeror,czeroi,coner,conei,rt2/
     1 0.0d0, 0.0d0, 1.0d0, 0.0d0, 1.41421356237309505d0 /
      az = zabs2(zr,zi)
      inu = int(sngl(fnu))
      idnu = inu + n - 1
      magz = int(sngl(az))
      amagz = dble(float(magz+1))
      fdnu = dble(float(idnu))
      fnup = dmax1(amagz,fdnu)
      id = idnu - magz - 1
      itime = 1
      k = 1
      ptr = 1.0d0/az
      rzr = ptr*(zr+zr)*ptr
      rzi = -ptr*(zi+zi)*ptr
      t1r = rzr*fnup
      t1i = rzi*fnup
      p2r = -t1r
      p2i = -t1i
      p1r = coner
      p1i = conei
      t1r = t1r + rzr
      t1i = t1i + rzi
      if (id.gt.0) id = 0
      ap2 = zabs2(p2r,p2i)
      ap1 = zabs2(p1r,p1i)
c-----------------------------------------------------------------------
c     the overflow test on k(fnu+i-1,z) before the call to cbknu
c     guarantees that p2 is on scale. scale test1 and all subsequent
c     p2 values by ap1 to ensure that an overflow does not occur
c     prematurely.
c-----------------------------------------------------------------------
      arg = (ap2+ap2)/(ap1*tol)
      test1 = dsqrt(arg)
      test = test1
      rap1 = 1.0d0/ap1
      p1r = p1r*rap1
      p1i = p1i*rap1
      p2r = p2r*rap1
      p2i = p2i*rap1
      ap2 = ap2*rap1
   10 continue
      k = k + 1
      ap1 = ap2
      ptr = p2r
      pti = p2i
      p2r = p1r - (t1r*ptr-t1i*pti)
      p2i = p1i - (t1r*pti+t1i*ptr)
      p1r = ptr
      p1i = pti
      t1r = t1r + rzr
      t1i = t1i + rzi
      ap2 = zabs2(p2r,p2i)
      if (ap1.le.test) go to 10
      if (itime.eq.2) go to 20
      ak = zabs2(t1r,t1i)*0.5d0
      flam = ak + dsqrt(ak*ak-1.0d0)
      rho = dmin1(ap2/ap1,flam)
      test = test1*dsqrt(rho/(rho*rho-1.0d0))
      itime = 2
      go to 10
   20 continue
      kk = k + 1 - id
      ak = dble(float(kk))
      t1r = ak
      t1i = czeroi
      dfnu = fnu + dble(float(n-1))
      p1r = 1.0d0/ap2
      p1i = czeroi
      p2r = czeror
      p2i = czeroi
      do 30 i=1,kk
        ptr = p1r
        pti = p1i
        rap1 = dfnu + t1r
        ttr = rzr*rap1
        tti = rzi*rap1
        p1r = (ptr*ttr-pti*tti) + p2r
        p1i = (ptr*tti+pti*ttr) + p2i
        p2r = ptr
        p2i = pti
        t1r = t1r - coner
   30 continue
      if (p1r.ne.czeror .or. p1i.ne.czeroi) go to 40
      p1r = tol
      p1i = tol
   40 continue
      call zdiv(p2r, p2i, p1r, p1i, cyr(n), cyi(n))
      if (n.eq.1) return
      k = n - 1
      ak = dble(float(k))
      t1r = ak
      t1i = czeroi
      cdfnur = fnu*rzr
      cdfnui = fnu*rzi
      do 60 i=2,n
        ptr = cdfnur + (t1r*rzr-t1i*rzi) + cyr(k+1)
        pti = cdfnui + (t1r*rzi+t1i*rzr) + cyi(k+1)
        ak = zabs2(ptr,pti)
        if (ak.ne.czeror) go to 50
        ptr = tol
        pti = tol
        ak = tol*rt2
   50   continue
        rak = coner/ak
        cyr(k) = rak*ptr*rak
        cyi(k) = -rak*pti*rak
        t1r = t1r - coner
        k = k - 1
   60 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zs1s2(zrr, zri, s1r, s1i, s2r, s2i, nz, ascle, alim,
     * iuf)
c     geuz for g77
      EXTERNAL zexp
      EXTERNAL zlog
c     Refer to  zbesk,zairy
c
c     zs1s2 tests for a possible underflow resulting from the
c     addition of the i and k functions in the analytic con-
c     tinuation formula where s1=k function and s2=i function.
c     on kode=1 the i and k functions are different orders of
c     magnitude, but for kode=2 they can be of the same order
c     of magnitude and the maximum must be at least one
c     precision above the underflow limit.
c
c***routines called  zabs2,zexp,zlog
c     complex czero,c1,s1,s1d,s2,zr
      double precision aa, alim, aln, ascle, as1, as2, c1i, c1r, s1di,
     * s1dr, s1i, s1r, s2i, s2r, zeroi, zeror, zri, zrr, zabs2
      integer iuf, idum, nz
      data zeror,zeroi  / 0.0d0 , 0.0d0 /
      nz = 0
      as1 = zabs2(s1r,s1i)
      as2 = zabs2(s2r,s2i)
      if (s1r.eq.0.0d0 .and. s1i.eq.0.0d0) go to 10
      if (as1.eq.0.0d0) go to 10
      aln = -zrr - zrr + dlog(as1)
      s1dr = s1r
      s1di = s1i
      s1r = zeror
      s1i = zeroi
      as1 = zeror
      if (aln.lt.(-alim)) go to 10
      call zlog(s1dr, s1di, c1r, c1i, idum)
      c1r = c1r - zrr - zrr
      c1i = c1i - zri - zri
      call zexp(c1r, c1i, s1r, s1i)
      as1 = zabs2(s1r,s1i)
      iuf = iuf + 1
   10 continue
      aa = dmax1(as1,as2)
      if (aa.gt.ascle) return
      s1r = zeror
      s1i = zeroi
      s2r = zeror
      s2i = zeroi
      nz = 1
      iuf = 0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zshch(zr, zi, cshr, cshi, cchr, cchi)
c     Refer to  zbesk,zbesh
c
c     zshch computes the complex hyperbolic functions csh=sinh(x+i*y)
c     and cch=cosh(x+i*y), where i**2=-1.
c
      double precision cchi, cchr, ch, cn, cshi, cshr, sh, sn, zi, zr,
     * dcosh, dsinh
      sh = dsinh(zr)
      ch = dcosh(zr)
      sn = dsin(zi)
      cn = dcos(zi)
      cshr = sh*cn
      cshi = ch*sn
      cchr = ch*cn
      cchi = sh*sn
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zsqrt(ar, ai, br, bi)
c     Refer to  zbesh,zbesi,zbesj,zbesk,zbesy,zairy,zbiry
c
c     double precision complex square root, b=csqrt(a)
c
c***routines called  zabs2
c
      double precision ar, ai, br, bi, zm, dtheta, dpi, drt
      double precision zabs2
      data drt , dpi / 7.071067811865475244008443621d-1,
     1                 3.141592653589793238462643383d+0/
      zm = zabs2(ar,ai)
      zm = dsqrt(zm)
      if (ar.eq.0.0d+0) go to 10
      if (ai.eq.0.0d+0) go to 20
      dtheta = datan(ai/ar)
      if (dtheta.le.0.0d+0) go to 40
      if (ar.lt.0.0d+0) dtheta = dtheta - dpi
      go to 50
   10 if (ai.gt.0.0d+0) go to 60
      if (ai.lt.0.0d+0) go to 70
      br = 0.0d+0
      bi = 0.0d+0
      return
   20 if (ar.gt.0.0d+0) go to 30
      br = 0.0d+0
      bi = dsqrt(dabs(ar))
      return
   30 br = dsqrt(ar)
      bi = 0.0d+0
      return
   40 if (ar.lt.0.0d+0) dtheta = dtheta + dpi
   50 dtheta = dtheta*0.5d+0
      br = zm*dcos(dtheta)
      bi = zm*dsin(dtheta)
      return
   60 br = zm*drt
      bi = zm*drt
      return
   70 br = zm*drt
      bi = -zm*drt
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zuchk(yr, yi, nz, ascle, tol)
c     refer to zseri,zuoik,zunk1,zunk2,zuni1,zuni2,zkscl
c
c      y enters as a scaled quantity whose magnitude is greater than
c      exp(-alim)=ascle=1.0e+3*d1mach(1)/tol. the test is made to see
c      if the magnitude of the real or imaginary part would underflow
c      when y is scaled (by tol) to its proper value. y is accepted
c      if the underflow is at least one precision below the magnitude
c      of the largest component; otherwise the phase angle does not have
c      absolute accuracy and an underflow is assumed.
c
c     complex y
      double precision ascle, ss, st, tol, wr, wi, yr, yi
      integer nz
      nz = 0
      wr = dabs(yr)
      wi = dabs(yi)
      st = dmin1(wr,wi)
      if (st.gt.ascle) return
      ss = dmax1(wr,wi)
      st = st/tol
      if (ss.lt.st) nz = 1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zunhj(zr, zi, fnu, ipmtr, tol, phir, phii, argr, argi,
     * zeta1r, zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
c     geuz for g77
      EXTERNAL zsqrt
      EXTERNAL zlog
c     refer to  zbesi,zbesk
c
c         zunhj computes parameters for bessel functions c(fnu,z) =
c         j(fnu,z), y(fnu,z) or h(i,fnu,z) i=1,2 for large orders fnu
c         by means of the uniform asymptotic expansion
c
c         c(fnu,z)=c1*phi*( asum*airy(arg) + c2*bsum*dairy(arg) )
c
c         for proper choices of c1, c2, airy and dairy where airy is
c         an airy function and dairy is its derivative.
c
c               (2/3)*fnu*zeta**1.5 = zeta1-zeta2,
c
c         zeta1=0.5*fnu*clog((1+w)/(1-w)), zeta2=fnu*w for scaling
c         purposes in airy functions from cairy or cbiry.
c
c         mconj=sign of aimag(z), but is ambiguous when z is real and
c         must be specified. ipmtr=0 returns all parameters. ipmtr=
c         1 computes all except asum and bsum.
c
c***routines called  zabs2,zdiv,zlog,zsqrt,d1mach
c     complex arg,asum,bsum,cfnu,cone,cr,czero,dr,p,phi,przth,ptfn,
c    *rfn13,rtzta,rzth,suma,sumb,tfn,t2,up,w,w2,z,za,zb,zc,zeta,zeta1,
c    *zeta2,zth
      double precision alfa, ang, ap, ar, argi, argr, asumi, asumr,
     * atol, aw2, azth, beta, br, bsumi, bsumr, btol, c, conei, coner,
     * cri, crr, dri, drr, ex1, ex2, fnu, fn13, fn23, gama, gpi, hpi,
     * phii, phir, pi, pp, pr, przthi, przthr, ptfni, ptfnr, raw, raw2,
     * razth, rfnu, rfnu2, rfn13, rtzti, rtztr, rzthi, rzthr, sti, str,
     * sumai, sumar, sumbi, sumbr, test, tfni, tfnr, thpi, tol, tzai,
     * tzar, t2i, t2r, upi, upr, wi, wr, w2i, w2r, zai, zar, zbi, zbr,
     * zci, zcr, zeroi, zeror, zetai, zetar, zeta1i, zeta1r, zeta2i,
     * zeta2r, zi, zr, zthi, zthr, zabs2, ac, d1mach
      integer ias, ibs, ipmtr, is, j, jr, ju, k, kmax, kp1, ks, l, lr,
     * lrp1, l1, l2, m, idum
      dimension ar(14), br(14), c(105), alfa(180), beta(210), gama(30),
     * ap(30), pr(30), pi(30), upr(14), upi(14), crr(14), cri(14),
     * drr(14), dri(14)
      data ar(1), ar(2), ar(3), ar(4), ar(5), ar(6), ar(7), ar(8),
     1     ar(9), ar(10), ar(11), ar(12), ar(13), ar(14)/
     2     1.00000000000000000d+00,     1.04166666666666667d-01,
     3     8.35503472222222222d-02,     1.28226574556327160d-01,
     4     2.91849026464140464d-01,     8.81627267443757652d-01,
     5     3.32140828186276754d+00,     1.49957629868625547d+01,
     6     7.89230130115865181d+01,     4.74451538868264323d+02,
     7     3.20749009089066193d+03,     2.40865496408740049d+04,
     8     1.98923119169509794d+05,     1.79190200777534383d+06/
      data br(1), br(2), br(3), br(4), br(5), br(6), br(7), br(8),
     1     br(9), br(10), br(11), br(12), br(13), br(14)/
     2     1.00000000000000000d+00,    -1.45833333333333333d-01,
     3    -9.87413194444444444d-02,    -1.43312053915895062d-01,
     4    -3.17227202678413548d-01,    -9.42429147957120249d-01,
     5    -3.51120304082635426d+00,    -1.57272636203680451d+01,
     6    -8.22814390971859444d+01,    -4.92355370523670524d+02,
     7    -3.31621856854797251d+03,    -2.48276742452085896d+04,
     8    -2.04526587315129788d+05,    -1.83844491706820990d+06/
      data c(1), c(2), c(3), c(4), c(5), c(6), c(7), c(8), c(9), c(10),
     1     c(11), c(12), c(13), c(14), c(15), c(16), c(17), c(18),
     2     c(19), c(20), c(21), c(22), c(23), c(24)/
     3     1.00000000000000000d+00,    -2.08333333333333333d-01,
     4     1.25000000000000000d-01,     3.34201388888888889d-01,
     5    -4.01041666666666667d-01,     7.03125000000000000d-02,
     6    -1.02581259645061728d+00,     1.84646267361111111d+00,
     7    -8.91210937500000000d-01,     7.32421875000000000d-02,
     8     4.66958442342624743d+00,    -1.12070026162229938d+01,
     9     8.78912353515625000d+00,    -2.36408691406250000d+00,
     a     1.12152099609375000d-01,    -2.82120725582002449d+01,
     b     8.46362176746007346d+01,    -9.18182415432400174d+01,
     c     4.25349987453884549d+01,    -7.36879435947963170d+00,
     d     2.27108001708984375d-01,     2.12570130039217123d+02,
     e    -7.65252468141181642d+02,     1.05999045252799988d+03/
      data c(25), c(26), c(27), c(28), c(29), c(30), c(31), c(32),
     1     c(33), c(34), c(35), c(36), c(37), c(38), c(39), c(40),
     2     c(41), c(42), c(43), c(44), c(45), c(46), c(47), c(48)/
     3    -6.99579627376132541d+02,     2.18190511744211590d+02,
     4    -2.64914304869515555d+01,     5.72501420974731445d-01,
     5    -1.91945766231840700d+03,     8.06172218173730938d+03,
     6    -1.35865500064341374d+04,     1.16553933368645332d+04,
     7    -5.30564697861340311d+03,     1.20090291321635246d+03,
     8    -1.08090919788394656d+02,     1.72772750258445740d+00,
     9     2.02042913309661486d+04,    -9.69805983886375135d+04,
     a     1.92547001232531532d+05,    -2.03400177280415534d+05,
     b     1.22200464983017460d+05,    -4.11926549688975513d+04,
     c     7.10951430248936372d+03,    -4.93915304773088012d+02,
     d     6.07404200127348304d+00,    -2.42919187900551333d+05,
     e     1.31176361466297720d+06,    -2.99801591853810675d+06/
      data c(49), c(50), c(51), c(52), c(53), c(54), c(55), c(56),
     1     c(57), c(58), c(59), c(60), c(61), c(62), c(63), c(64),
     2     c(65), c(66), c(67), c(68), c(69), c(70), c(71), c(72)/
     3     3.76327129765640400d+06,    -2.81356322658653411d+06,
     4     1.26836527332162478d+06,    -3.31645172484563578d+05,
     5     4.52187689813627263d+04,    -2.49983048181120962d+03,
     6     2.43805296995560639d+01,     3.28446985307203782d+06,
     7    -1.97068191184322269d+07,     5.09526024926646422d+07,
     8    -7.41051482115326577d+07,     6.63445122747290267d+07,
     9    -3.75671766607633513d+07,     1.32887671664218183d+07,
     a    -2.78561812808645469d+06,     3.08186404612662398d+05,
     b    -1.38860897537170405d+04,     1.10017140269246738d+02,
     c    -4.93292536645099620d+07,     3.25573074185765749d+08,
     d    -9.39462359681578403d+08,     1.55359689957058006d+09,
     e    -1.62108055210833708d+09,     1.10684281682301447d+09/
      data c(73), c(74), c(75), c(76), c(77), c(78), c(79), c(80),
     1     c(81), c(82), c(83), c(84), c(85), c(86), c(87), c(88),
     2     c(89), c(90), c(91), c(92), c(93), c(94), c(95), c(96)/
     3    -4.95889784275030309d+08,     1.42062907797533095d+08,
     4    -2.44740627257387285d+07,     2.24376817792244943d+06,
     5    -8.40054336030240853d+04,     5.51335896122020586d+02,
     6     8.14789096118312115d+08,    -5.86648149205184723d+09,
     7     1.86882075092958249d+10,    -3.46320433881587779d+10,
     8     4.12801855797539740d+10,    -3.30265997498007231d+10,
     9     1.79542137311556001d+10,    -6.56329379261928433d+09,
     a     1.55927986487925751d+09,    -2.25105661889415278d+08,
     b     1.73951075539781645d+07,    -5.49842327572288687d+05,
     c     3.03809051092238427d+03,    -1.46792612476956167d+10,
     d     1.14498237732025810d+11,    -3.99096175224466498d+11,
     e     8.19218669548577329d+11,    -1.09837515608122331d+12/
      data c(97), c(98), c(99), c(100), c(101), c(102), c(103), c(104),
     1     c(105)/
     2     1.00815810686538209d+12,    -6.45364869245376503d+11,
     3     2.87900649906150589d+11,    -8.78670721780232657d+10,
     4     1.76347306068349694d+10,    -2.16716498322379509d+09,
     5     1.43157876718888981d+08,    -3.87183344257261262d+06,
     6     1.82577554742931747d+04/
      data alfa(1), alfa(2), alfa(3), alfa(4), alfa(5), alfa(6),
     1     alfa(7), alfa(8), alfa(9), alfa(10), alfa(11), alfa(12),
     2     alfa(13), alfa(14), alfa(15), alfa(16), alfa(17), alfa(18),
     3     alfa(19), alfa(20), alfa(21), alfa(22)/
     4    -4.44444444444444444d-03,    -9.22077922077922078d-04,
     5    -8.84892884892884893d-05,     1.65927687832449737d-04,
     6     2.46691372741792910d-04,     2.65995589346254780d-04,
     7     2.61824297061500945d-04,     2.48730437344655609d-04,
     8     2.32721040083232098d-04,     2.16362485712365082d-04,
     9     2.00738858762752355d-04,     1.86267636637545172d-04,
     a     1.73060775917876493d-04,     1.61091705929015752d-04,
     b     1.50274774160908134d-04,     1.40503497391269794d-04,
     c     1.31668816545922806d-04,     1.23667445598253261d-04,
     d     1.16405271474737902d-04,     1.09798298372713369d-04,
     e     1.03772410422992823d-04,     9.82626078369363448d-05/
      data alfa(23), alfa(24), alfa(25), alfa(26), alfa(27), alfa(28),
     1     alfa(29), alfa(30), alfa(31), alfa(32), alfa(33), alfa(34),
     2     alfa(35), alfa(36), alfa(37), alfa(38), alfa(39), alfa(40),
     3     alfa(41), alfa(42), alfa(43), alfa(44)/
     4     9.32120517249503256d-05,     8.85710852478711718d-05,
     5     8.42963105715700223d-05,     8.03497548407791151d-05,
     6     7.66981345359207388d-05,     7.33122157481777809d-05,
     7     7.01662625163141333d-05,     6.72375633790160292d-05,
     8     6.93735541354588974d-04,     2.32241745182921654d-04,
     9    -1.41986273556691197d-05,    -1.16444931672048640d-04,
     a    -1.50803558053048762d-04,    -1.55121924918096223d-04,
     b    -1.46809756646465549d-04,    -1.33815503867491367d-04,
     c    -1.19744975684254051d-04,    -1.06184319207974020d-04,
     d    -9.37699549891194492d-05,    -8.26923045588193274d-05,
     e    -7.29374348155221211d-05,    -6.44042357721016283d-05/
      data alfa(45), alfa(46), alfa(47), alfa(48), alfa(49), alfa(50),
     1     alfa(51), alfa(52), alfa(53), alfa(54), alfa(55), alfa(56),
     2     alfa(57), alfa(58), alfa(59), alfa(60), alfa(61), alfa(62),
     3     alfa(63), alfa(64), alfa(65), alfa(66)/
     4    -5.69611566009369048d-05,    -5.04731044303561628d-05,
     5    -4.48134868008882786d-05,    -3.98688727717598864d-05,
     6    -3.55400532972042498d-05,    -3.17414256609022480d-05,
     7    -2.83996793904174811d-05,    -2.54522720634870566d-05,
     8    -2.28459297164724555d-05,    -2.05352753106480604d-05,
     9    -1.84816217627666085d-05,    -1.66519330021393806d-05,
     a    -1.50179412980119482d-05,    -1.35554031379040526d-05,
     b    -1.22434746473858131d-05,    -1.10641884811308169d-05,
     c    -3.54211971457743841d-04,    -1.56161263945159416d-04,
     d     3.04465503594936410d-05,     1.30198655773242693d-04,
     e     1.67471106699712269d-04,     1.70222587683592569d-04/
      data alfa(67), alfa(68), alfa(69), alfa(70), alfa(71), alfa(72),
     1     alfa(73), alfa(74), alfa(75), alfa(76), alfa(77), alfa(78),
     2     alfa(79), alfa(80), alfa(81), alfa(82), alfa(83), alfa(84),
     3     alfa(85), alfa(86), alfa(87), alfa(88)/
     4     1.56501427608594704d-04,     1.36339170977445120d-04,
     5     1.14886692029825128d-04,     9.45869093034688111d-05,
     6     7.64498419250898258d-05,     6.07570334965197354d-05,
     7     4.74394299290508799d-05,     3.62757512005344297d-05,
     8     2.69939714979224901d-05,     1.93210938247939253d-05,
     9     1.30056674793963203d-05,     7.82620866744496661d-06,
     a     3.59257485819351583d-06,     1.44040049814251817d-07,
     b    -2.65396769697939116d-06,    -4.91346867098485910d-06,
     c    -6.72739296091248287d-06,    -8.17269379678657923d-06,
     d    -9.31304715093561232d-06,    -1.02011418798016441d-05,
     e    -1.08805962510592880d-05,    -1.13875481509603555d-05/
      data alfa(89), alfa(90), alfa(91), alfa(92), alfa(93), alfa(94),
     1     alfa(95), alfa(96), alfa(97), alfa(98), alfa(99), alfa(100),
     2     alfa(101), alfa(102), alfa(103), alfa(104), alfa(105),
     3     alfa(106), alfa(107), alfa(108), alfa(109), alfa(110)/
     4    -1.17519675674556414d-05,    -1.19987364870944141d-05,
     5     3.78194199201772914d-04,     2.02471952761816167d-04,
     6    -6.37938506318862408d-05,    -2.38598230603005903d-04,
     7    -3.10916256027361568d-04,    -3.13680115247576316d-04,
     8    -2.78950273791323387d-04,    -2.28564082619141374d-04,
     9    -1.75245280340846749d-04,    -1.25544063060690348d-04,
     a    -8.22982872820208365d-05,    -4.62860730588116458d-05,
     b    -1.72334302366962267d-05,     5.60690482304602267d-06,
     c     2.31395443148286800d-05,     3.62642745856793957d-05,
     d     4.58006124490188752d-05,     5.24595294959114050d-05,
     e     5.68396208545815266d-05,     5.94349820393104052d-05/
      data alfa(111), alfa(112), alfa(113), alfa(114), alfa(115),
     1     alfa(116), alfa(117), alfa(118), alfa(119), alfa(120),
     2     alfa(121), alfa(122), alfa(123), alfa(124), alfa(125),
     3     alfa(126), alfa(127), alfa(128), alfa(129), alfa(130)/
     4     6.06478527578421742d-05,     6.08023907788436497d-05,
     5     6.01577894539460388d-05,     5.89199657344698500d-05,
     6     5.72515823777593053d-05,     5.52804375585852577d-05,
     7     5.31063773802880170d-05,     5.08069302012325706d-05,
     8     4.84418647620094842d-05,     4.60568581607475370d-05,
     9    -6.91141397288294174d-04,    -4.29976633058871912d-04,
     a     1.83067735980039018d-04,     6.60088147542014144d-04,
     b     8.75964969951185931d-04,     8.77335235958235514d-04,
     c     7.49369585378990637d-04,     5.63832329756980918d-04,
     d     3.68059319971443156d-04,     1.88464535514455599d-04/
      data alfa(131), alfa(132), alfa(133), alfa(134), alfa(135),
     1     alfa(136), alfa(137), alfa(138), alfa(139), alfa(140),
     2     alfa(141), alfa(142), alfa(143), alfa(144), alfa(145),
     3     alfa(146), alfa(147), alfa(148), alfa(149), alfa(150)/
     4     3.70663057664904149d-05,    -8.28520220232137023d-05,
     5    -1.72751952869172998d-04,    -2.36314873605872983d-04,
     6    -2.77966150694906658d-04,    -3.02079514155456919d-04,
     7    -3.12594712643820127d-04,    -3.12872558758067163d-04,
     8    -3.05678038466324377d-04,    -2.93226470614557331d-04,
     9    -2.77255655582934777d-04,    -2.59103928467031709d-04,
     a    -2.39784014396480342d-04,    -2.20048260045422848d-04,
     b    -2.00443911094971498d-04,    -1.81358692210970687d-04,
     c    -1.63057674478657464d-04,    -1.45712672175205844d-04,
     d    -1.29425421983924587d-04,    -1.14245691942445952d-04/
      data alfa(151), alfa(152), alfa(153), alfa(154), alfa(155),
     1     alfa(156), alfa(157), alfa(158), alfa(159), alfa(160),
     2     alfa(161), alfa(162), alfa(163), alfa(164), alfa(165),
     3     alfa(166), alfa(167), alfa(168), alfa(169), alfa(170)/
     4     1.92821964248775885d-03,     1.35592576302022234d-03,
     5    -7.17858090421302995d-04,    -2.58084802575270346d-03,
     6    -3.49271130826168475d-03,    -3.46986299340960628d-03,
     7    -2.82285233351310182d-03,    -1.88103076404891354d-03,
     8    -8.89531718383947600d-04,     3.87912102631035228d-06,
     9     7.28688540119691412d-04,     1.26566373053457758d-03,
     a     1.62518158372674427d-03,     1.83203153216373172d-03,
     b     1.91588388990527909d-03,     1.90588846755546138d-03,
     c     1.82798982421825727d-03,     1.70389506421121530d-03,
     d     1.55097127171097686d-03,     1.38261421852276159d-03/
      data alfa(171), alfa(172), alfa(173), alfa(174), alfa(175),
     1     alfa(176), alfa(177), alfa(178), alfa(179), alfa(180)/
     2     1.20881424230064774d-03,     1.03676532638344962d-03,
     3     8.71437918068619115d-04,     7.16080155297701002d-04,
     4     5.72637002558129372d-04,     4.42089819465802277d-04,
     5     3.24724948503090564d-04,     2.20342042730246599d-04,
     6     1.28412898401353882d-04,     4.82005924552095464d-05/
      data beta(1), beta(2), beta(3), beta(4), beta(5), beta(6),
     1     beta(7), beta(8), beta(9), beta(10), beta(11), beta(12),
     2     beta(13), beta(14), beta(15), beta(16), beta(17), beta(18),
     3     beta(19), beta(20), beta(21), beta(22)/
     4     1.79988721413553309d-02,     5.59964911064388073d-03,
     5     2.88501402231132779d-03,     1.80096606761053941d-03,
     6     1.24753110589199202d-03,     9.22878876572938311d-04,
     7     7.14430421727287357d-04,     5.71787281789704872d-04,
     8     4.69431007606481533d-04,     3.93232835462916638d-04,
     9     3.34818889318297664d-04,     2.88952148495751517d-04,
     a     2.52211615549573284d-04,     2.22280580798883327d-04,
     b     1.97541838033062524d-04,     1.76836855019718004d-04,
     c     1.59316899661821081d-04,     1.44347930197333986d-04,
     d     1.31448068119965379d-04,     1.20245444949302884d-04,
     e     1.10449144504599392d-04,     1.01828770740567258d-04/
      data beta(23), beta(24), beta(25), beta(26), beta(27), beta(28),
     1     beta(29), beta(30), beta(31), beta(32), beta(33), beta(34),
     2     beta(35), beta(36), beta(37), beta(38), beta(39), beta(40),
     3     beta(41), beta(42), beta(43), beta(44)/
     4     9.41998224204237509d-05,     8.74130545753834437d-05,
     5     8.13466262162801467d-05,     7.59002269646219339d-05,
     6     7.09906300634153481d-05,     6.65482874842468183d-05,
     7     6.25146958969275078d-05,     5.88403394426251749d-05,
     8    -1.49282953213429172d-03,    -8.78204709546389328d-04,
     9    -5.02916549572034614d-04,    -2.94822138512746025d-04,
     a    -1.75463996970782828d-04,    -1.04008550460816434d-04,
     b    -5.96141953046457895d-05,    -3.12038929076098340d-05,
     c    -1.26089735980230047d-05,    -2.42892608575730389d-07,
     d     8.05996165414273571d-06,     1.36507009262147391d-05,
     e     1.73964125472926261d-05,     1.98672978842133780d-05/
      data beta(45), beta(46), beta(47), beta(48), beta(49), beta(50),
     1     beta(51), beta(52), beta(53), beta(54), beta(55), beta(56),
     2     beta(57), beta(58), beta(59), beta(60), beta(61), beta(62),
     3     beta(63), beta(64), beta(65), beta(66)/
     4     2.14463263790822639d-05,     2.23954659232456514d-05,
     5     2.28967783814712629d-05,     2.30785389811177817d-05,
     6     2.30321976080909144d-05,     2.28236073720348722d-05,
     7     2.25005881105292418d-05,     2.20981015361991429d-05,
     8     2.16418427448103905d-05,     2.11507649256220843d-05,
     9     2.06388749782170737d-05,     2.01165241997081666d-05,
     a     1.95913450141179244d-05,     1.90689367910436740d-05,
     b     1.85533719641636667d-05,     1.80475722259674218d-05,
     c     5.52213076721292790d-04,     4.47932581552384646d-04,
     d     2.79520653992020589d-04,     1.52468156198446602d-04,
     e     6.93271105657043598d-05,     1.76258683069991397d-05/
      data beta(67), beta(68), beta(69), beta(70), beta(71), beta(72),
     1     beta(73), beta(74), beta(75), beta(76), beta(77), beta(78),
     2     beta(79), beta(80), beta(81), beta(82), beta(83), beta(84),
     3     beta(85), beta(86), beta(87), beta(88)/
     4    -1.35744996343269136d-05,    -3.17972413350427135d-05,
     5    -4.18861861696693365d-05,    -4.69004889379141029d-05,
     6    -4.87665447413787352d-05,    -4.87010031186735069d-05,
     7    -4.74755620890086638d-05,    -4.55813058138628452d-05,
     8    -4.33309644511266036d-05,    -4.09230193157750364d-05,
     9    -3.84822638603221274d-05,    -3.60857167535410501d-05,
     a    -3.37793306123367417d-05,    -3.15888560772109621d-05,
     b    -2.95269561750807315d-05,    -2.75978914828335759d-05,
     c    -2.58006174666883713d-05,    -2.41308356761280200d-05,
     d    -2.25823509518346033d-05,    -2.11479656768912971d-05,
     e    -1.98200638885294927d-05,    -1.85909870801065077d-05/
      data beta(89), beta(90), beta(91), beta(92), beta(93), beta(94),
     1     beta(95), beta(96), beta(97), beta(98), beta(99), beta(100),
     2     beta(101), beta(102), beta(103), beta(104), beta(105),
     3     beta(106), beta(107), beta(108), beta(109), beta(110)/
     4    -1.74532699844210224d-05,    -1.63997823854497997d-05,
     5    -4.74617796559959808d-04,    -4.77864567147321487d-04,
     6    -3.20390228067037603d-04,    -1.61105016119962282d-04,
     7    -4.25778101285435204d-05,     3.44571294294967503d-05,
     8     7.97092684075674924d-05,     1.03138236708272200d-04,
     9     1.12466775262204158d-04,     1.13103642108481389d-04,
     a     1.08651634848774268d-04,     1.01437951597661973d-04,
     b     9.29298396593363896d-05,     8.40293133016089978d-05,
     c     7.52727991349134062d-05,     6.69632521975730872d-05,
     d     5.92564547323194704d-05,     5.22169308826975567d-05,
     e     4.58539485165360646d-05,     4.01445513891486808d-05/
      data beta(111), beta(112), beta(113), beta(114), beta(115),
     1     beta(116), beta(117), beta(118), beta(119), beta(120),
     2     beta(121), beta(122), beta(123), beta(124), beta(125),
     3     beta(126), beta(127), beta(128), beta(129), beta(130)/
     4     3.50481730031328081d-05,     3.05157995034346659d-05,
     5     2.64956119950516039d-05,     2.29363633690998152d-05,
     6     1.97893056664021636d-05,     1.70091984636412623d-05,
     7     1.45547428261524004d-05,     1.23886640995878413d-05,
     8     1.04775876076583236d-05,     8.79179954978479373d-06,
     9     7.36465810572578444d-04,     8.72790805146193976d-04,
     a     6.22614862573135066d-04,     2.85998154194304147d-04,
     b     3.84737672879366102d-06,    -1.87906003636971558d-04,
     c    -2.97603646594554535d-04,    -3.45998126832656348d-04,
     d    -3.53382470916037712d-04,    -3.35715635775048757d-04/
      data beta(131), beta(132), beta(133), beta(134), beta(135),
     1     beta(136), beta(137), beta(138), beta(139), beta(140),
     2     beta(141), beta(142), beta(143), beta(144), beta(145),
     3     beta(146), beta(147), beta(148), beta(149), beta(150)/
     4    -3.04321124789039809d-04,    -2.66722723047612821d-04,
     5    -2.27654214122819527d-04,    -1.89922611854562356d-04,
     6    -1.55058918599093870d-04,    -1.23778240761873630d-04,
     7    -9.62926147717644187d-05,    -7.25178327714425337d-05,
     8    -5.22070028895633801d-05,    -3.50347750511900522d-05,
     9    -2.06489761035551757d-05,    -8.70106096849767054d-06,
     a     1.13698686675100290d-06,     9.16426474122778849d-06,
     b     1.56477785428872620d-05,     2.08223629482466847d-05,
     c     2.48923381004595156d-05,     2.80340509574146325d-05,
     d     3.03987774629861915d-05,     3.21156731406700616d-05/
      data beta(151), beta(152), beta(153), beta(154), beta(155),
     1     beta(156), beta(157), beta(158), beta(159), beta(160),
     2     beta(161), beta(162), beta(163), beta(164), beta(165),
     3     beta(166), beta(167), beta(168), beta(169), beta(170)/
     4    -1.80182191963885708d-03,    -2.43402962938042533d-03,
     5    -1.83422663549856802d-03,    -7.62204596354009765d-04,
     6     2.39079475256927218d-04,     9.49266117176881141d-04,
     7     1.34467449701540359d-03,     1.48457495259449178d-03,
     8     1.44732339830617591d-03,     1.30268261285657186d-03,
     9     1.10351597375642682d-03,     8.86047440419791759d-04,
     a     6.73073208165665473d-04,     4.77603872856582378d-04,
     b     3.05991926358789362d-04,     1.60315694594721630d-04,
     c     4.00749555270613286d-05,    -5.66607461635251611d-05,
     d    -1.32506186772982638d-04,    -1.90296187989614057d-04/
      data beta(171), beta(172), beta(173), beta(174), beta(175),
     1     beta(176), beta(177), beta(178), beta(179), beta(180),
     2     beta(181), beta(182), beta(183), beta(184), beta(185),
     3     beta(186), beta(187), beta(188), beta(189), beta(190)/
     4    -2.32811450376937408d-04,    -2.62628811464668841d-04,
     5    -2.82050469867598672d-04,    -2.93081563192861167d-04,
     6    -2.97435962176316616d-04,    -2.96557334239348078d-04,
     7    -2.91647363312090861d-04,    -2.83696203837734166d-04,
     8    -2.73512317095673346d-04,    -2.61750155806768580d-04,
     9     6.38585891212050914d-03,     9.62374215806377941d-03,
     a     7.61878061207001043d-03,     2.83219055545628054d-03,
     b    -2.09841352012720090d-03,    -5.73826764216626498d-03,
     c    -7.70804244495414620d-03,    -8.21011692264844401d-03,
     d    -7.65824520346905413d-03,    -6.47209729391045177d-03/
      data beta(191), beta(192), beta(193), beta(194), beta(195),
     1     beta(196), beta(197), beta(198), beta(199), beta(200),
     2     beta(201), beta(202), beta(203), beta(204), beta(205),
     3     beta(206), beta(207), beta(208), beta(209), beta(210)/
     4    -4.99132412004966473d-03,    -3.45612289713133280d-03,
     5    -2.01785580014170775d-03,    -7.59430686781961401d-04,
     6     2.84173631523859138d-04,     1.10891667586337403d-03,
     7     1.72901493872728771d-03,     2.16812590802684701d-03,
     8     2.45357710494539735d-03,     2.61281821058334862d-03,
     9     2.67141039656276912d-03,     2.65203073395980430d-03,
     a     2.57411652877287315d-03,     2.45389126236094427d-03,
     b     2.30460058071795494d-03,     2.13684837686712662d-03,
     c     1.95896528478870911d-03,     1.77737008679454412d-03,
     d     1.59690280765839059d-03,     1.42111975664438546d-03/
      data gama(1), gama(2), gama(3), gama(4), gama(5), gama(6),
     1     gama(7), gama(8), gama(9), gama(10), gama(11), gama(12),
     2     gama(13), gama(14), gama(15), gama(16), gama(17), gama(18),
     3     gama(19), gama(20), gama(21), gama(22)/
     4     6.29960524947436582d-01,     2.51984209978974633d-01,
     5     1.54790300415655846d-01,     1.10713062416159013d-01,
     6     8.57309395527394825d-02,     6.97161316958684292d-02,
     7     5.86085671893713576d-02,     5.04698873536310685d-02,
     8     4.42600580689154809d-02,     3.93720661543509966d-02,
     9     3.54283195924455368d-02,     3.21818857502098231d-02,
     a     2.94646240791157679d-02,     2.71581677112934479d-02,
     b     2.51768272973861779d-02,     2.34570755306078891d-02,
     c     2.19508390134907203d-02,     2.06210828235646240d-02,
     d     1.94388240897880846d-02,     1.83810633800683158d-02,
     e     1.74293213231963172d-02,     1.65685837786612353d-02/
      data gama(23), gama(24), gama(25), gama(26), gama(27), gama(28),
     1     gama(29), gama(30)/
     2     1.57865285987918445d-02,     1.50729501494095594d-02,
     3     1.44193250839954639d-02,     1.38184805735341786d-02,
     4     1.32643378994276568d-02,     1.27517121970498651d-02,
     5     1.22761545318762767d-02,     1.18338262398482403d-02/
      data ex1, ex2, hpi, gpi, thpi /
     1     3.33333333333333333d-01,     6.66666666666666667d-01,
     2     1.57079632679489662d+00,     3.14159265358979324d+00,
     3     4.71238898038468986d+00/
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
c
      rfnu = 1.0d0/fnu
c-----------------------------------------------------------------------
c     overflow test (z/fnu too small)
c-----------------------------------------------------------------------
      test = d1mach(1)*1.0d+3
      ac = fnu*test
      if (dabs(zr).gt.ac .or. dabs(zi).gt.ac) go to 15
      zeta1r = 2.0d0*dabs(dlog(test))+fnu
      zeta1i = 0.0d0
      zeta2r = fnu
      zeta2i = 0.0d0
      phir = 1.0d0
      phii = 0.0d0
      argr = 1.0d0
      argi = 0.0d0
      return
   15 continue
      zbr = zr*rfnu
      zbi = zi*rfnu
      rfnu2 = rfnu*rfnu
c-----------------------------------------------------------------------
c     compute in the fourth quadrant
c-----------------------------------------------------------------------
      fn13 = fnu**ex1
      fn23 = fn13*fn13
      rfn13 = 1.0d0/fn13
      w2r = coner - zbr*zbr + zbi*zbi
      w2i = conei - zbr*zbi - zbr*zbi
      aw2 = zabs2(w2r,w2i)
      if (aw2.gt.0.25d0) go to 130
c-----------------------------------------------------------------------
c     power series for cabs(w2).le.0.25d0
c-----------------------------------------------------------------------
      k = 1
      pr(1) = coner
      pi(1) = conei
      sumar = gama(1)
      sumai = zeroi
      ap(1) = 1.0d0
      if (aw2.lt.tol) go to 20
      do 10 k=2,30
        pr(k) = pr(k-1)*w2r - pi(k-1)*w2i
        pi(k) = pr(k-1)*w2i + pi(k-1)*w2r
        sumar = sumar + pr(k)*gama(k)
        sumai = sumai + pi(k)*gama(k)
        ap(k) = ap(k-1)*aw2
        if (ap(k).lt.tol) go to 20
   10 continue
      k = 30
   20 continue
      kmax = k
      zetar = w2r*sumar - w2i*sumai
      zetai = w2r*sumai + w2i*sumar
      argr = zetar*fn23
      argi = zetai*fn23
      call zsqrt(sumar, sumai, zar, zai)
      call zsqrt(w2r, w2i, str, sti)
      zeta2r = str*fnu
      zeta2i = sti*fnu
      str = coner + ex2*(zetar*zar-zetai*zai)
      sti = conei + ex2*(zetar*zai+zetai*zar)
      zeta1r = str*zeta2r - sti*zeta2i
      zeta1i = str*zeta2i + sti*zeta2r
      zar = zar + zar
      zai = zai + zai
      call zsqrt(zar, zai, str, sti)
      phir = str*rfn13
      phii = sti*rfn13
      if (ipmtr.eq.1) go to 120
c-----------------------------------------------------------------------
c     sum series for asum and bsum
c-----------------------------------------------------------------------
      sumbr = zeror
      sumbi = zeroi
      do 30 k=1,kmax
        sumbr = sumbr + pr(k)*beta(k)
        sumbi = sumbi + pi(k)*beta(k)
   30 continue
      asumr = zeror
      asumi = zeroi
      bsumr = sumbr
      bsumi = sumbi
      l1 = 0
      l2 = 30
      btol = tol*(dabs(bsumr)+dabs(bsumi))
      atol = tol
      pp = 1.0d0
      ias = 0
      ibs = 0
      if (rfnu2.lt.tol) go to 110
      do 100 is=2,7
        atol = atol/rfnu2
        pp = pp*rfnu2
        if (ias.eq.1) go to 60
        sumar = zeror
        sumai = zeroi
        do 40 k=1,kmax
          m = l1 + k
          sumar = sumar + pr(k)*alfa(m)
          sumai = sumai + pi(k)*alfa(m)
          if (ap(k).lt.atol) go to 50
   40   continue
   50   continue
        asumr = asumr + sumar*pp
        asumi = asumi + sumai*pp
        if (pp.lt.tol) ias = 1
   60   continue
        if (ibs.eq.1) go to 90
        sumbr = zeror
        sumbi = zeroi
        do 70 k=1,kmax
          m = l2 + k
          sumbr = sumbr + pr(k)*beta(m)
          sumbi = sumbi + pi(k)*beta(m)
          if (ap(k).lt.atol) go to 80
   70   continue
   80   continue
        bsumr = bsumr + sumbr*pp
        bsumi = bsumi + sumbi*pp
        if (pp.lt.btol) ibs = 1
   90   continue
        if (ias.eq.1 .and. ibs.eq.1) go to 110
        l1 = l1 + 30
        l2 = l2 + 30
  100 continue
  110 continue
      asumr = asumr + coner
      pp = rfnu*rfn13
      bsumr = bsumr*pp
      bsumi = bsumi*pp
  120 continue
      return
c-----------------------------------------------------------------------
c     cabs(w2).gt.0.25d0
c-----------------------------------------------------------------------
  130 continue
      call zsqrt(w2r, w2i, wr, wi)
      if (wr.lt.0.0d0) wr = 0.0d0
      if (wi.lt.0.0d0) wi = 0.0d0
      str = coner + wr
      sti = wi
      call zdiv(str, sti, zbr, zbi, zar, zai)
      call zlog(zar, zai, zcr, zci, idum)
      if (zci.lt.0.0d0) zci = 0.0d0
      if (zci.gt.hpi) zci = hpi
      if (zcr.lt.0.0d0) zcr = 0.0d0
      zthr = (zcr-wr)*1.5d0
      zthi = (zci-wi)*1.5d0
      zeta1r = zcr*fnu
      zeta1i = zci*fnu
      zeta2r = wr*fnu
      zeta2i = wi*fnu
      azth = zabs2(zthr,zthi)
      ang = thpi
      if (zthr.ge.0.0d0 .and. zthi.lt.0.0d0) go to 140
      ang = hpi
      if (zthr.eq.0.0d0) go to 140
      ang = datan(zthi/zthr)
      if (zthr.lt.0.0d0) ang = ang + gpi
  140 continue
      pp = azth**ex2
      ang = ang*ex2
      zetar = pp*dcos(ang)
      zetai = pp*dsin(ang)
      if (zetai.lt.0.0d0) zetai = 0.0d0
      argr = zetar*fn23
      argi = zetai*fn23
      call zdiv(zthr, zthi, zetar, zetai, rtztr, rtzti)
      call zdiv(rtztr, rtzti, wr, wi, zar, zai)
      tzar = zar + zar
      tzai = zai + zai
      call zsqrt(tzar, tzai, str, sti)
      phir = str*rfn13
      phii = sti*rfn13
      if (ipmtr.eq.1) go to 120
      raw = 1.0d0/dsqrt(aw2)
      str = wr*raw
      sti = -wi*raw
      tfnr = str*rfnu*raw
      tfni = sti*rfnu*raw
      razth = 1.0d0/azth
      str = zthr*razth
      sti = -zthi*razth
      rzthr = str*razth*rfnu
      rzthi = sti*razth*rfnu
      zcr = rzthr*ar(2)
      zci = rzthi*ar(2)
      raw2 = 1.0d0/aw2
      str = w2r*raw2
      sti = -w2i*raw2
      t2r = str*raw2
      t2i = sti*raw2
      str = t2r*c(2) + c(3)
      sti = t2i*c(2)
      upr(2) = str*tfnr - sti*tfni
      upi(2) = str*tfni + sti*tfnr
      bsumr = upr(2) + zcr
      bsumi = upi(2) + zci
      asumr = zeror
      asumi = zeroi
      if (rfnu.lt.tol) go to 220
      przthr = rzthr
      przthi = rzthi
      ptfnr = tfnr
      ptfni = tfni
      upr(1) = coner
      upi(1) = conei
      pp = 1.0d0
      btol = tol*(dabs(bsumr)+dabs(bsumi))
      ks = 0
      kp1 = 2
      l = 3
      ias = 0
      ibs = 0
      do 210 lr=2,12,2
        lrp1 = lr + 1
c-----------------------------------------------------------------------
c     compute two additional cr, dr, and up for two more terms in
c     next suma and sumb
c-----------------------------------------------------------------------
        do 160 k=lr,lrp1
          ks = ks + 1
          kp1 = kp1 + 1
          l = l + 1
          zar = c(l)
          zai = zeroi
          do 150 j=2,kp1
            l = l + 1
            str = zar*t2r - t2i*zai + c(l)
            zai = zar*t2i + zai*t2r
            zar = str
  150     continue
          str = ptfnr*tfnr - ptfni*tfni
          ptfni = ptfnr*tfni + ptfni*tfnr
          ptfnr = str
          upr(kp1) = ptfnr*zar - ptfni*zai
          upi(kp1) = ptfni*zar + ptfnr*zai
          crr(ks) = przthr*br(ks+1)
          cri(ks) = przthi*br(ks+1)
          str = przthr*rzthr - przthi*rzthi
          przthi = przthr*rzthi + przthi*rzthr
          przthr = str
          drr(ks) = przthr*ar(ks+2)
          dri(ks) = przthi*ar(ks+2)
  160   continue
        pp = pp*rfnu2
        if (ias.eq.1) go to 180
        sumar = upr(lrp1)
        sumai = upi(lrp1)
        ju = lrp1
        do 170 jr=1,lr
          ju = ju - 1
          sumar = sumar + crr(jr)*upr(ju) - cri(jr)*upi(ju)
          sumai = sumai + crr(jr)*upi(ju) + cri(jr)*upr(ju)
  170   continue
        asumr = asumr + sumar
        asumi = asumi + sumai
        test = dabs(sumar) + dabs(sumai)
        if (pp.lt.tol .and. test.lt.tol) ias = 1
  180   continue
        if (ibs.eq.1) go to 200
        sumbr = upr(lr+2) + upr(lrp1)*zcr - upi(lrp1)*zci
        sumbi = upi(lr+2) + upr(lrp1)*zci + upi(lrp1)*zcr
        ju = lrp1
        do 190 jr=1,lr
          ju = ju - 1
          sumbr = sumbr + drr(jr)*upr(ju) - dri(jr)*upi(ju)
          sumbi = sumbi + drr(jr)*upi(ju) + dri(jr)*upr(ju)
  190   continue
        bsumr = bsumr + sumbr
        bsumi = bsumi + sumbi
        test = dabs(sumbr) + dabs(sumbi)
        if (pp.lt.btol .and. test.lt.btol) ibs = 1
  200   continue
        if (ias.eq.1 .and. ibs.eq.1) go to 220
  210 continue
  220 continue
      asumr = asumr + coner
      str = -bsumr*rfn13
      sti = -bsumi*rfn13
      call zdiv(str, sti, rtztr, rtzti, bsumr, bsumi)
      go to 120
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zuni1(zr, zi, fnu, kode, n, yr, yi, nz, nlast, fnul,
     * tol, elim, alim)
c     refer to  zbesi,zbesk
c
c     zuni1 computes i(fnu,z)  by means of the uniform asymptotic
c     expansion for i(fnu,z) in -pi/3.le.arg z.le.pi/3.
c
c     fnul is the smallest order permitted for the asymptotic
c     expansion. nlast=0 means all of the y values were set.
c     nlast.ne.0 is the number left to be computed by another
c     formula for orders fnu to fnu+nlast-1 because fnu+nlast-1.lt.fnul.
c     y(i)=czero for i=nlast+1,n
c
c***routines called  zuchk,zunik,zuoik,d1mach,zabs2
c     complex cfn,cone,crsc,cscl,csr,css,cwrk,czero,c1,c2,phi,rz,sum,s1,
c    *s2,y,z,zeta1,zeta2
      double precision alim, aphi, ascle, bry, coner, crsc,
     * cscl, csrr, cssr, cwrki, cwrkr, c1r, c2i, c2m, c2r, elim, fn,
     * fnu, fnul, phii, phir, rast, rs1, rzi, rzr, sti, str, sumi,
     * sumr, s1i, s1r, s2i, s2r, tol, yi, yr, zeroi, zeror, zeta1i,
     * zeta1r, zeta2i, zeta2r, zi, zr, cyr, cyi, d1mach, zabs2
      integer i, iflag, init, k, kode, m, n, nd, nlast, nn, nuf, nw, nz
      dimension bry(3), yr(n), yi(n), cwrkr(16), cwrki(16), cssr(3),
     * csrr(3), cyr(2), cyi(2)
      data zeror,zeroi,coner / 0.0d0, 0.0d0, 1.0d0 /
c
      nz = 0
      nd = n
      nlast = 0
c-----------------------------------------------------------------------
c     computed values with exponents between alim and elim in mag-
c     nitude are scaled to keep intermediate arithmetic on scale,
c     exp(alim)=exp(elim)*tol
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      crsc = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = crsc
      csrr(1) = crsc
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = 1.0d+3*d1mach(1)/tol
c-----------------------------------------------------------------------
c     check for underflow and overflow on first member
c-----------------------------------------------------------------------
      fn = dmax1(fnu,1.0d0)
      init = 0
      call zunik(zr, zi, fn, 1, 1, tol, init, phir, phii, zeta1r,
     * zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
      if (kode.eq.1) go to 10
      str = zr + zeta2r
      sti = zi + zeta2i
      rast = fn/zabs2(str,sti)
      str = str*rast*rast
      sti = -sti*rast*rast
      s1r = -zeta1r + str
      s1i = -zeta1i + sti
      go to 20
   10 continue
      s1r = -zeta1r + zeta2r
      s1i = -zeta1i + zeta2i
   20 continue
      rs1 = s1r
      if (dabs(rs1).gt.elim) go to 130
   30 continue
      nn = min0(2,nd)
      do 80 i=1,nn
        fn = fnu + dble(float(nd-i))
        init = 0
        call zunik(zr, zi, fn, 1, 0, tol, init, phir, phii, zeta1r,
     *   zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
        if (kode.eq.1) go to 40
        str = zr + zeta2r
        sti = zi + zeta2i
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = -zeta1r + str
        s1i = -zeta1i + sti + zi
        go to 50
   40   continue
        s1r = -zeta1r + zeta2r
        s1i = -zeta1i + zeta2i
   50   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 110
        if (i.eq.1) iflag = 2
        if (dabs(rs1).lt.alim) go to 60
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phir,phii)
        rs1 = rs1 + dlog(aphi)
        if (dabs(rs1).gt.elim) go to 110
        if (i.eq.1) iflag = 1
        if (rs1.lt.0.0d0) go to 60
        if (i.eq.1) iflag = 3
   60   continue
c-----------------------------------------------------------------------
c     scale s1 if cabs(s1).lt.ascle
c-----------------------------------------------------------------------
        s2r = phir*sumr - phii*sumi
        s2i = phir*sumi + phii*sumr
        str = dexp(s1r)*cssr(iflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s2r*s1i + s2i*s1r
        s2r = str
        if (iflag.ne.1) go to 70
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.ne.0) go to 110
   70   continue
        cyr(i) = s2r
        cyi(i) = s2i
        m = nd - i + 1
        yr(m) = s2r*csrr(iflag)
        yi(m) = s2i*csrr(iflag)
   80 continue
      if (nd.le.2) go to 100
      rast = 1.0d0/zabs2(zr,zi)
      str = zr*rast
      sti = -zi*rast
      rzr = (str+str)*rast
      rzi = (sti+sti)*rast
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = csrr(iflag)
      ascle = bry(iflag)
      k = nd - 2
      fn = dble(float(k))
      do 90 i=3,nd
        c2r = s2r
        c2i = s2i
        s2r = s1r + (fnu+fn)*(rzr*c2r-rzi*c2i)
        s2i = s1i + (fnu+fn)*(rzr*c2i+rzi*c2r)
        s1r = c2r
        s1i = c2i
        c2r = s2r*c1r
        c2i = s2i*c1r
        yr(k) = c2r
        yi(k) = c2i
        k = k - 1
        fn = fn - 1.0d0
        if (iflag.ge.3) go to 90
        str = dabs(c2r)
        sti = dabs(c2i)
        c2m = dmax1(str,sti)
        if (c2m.le.ascle) go to 90
        iflag = iflag + 1
        ascle = bry(iflag)
        s1r = s1r*c1r
        s1i = s1i*c1r
        s2r = c2r
        s2i = c2i
        s1r = s1r*cssr(iflag)
        s1i = s1i*cssr(iflag)
        s2r = s2r*cssr(iflag)
        s2i = s2i*cssr(iflag)
        c1r = csrr(iflag)
   90 continue
  100 continue
      return
c-----------------------------------------------------------------------
c     set underflow and update parameters
c-----------------------------------------------------------------------
  110 continue
      if (rs1.gt.0.0d0) go to 120
      yr(nd) = zeror
      yi(nd) = zeroi
      nz = nz + 1
      nd = nd - 1
      if (nd.eq.0) go to 100
      call zuoik(zr, zi, fnu, kode, 1, nd, yr, yi, nuf, tol, elim, alim)
      if (nuf.lt.0) go to 120
      nd = nd - nuf
      nz = nz + nuf
      if (nd.eq.0) go to 100
      fn = fnu + dble(float(nd-1))
      if (fn.ge.fnul) go to 30
      nlast = nd
      return
  120 continue
      nz = -1
      return
  130 continue
      if (rs1.gt.0.0d0) go to 120
      nz = n
      do 140 i=1,n
        yr(i) = zeror
        yi(i) = zeroi
  140 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zuni2(zr, zi, fnu, kode, n, yr, yi, nz, nlast, fnul,
     * tol, elim, alim)
c     refer to  zbesi,zbesk
c
c     zuni2 computes i(fnu,z) in the right half plane by means of
c     uniform asymptotic expansion for j(fnu,zn) where zn is z*i
c     or -z*i and zn is in the right half plane also.
c
c     fnul is the smallest order permitted for the asymptotic
c     expansion. nlast=0 means all of the y values were set.
c     nlast.ne.0 is the number left to be computed by another
c     formula for orders fnu to fnu+nlast-1 because fnu+nlast-1.lt.fnul.
c     y(i)=czero for i=nlast+1,n
c
c***routines called  zairy,zuchk,zunhj,zuoik,d1mach,zabs2
c     complex ai,arg,asum,bsum,cfn,ci,cid,cip,cone,crsc,cscl,csr,css,
c    *czero,c1,c2,dai,phi,rz,s1,s2,y,z,zb,zeta1,zeta2,zn
      double precision aarg, aic, aii, air, alim, ang, aphi, argi,
     * argr, ascle, asumi, asumr, bry, bsumi, bsumr, cidi, cipi, cipr,
     * coner, crsc, cscl, csrr, cssr, c1r, c2i, c2m, c2r, daii,
     * dair, elim, fn, fnu, fnul, hpi, phii, phir, rast, raz, rs1, rzi,
     * rzr, sti, str, s1i, s1r, s2i, s2r, tol, yi, yr, zbi, zbr, zeroi,
     * zeror, zeta1i, zeta1r, zeta2i, zeta2r, zi, zni, znr, zr, cyr,
     * cyi, d1mach, zabs2, car, sar
      integer i, iflag, in, inu, j, k, kode, n, nai, nd, ndai, nlast,
     * nn, nuf, nw, nz, idum
      dimension bry(3), yr(n), yi(n), cipr(4), cipi(4), cssr(3),
     * csrr(3), cyr(2), cyi(2)
      data zeror,zeroi,coner / 0.0d0, 0.0d0, 1.0d0 /
      data cipr(1),cipi(1),cipr(2),cipi(2),cipr(3),cipi(3),cipr(4),
     * cipi(4)/ 1.0d0,0.0d0, 0.0d0,1.0d0, -1.0d0,0.0d0, 0.0d0,-1.0d0/
      data hpi, aic  /
     1      1.57079632679489662d+00,     1.265512123484645396d+00/
c
      nz = 0
      nd = n
      nlast = 0
c-----------------------------------------------------------------------
c     computed values with exponents between alim and elim in mag-
c     nitude are scaled to keep intermediate arithmetic on scale,
c     exp(alim)=exp(elim)*tol
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      crsc = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = crsc
      csrr(1) = crsc
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = 1.0d+3*d1mach(1)/tol
c-----------------------------------------------------------------------
c     zn is in the right half plane after rotation by ci or -ci
c-----------------------------------------------------------------------
      znr = zi
      zni = -zr
      zbr = zr
      zbi = zi
      cidi = -coner
      inu = int(sngl(fnu))
      ang = hpi*(fnu-dble(float(inu)))
      c2r = dcos(ang)
      c2i = dsin(ang)
      car = c2r
      sar = c2i
      in = inu + n - 1
      in = mod(in,4) + 1
      str = c2r*cipr(in) - c2i*cipi(in)
      c2i = c2r*cipi(in) + c2i*cipr(in)
      c2r = str
      if (zi.gt.0.0d0) go to 10
      znr = -znr
      zbi = -zbi
      cidi = -cidi
      c2i = -c2i
   10 continue
c-----------------------------------------------------------------------
c     check for underflow and overflow on first member
c-----------------------------------------------------------------------
      fn = dmax1(fnu,1.0d0)
      call zunhj(znr, zni, fn, 1, tol, phir, phii, argr, argi, zeta1r,
     * zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
      if (kode.eq.1) go to 20
      str = zbr + zeta2r
      sti = zbi + zeta2i
      rast = fn/zabs2(str,sti)
      str = str*rast*rast
      sti = -sti*rast*rast
      s1r = -zeta1r + str
      s1i = -zeta1i + sti
      go to 30
   20 continue
      s1r = -zeta1r + zeta2r
      s1i = -zeta1i + zeta2i
   30 continue
      rs1 = s1r
      if (dabs(rs1).gt.elim) go to 150
   40 continue
      nn = min0(2,nd)
      do 90 i=1,nn
        fn = fnu + dble(float(nd-i))
        call zunhj(znr, zni, fn, 0, tol, phir, phii, argr, argi,
     *   zeta1r, zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
        if (kode.eq.1) go to 50
        str = zbr + zeta2r
        sti = zbi + zeta2i
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = -zeta1r + str
        s1i = -zeta1i + sti + dabs(zi)
        go to 60
   50   continue
        s1r = -zeta1r + zeta2r
        s1i = -zeta1i + zeta2i
   60   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 120
        if (i.eq.1) iflag = 2
        if (dabs(rs1).lt.alim) go to 70
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
        aphi = zabs2(phir,phii)
        aarg = zabs2(argr,argi)
        rs1 = rs1 + dlog(aphi) - 0.25d0*dlog(aarg) - aic
        if (dabs(rs1).gt.elim) go to 120
        if (i.eq.1) iflag = 1
        if (rs1.lt.0.0d0) go to 70
        if (i.eq.1) iflag = 3
   70   continue
c-----------------------------------------------------------------------
c     scale s1 to keep intermediate arithmetic on scale near
c     exponent extremes
c-----------------------------------------------------------------------
        call zairy(argr, argi, 0, 2, air, aii, nai, idum)
        call zairy(argr, argi, 1, 2, dair, daii, ndai, idum)
        str = dair*bsumr - daii*bsumi
        sti = dair*bsumi + daii*bsumr
        str = str + (air*asumr-aii*asumi)
        sti = sti + (air*asumi+aii*asumr)
        s2r = phir*str - phii*sti
        s2i = phir*sti + phii*str
        str = dexp(s1r)*cssr(iflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s2r*s1i + s2i*s1r
        s2r = str
        if (iflag.ne.1) go to 80
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.ne.0) go to 120
   80   continue
        if (zi.le.0.0d0) s2i = -s2i
        str = s2r*c2r - s2i*c2i
        s2i = s2r*c2i + s2i*c2r
        s2r = str
        cyr(i) = s2r
        cyi(i) = s2i
        j = nd - i + 1
        yr(j) = s2r*csrr(iflag)
        yi(j) = s2i*csrr(iflag)
        str = -c2i*cidi
        c2i = c2r*cidi
        c2r = str
   90 continue
      if (nd.le.2) go to 110
      raz = 1.0d0/zabs2(zr,zi)
      str = zr*raz
      sti = -zi*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = csrr(iflag)
      ascle = bry(iflag)
      k = nd - 2
      fn = dble(float(k))
      do 100 i=3,nd
        c2r = s2r
        c2i = s2i
        s2r = s1r + (fnu+fn)*(rzr*c2r-rzi*c2i)
        s2i = s1i + (fnu+fn)*(rzr*c2i+rzi*c2r)
        s1r = c2r
        s1i = c2i
        c2r = s2r*c1r
        c2i = s2i*c1r
        yr(k) = c2r
        yi(k) = c2i
        k = k - 1
        fn = fn - 1.0d0
        if (iflag.ge.3) go to 100
        str = dabs(c2r)
        sti = dabs(c2i)
        c2m = dmax1(str,sti)
        if (c2m.le.ascle) go to 100
        iflag = iflag + 1
        ascle = bry(iflag)
        s1r = s1r*c1r
        s1i = s1i*c1r
        s2r = c2r
        s2i = c2i
        s1r = s1r*cssr(iflag)
        s1i = s1i*cssr(iflag)
        s2r = s2r*cssr(iflag)
        s2i = s2i*cssr(iflag)
        c1r = csrr(iflag)
  100 continue
  110 continue
      return
  120 continue
      if (rs1.gt.0.0d0) go to 140
c-----------------------------------------------------------------------
c     set underflow and update parameters
c-----------------------------------------------------------------------
      yr(nd) = zeror
      yi(nd) = zeroi
      nz = nz + 1
      nd = nd - 1
      if (nd.eq.0) go to 110
      call zuoik(zr, zi, fnu, kode, 1, nd, yr, yi, nuf, tol, elim, alim)
      if (nuf.lt.0) go to 140
      nd = nd - nuf
      nz = nz + nuf
      if (nd.eq.0) go to 110
      fn = fnu + dble(float(nd-1))
      if (fn.lt.fnul) go to 130
c      fn = cidi
c      j = nuf + 1
c      k = mod(j,4) + 1
c      s1r = cipr(k)
c      s1i = cipi(k)
c      if (fn.lt.0.0d0) s1i = -s1i
c      str = c2r*s1r - c2i*s1i
c      c2i = c2r*s1i + c2i*s1r
c      c2r = str
      in = inu + nd - 1
      in = mod(in,4) + 1
      c2r = car*cipr(in) - sar*cipi(in)
      c2i = car*cipi(in) + sar*cipr(in)
      if (zi.le.0.0d0) c2i = -c2i
      go to 40
  130 continue
      nlast = nd
      return
  140 continue
      nz = -1
      return
  150 continue
      if (rs1.gt.0.0d0) go to 140
      nz = n
      do 160 i=1,n
        yr(i) = zeror
        yi(i) = zeroi
  160 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zunik(zrr, zri, fnu, ikflg, ipmtr, tol, init, phir,
     * phii, zeta1r, zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
c     geuz for g77
      EXTERNAL zsqrt
      EXTERNAL zlog
c     Refer to  zbesi,zbesk
c
c        zunik computes parameters for the uniform asymptotic
c        expansions of the i and k functions on ikflg= 1 or 2
c        respectively by
c
c        w(fnu,zr) = phi*exp(zeta)*sum
c
c        where       zeta=-zeta1 + zeta2       or
c                          zeta1 - zeta2
c
c        the first call must have init=0. subsequent calls with the
c        same zr and fnu will return the i or k function on ikflg=
c        1 or 2 with no change in init. cwrk is a complex work
c        array. ipmtr=0 computes all parameters. ipmtr=1 computes phi,
c        zeta1,zeta2.
c
c***routines called  zdiv,zlog,zsqrt,d1mach
c     complex cfn,con,cone,crfn,cwrk,czero,phi,s,sr,sum,t,t2,zeta1,
c    *zeta2,zn,zr
      double precision ac, c, con, conei, coner, crfni, crfnr, cwrki,
     * cwrkr, fnu, phii, phir, rfn, si, sr, sri, srr, sti, str, sumi,
     * sumr, test, ti, tol, tr, t2i, t2r, zeroi, zeror, zeta1i, zeta1r,
     * zeta2i, zeta2r, zni, znr, zri, zrr, d1mach
      integer i, idum, ikflg, init, ipmtr, j, k, l
      dimension c(120), cwrkr(16), cwrki(16), con(2)
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
      data con(1), con(2)  /
     1 3.98942280401432678d-01,  1.25331413731550025d+00 /
      data c(1), c(2), c(3), c(4), c(5), c(6), c(7), c(8), c(9), c(10),
     1     c(11), c(12), c(13), c(14), c(15), c(16), c(17), c(18),
     2     c(19), c(20), c(21), c(22), c(23), c(24)/
     3     1.00000000000000000d+00,    -2.08333333333333333d-01,
     4     1.25000000000000000d-01,     3.34201388888888889d-01,
     5    -4.01041666666666667d-01,     7.03125000000000000d-02,
     6    -1.02581259645061728d+00,     1.84646267361111111d+00,
     7    -8.91210937500000000d-01,     7.32421875000000000d-02,
     8     4.66958442342624743d+00,    -1.12070026162229938d+01,
     9     8.78912353515625000d+00,    -2.36408691406250000d+00,
     a     1.12152099609375000d-01,    -2.82120725582002449d+01,
     b     8.46362176746007346d+01,    -9.18182415432400174d+01,
     c     4.25349987453884549d+01,    -7.36879435947963170d+00,
     d     2.27108001708984375d-01,     2.12570130039217123d+02,
     e    -7.65252468141181642d+02,     1.05999045252799988d+03/
      data c(25), c(26), c(27), c(28), c(29), c(30), c(31), c(32),
     1     c(33), c(34), c(35), c(36), c(37), c(38), c(39), c(40),
     2     c(41), c(42), c(43), c(44), c(45), c(46), c(47), c(48)/
     3    -6.99579627376132541d+02,     2.18190511744211590d+02,
     4    -2.64914304869515555d+01,     5.72501420974731445d-01,
     5    -1.91945766231840700d+03,     8.06172218173730938d+03,
     6    -1.35865500064341374d+04,     1.16553933368645332d+04,
     7    -5.30564697861340311d+03,     1.20090291321635246d+03,
     8    -1.08090919788394656d+02,     1.72772750258445740d+00,
     9     2.02042913309661486d+04,    -9.69805983886375135d+04,
     a     1.92547001232531532d+05,    -2.03400177280415534d+05,
     b     1.22200464983017460d+05,    -4.11926549688975513d+04,
     c     7.10951430248936372d+03,    -4.93915304773088012d+02,
     d     6.07404200127348304d+00,    -2.42919187900551333d+05,
     e     1.31176361466297720d+06,    -2.99801591853810675d+06/
      data c(49), c(50), c(51), c(52), c(53), c(54), c(55), c(56),
     1     c(57), c(58), c(59), c(60), c(61), c(62), c(63), c(64),
     2     c(65), c(66), c(67), c(68), c(69), c(70), c(71), c(72)/
     3     3.76327129765640400d+06,    -2.81356322658653411d+06,
     4     1.26836527332162478d+06,    -3.31645172484563578d+05,
     5     4.52187689813627263d+04,    -2.49983048181120962d+03,
     6     2.43805296995560639d+01,     3.28446985307203782d+06,
     7    -1.97068191184322269d+07,     5.09526024926646422d+07,
     8    -7.41051482115326577d+07,     6.63445122747290267d+07,
     9    -3.75671766607633513d+07,     1.32887671664218183d+07,
     a    -2.78561812808645469d+06,     3.08186404612662398d+05,
     b    -1.38860897537170405d+04,     1.10017140269246738d+02,
     c    -4.93292536645099620d+07,     3.25573074185765749d+08,
     d    -9.39462359681578403d+08,     1.55359689957058006d+09,
     e    -1.62108055210833708d+09,     1.10684281682301447d+09/
      data c(73), c(74), c(75), c(76), c(77), c(78), c(79), c(80),
     1     c(81), c(82), c(83), c(84), c(85), c(86), c(87), c(88),
     2     c(89), c(90), c(91), c(92), c(93), c(94), c(95), c(96)/
     3    -4.95889784275030309d+08,     1.42062907797533095d+08,
     4    -2.44740627257387285d+07,     2.24376817792244943d+06,
     5    -8.40054336030240853d+04,     5.51335896122020586d+02,
     6     8.14789096118312115d+08,    -5.86648149205184723d+09,
     7     1.86882075092958249d+10,    -3.46320433881587779d+10,
     8     4.12801855797539740d+10,    -3.30265997498007231d+10,
     9     1.79542137311556001d+10,    -6.56329379261928433d+09,
     a     1.55927986487925751d+09,    -2.25105661889415278d+08,
     b     1.73951075539781645d+07,    -5.49842327572288687d+05,
     c     3.03809051092238427d+03,    -1.46792612476956167d+10,
     d     1.14498237732025810d+11,    -3.99096175224466498d+11,
     e     8.19218669548577329d+11,    -1.09837515608122331d+12/
      data c(97), c(98), c(99), c(100), c(101), c(102), c(103), c(104),
     1     c(105), c(106), c(107), c(108), c(109), c(110), c(111),
     2     c(112), c(113), c(114), c(115), c(116), c(117), c(118)/
     3     1.00815810686538209d+12,    -6.45364869245376503d+11,
     4     2.87900649906150589d+11,    -8.78670721780232657d+10,
     5     1.76347306068349694d+10,    -2.16716498322379509d+09,
     6     1.43157876718888981d+08,    -3.87183344257261262d+06,
     7     1.82577554742931747d+04,     2.86464035717679043d+11,
     8    -2.40629790002850396d+12,     9.10934118523989896d+12,
     9    -2.05168994109344374d+13,     3.05651255199353206d+13,
     a    -3.16670885847851584d+13,     2.33483640445818409d+13,
     b    -1.23204913055982872d+13,     4.61272578084913197d+12,
     c    -1.19655288019618160d+12,     2.05914503232410016d+11,
     d    -2.18229277575292237d+10,     1.24700929351271032d+09/
      data c(119), c(120)/
     1    -2.91883881222208134d+07,     1.18838426256783253d+05/
c
      if (init.ne.0) go to 40
c-----------------------------------------------------------------------
c     initialize all variables
c-----------------------------------------------------------------------
      rfn = 1.0d0/fnu
c-----------------------------------------------------------------------
c     overflow test (zr/fnu too small)
c-----------------------------------------------------------------------
      test = d1mach(1)*1.0d+3
      ac = fnu*test
      if (dabs(zrr).gt.ac .or. dabs(zri).gt.ac) go to 15
      zeta1r = 2.0d0*dabs(dlog(test))+fnu
      zeta1i = 0.0d0
      zeta2r = fnu
      zeta2i = 0.0d0
      phir = 1.0d0
      phii = 0.0d0
      return
   15 continue
      tr = zrr*rfn
      ti = zri*rfn
      sr = coner + (tr*tr-ti*ti)
      si = conei + (tr*ti+ti*tr)
      call zsqrt(sr, si, srr, sri)
      str = coner + srr
      sti = conei + sri
      call zdiv(str, sti, tr, ti, znr, zni)
      call zlog(znr, zni, str, sti, idum)
      zeta1r = fnu*str
      zeta1i = fnu*sti
      zeta2r = fnu*srr
      zeta2i = fnu*sri
      call zdiv(coner, conei, srr, sri, tr, ti)
      srr = tr*rfn
      sri = ti*rfn
      call zsqrt(srr, sri, cwrkr(16), cwrki(16))
      phir = cwrkr(16)*con(ikflg)
      phii = cwrki(16)*con(ikflg)
      if (ipmtr.ne.0) return
      call zdiv(coner, conei, sr, si, t2r, t2i)
      cwrkr(1) = coner
      cwrki(1) = conei
      crfnr = coner
      crfni = conei
      ac = 1.0d0
      l = 1
      do 20 k=2,15
        sr = zeror
        si = zeroi
        do 10 j=1,k
          l = l + 1
          str = sr*t2r - si*t2i + c(l)
          si = sr*t2i + si*t2r
          sr = str
   10   continue
        str = crfnr*srr - crfni*sri
        crfni = crfnr*sri + crfni*srr
        crfnr = str
        cwrkr(k) = crfnr*sr - crfni*si
        cwrki(k) = crfnr*si + crfni*sr
        ac = ac*rfn
        test = dabs(cwrkr(k)) + dabs(cwrki(k))
        if (ac.lt.tol .and. test.lt.tol) go to 30
   20 continue
      k = 15
   30 continue
      init = k
   40 continue
      if (ikflg.eq.2) go to 60
c-----------------------------------------------------------------------
c     compute sum for the i function
c-----------------------------------------------------------------------
      sr = zeror
      si = zeroi
      do 50 i=1,init
        sr = sr + cwrkr(i)
        si = si + cwrki(i)
   50 continue
      sumr = sr
      sumi = si
      phir = cwrkr(16)*con(1)
      phii = cwrki(16)*con(1)
      return
   60 continue
c-----------------------------------------------------------------------
c     compute sum for the k function
c-----------------------------------------------------------------------
      sr = zeror
      si = zeroi
      tr = coner
      do 70 i=1,init
        sr = sr + tr*cwrkr(i)
        si = si + tr*cwrki(i)
        tr = -tr
   70 continue
      sumr = sr
      sumi = si
      phir = cwrkr(16)*con(2)
      phii = cwrki(16)*con(2)
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zunk1(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim,
     * alim)
c     refer to  zbesk
c
c     zunk1 computes k(fnu,z) and its analytic continuation from the
c     right half plane to the left half plane by means of the
c     uniform asymptotic expansion.
c     mr indicates the direction of rotation for analytic continuation.
c     nz=-1 means an overflow will occur
c
c***routines called  zkscl,zs1s2,zuchk,zunik,d1mach,zabs2
c     complex cfn,ck,cone,crsc,cs,cscl,csgn,cspn,csr,css,cwrk,cy,czero,
c    *c1,c2,phi,phid,rz,sum,sumd,s1,s2,y,z,zeta1,zeta1d,zeta2,zeta2d,zr
      double precision alim, ang, aphi, asc, ascle, bry, cki, ckr,
     * coner, crsc, cscl, csgni, cspni, cspnr, csr, csrr, cssr,
     * cwrki, cwrkr, cyi, cyr, c1i, c1r, c2i, c2m, c2r, elim, fmr, fn,
     * fnf, fnu, phidi, phidr, phii, phir, pi, rast, razr, rs1, rzi,
     * rzr, sgn, sti, str, sumdi, sumdr, sumi, sumr, s1i, s1r, s2i,
     * s2r, tol, yi, yr, zeroi, zeror, zeta1i, zeta1r, zeta2i, zeta2r,
     * zet1di, zet1dr, zet2di, zet2dr, zi, zr, zri, zrr, d1mach, zabs2
      integer i, ib, iflag, ifn, il, init, inu, iuf, k, kdflg, kflag,
     * kk, kode, mr, n, nw, nz, initd, ic, ipard, j
      dimension bry(3), init(2), yr(n), yi(n), sumr(2), sumi(2),
     * zeta1r(2), zeta1i(2), zeta2r(2), zeta2i(2), cyr(2), cyi(2),
     * cwrkr(16,3), cwrki(16,3), cssr(3), csrr(3), phir(2), phii(2)
      data zeror,zeroi,coner / 0.0d0, 0.0d0, 1.0d0 /
      data pi / 3.14159265358979324d0 /
c
      kdflg = 1
      nz = 0
c-----------------------------------------------------------------------
c     exp(-alim)=exp(-elim)/tol=approx. one precision greater than
c     the underflow limit
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      crsc = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = crsc
      csrr(1) = crsc
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = 1.0d+3*d1mach(1)/tol
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      zrr = zr
      zri = zi
      if (zr.ge.0.0d0) go to 10
      zrr = -zr
      zri = -zi
   10 continue
      j = 2
      do 70 i=1,n
c-----------------------------------------------------------------------
c     j flip flops between 1 and 2 in j = 3 - j
c-----------------------------------------------------------------------
        j = 3 - j
        fn = fnu + dble(float(i-1))
        init(j) = 0
        call zunik(zrr, zri, fn, 2, 0, tol, init(j), phir(j), phii(j),
     *   zeta1r(j), zeta1i(j), zeta2r(j), zeta2i(j), sumr(j), sumi(j),
     *   cwrkr(1,j), cwrki(1,j))
        if (kode.eq.1) go to 20
        str = zrr + zeta2r(j)
        sti = zri + zeta2i(j)
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = zeta1r(j) - str
        s1i = zeta1i(j) - sti
        go to 30
   20   continue
        s1r = zeta1r(j) - zeta2r(j)
        s1i = zeta1i(j) - zeta2i(j)
   30   continue
        rs1 = s1r
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        if (dabs(rs1).gt.elim) go to 60
        if (kdflg.eq.1) kflag = 2
        if (dabs(rs1).lt.alim) go to 40
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phir(j),phii(j))
        rs1 = rs1 + dlog(aphi)
        if (dabs(rs1).gt.elim) go to 60
        if (kdflg.eq.1) kflag = 1
        if (rs1.lt.0.0d0) go to 40
        if (kdflg.eq.1) kflag = 3
   40   continue
c-----------------------------------------------------------------------
c     scale s1 to keep intermediate arithmetic on scale near
c     exponent extremes
c-----------------------------------------------------------------------
        s2r = phir(j)*sumr(j) - phii(j)*sumi(j)
        s2i = phir(j)*sumi(j) + phii(j)*sumr(j)
        str = dexp(s1r)*cssr(kflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s1r*s2i + s2r*s1i
        s2r = str
        if (kflag.ne.1) go to 50
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.ne.0) go to 60
   50   continue
        cyr(kdflg) = s2r
        cyi(kdflg) = s2i
        yr(i) = s2r*csrr(kflag)
        yi(i) = s2i*csrr(kflag)
        if (kdflg.eq.2) go to 75
        kdflg = 2
        go to 70
   60   continue
        if (rs1.gt.0.0d0) go to 300
c-----------------------------------------------------------------------
c     for zr.lt.0.0, the i function to be added will overflow
c-----------------------------------------------------------------------
        if (zr.lt.0.0d0) go to 300
        kdflg = 1
        yr(i)=zeror
        yi(i)=zeroi
        nz=nz+1
        if (i.eq.1) go to 70
        if ((yr(i-1).eq.zeror).and.(yi(i-1).eq.zeroi)) go to 70
        yr(i-1)=zeror
        yi(i-1)=zeroi
        nz=nz+1
   70 continue
      i = n
   75 continue
      razr = 1.0d0/zabs2(zrr,zri)
      str = zrr*razr
      sti = -zri*razr
      rzr = (str+str)*razr
      rzi = (sti+sti)*razr
      ckr = fn*rzr
      cki = fn*rzi
      ib = i + 1
      if (n.lt.ib) go to 160
c-----------------------------------------------------------------------
c     test last member for underflow and overflow. set sequence to zero
c     on underflow.
c-----------------------------------------------------------------------
      fn = fnu + dble(float(n-1))
      ipard = 1
      if (mr.ne.0) ipard = 0
      initd = 0
      call zunik(zrr, zri, fn, 2, ipard, tol, initd, phidr, phidi,
     * zet1dr, zet1di, zet2dr, zet2di, sumdr, sumdi, cwrkr(1,3),
     * cwrki(1,3))
      if (kode.eq.1) go to 80
      str = zrr + zet2dr
      sti = zri + zet2di
      rast = fn/zabs2(str,sti)
      str = str*rast*rast
      sti = -sti*rast*rast
      s1r = zet1dr - str
      s1i = zet1di - sti
      go to 90
   80 continue
      s1r = zet1dr - zet2dr
      s1i = zet1di - zet2di
   90 continue
      rs1 = s1r
      if (dabs(rs1).gt.elim) go to 95
      if (dabs(rs1).lt.alim) go to 100
c----------------------------------------------------------------------------
c     refine estimate and test
c-------------------------------------------------------------------------
      aphi = zabs2(phidr,phidi)
      rs1 = rs1+dlog(aphi)
      if (dabs(rs1).lt.elim) go to 100
   95 continue
      if (dabs(rs1).gt.0.0d0) go to 300
c-----------------------------------------------------------------------
c     for zr.lt.0.0, the i function to be added will overflow
c-----------------------------------------------------------------------
      if (zr.lt.0.0d0) go to 300
      nz = n
      do 96 i=1,n
        yr(i) = zeror
        yi(i) = zeroi
   96 continue
      return
c---------------------------------------------------------------------------
c     forward recur for remainder of the sequence
c----------------------------------------------------------------------------
  100 continue
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = csrr(kflag)
      ascle = bry(kflag)
      do 120 i=ib,n
        c2r = s2r
        c2i = s2i
        s2r = ckr*c2r - cki*c2i + s1r
        s2i = ckr*c2i + cki*c2r + s1i
        s1r = c2r
        s1i = c2i
        ckr = ckr + rzr
        cki = cki + rzi
        c2r = s2r*c1r
        c2i = s2i*c1r
        yr(i) = c2r
        yi(i) = c2i
        if (kflag.ge.3) go to 120
        str = dabs(c2r)
        sti = dabs(c2i)
        c2m = dmax1(str,sti)
        if (c2m.le.ascle) go to 120
        kflag = kflag + 1
        ascle = bry(kflag)
        s1r = s1r*c1r
        s1i = s1i*c1r
        s2r = c2r
        s2i = c2i
        s1r = s1r*cssr(kflag)
        s1i = s1i*cssr(kflag)
        s2r = s2r*cssr(kflag)
        s2i = s2i*cssr(kflag)
        c1r = csrr(kflag)
  120 continue
  160 continue
      if (mr.eq.0) return
c-----------------------------------------------------------------------
c     analytic continuation for re(z).lt.0.0d0
c-----------------------------------------------------------------------
      nz = 0
      fmr = dble(float(mr))
      sgn = -dsign(pi,fmr)
c-----------------------------------------------------------------------
c     cspn and csgn are coeff of k and i functions resp.
c-----------------------------------------------------------------------
      csgni = sgn
      inu = int(sngl(fnu))
      fnf = fnu - dble(float(inu))
      ifn = inu + n - 1
      ang = fnf*sgn
      cspnr = dcos(ang)
      cspni = dsin(ang)
      if (mod(ifn,2).eq.0) go to 170
      cspnr = -cspnr
      cspni = -cspni
  170 continue
      asc = bry(1)
      iuf = 0
      kk = n
      kdflg = 1
      ib = ib - 1
      ic = ib - 1
      do 270 k=1,n
        fn = fnu + dble(float(kk-1))
c-----------------------------------------------------------------------
c     logic to sort out cases whose parameters were set for the k
c     function above
c-----------------------------------------------------------------------
        m=3
        if (n.gt.2) go to 175
  172   continue
        initd = init(j)
        phidr = phir(j)
        phidi = phii(j)
        zet1dr = zeta1r(j)
        zet1di = zeta1i(j)
        zet2dr = zeta2r(j)
        zet2di = zeta2i(j)
        sumdr = sumr(j)
        sumdi = sumi(j)
        m = j
        j = 3 - j
        go to 180
  175   continue
        if ((kk.eq.n).and.(ib.lt.n)) go to 180
        if ((kk.eq.ib).or.(kk.eq.ic)) go to 172
        initd = 0
  180   continue
        call zunik(zrr, zri, fn, 1, 0, tol, initd, phidr, phidi,
     *   zet1dr, zet1di, zet2dr, zet2di, sumdr, sumdi,
     *   cwrkr(1,m), cwrki(1,m))
        if (kode.eq.1) go to 200
        str = zrr + zet2dr
        sti = zri + zet2di
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = -zet1dr + str
        s1i = -zet1di + sti
        go to 210
  200   continue
        s1r = -zet1dr + zet2dr
        s1i = -zet1di + zet2di
  210   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 260
        if (kdflg.eq.1) iflag = 2
        if (dabs(rs1).lt.alim) go to 220
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phidr,phidi)
        rs1 = rs1 + dlog(aphi)
        if (dabs(rs1).gt.elim) go to 260
        if (kdflg.eq.1) iflag = 1
        if (rs1.lt.0.0d0) go to 220
        if (kdflg.eq.1) iflag = 3
  220   continue
        str = phidr*sumdr - phidi*sumdi
        sti = phidr*sumdi + phidi*sumdr
        s2r = -csgni*sti
        s2i = csgni*str
        str = dexp(s1r)*cssr(iflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s2r*s1i + s2i*s1r
        s2r = str
        if (iflag.ne.1) go to 230
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.eq.0) go to 230
        s2r = zeror
        s2i = zeroi
  230   continue
        cyr(kdflg) = s2r
        cyi(kdflg) = s2i
        c2r = s2r
        c2i = s2i
        s2r = s2r*csrr(iflag)
        s2i = s2i*csrr(iflag)
c-----------------------------------------------------------------------
c     add i and k functions, k sequence in y(i), i=1,n
c-----------------------------------------------------------------------
        s1r = yr(kk)
        s1i = yi(kk)
        if (kode.eq.1) go to 250
        call zs1s2(zrr, zri, s1r, s1i, s2r, s2i, nw, asc, alim, iuf)
        nz = nz + nw
  250   continue
        yr(kk) = s1r*cspnr - s1i*cspni + s2r
        yi(kk) = cspnr*s1i + cspni*s1r + s2i
        kk = kk - 1
        cspnr = -cspnr
        cspni = -cspni
        if (c2r.ne.0.0d0 .or. c2i.ne.0.0d0) go to 255
        kdflg = 1
        go to 270
  255   continue
        if (kdflg.eq.2) go to 275
        kdflg = 2
        go to 270
  260   continue
        if (rs1.gt.0.0d0) go to 300
        s2r = zeror
        s2i = zeroi
        go to 230
  270 continue
      k = n
  275 continue
      il = n - k
      if (il.eq.0) return
c-----------------------------------------------------------------------
c     recur backward for remainder of i sequence and add in the
c     k functions, scaling the i sequence during recurrence to keep
c     intermediate arithmetic on scale near exponent extremes.
c-----------------------------------------------------------------------
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      csr = csrr(iflag)
      ascle = bry(iflag)
      fn = dble(float(inu+il))
      do 290 i=1,il
        c2r = s2r
        c2i = s2i
        s2r = s1r + (fn+fnf)*(rzr*c2r-rzi*c2i)
        s2i = s1i + (fn+fnf)*(rzr*c2i+rzi*c2r)
        s1r = c2r
        s1i = c2i
        fn = fn - 1.0d0
        c2r = s2r*csr
        c2i = s2i*csr
        ckr = c2r
        cki = c2i
        c1r = yr(kk)
        c1i = yi(kk)
        if (kode.eq.1) go to 280
        call zs1s2(zrr, zri, c1r, c1i, c2r, c2i, nw, asc, alim, iuf)
        nz = nz + nw
  280   continue
        yr(kk) = c1r*cspnr - c1i*cspni + c2r
        yi(kk) = c1r*cspni + c1i*cspnr + c2i
        kk = kk - 1
        cspnr = -cspnr
        cspni = -cspni
        if (iflag.ge.3) go to 290
        c2r = dabs(ckr)
        c2i = dabs(cki)
        c2m = dmax1(c2r,c2i)
        if (c2m.le.ascle) go to 290
        iflag = iflag + 1
        ascle = bry(iflag)
        s1r = s1r*csr
        s1i = s1i*csr
        s2r = ckr
        s2i = cki
        s1r = s1r*cssr(iflag)
        s1i = s1i*cssr(iflag)
        s2r = s2r*cssr(iflag)
        s2i = s2i*cssr(iflag)
        csr = csrr(iflag)
  290 continue
      return
  300 continue
      nz = -1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zunk2(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim,
     * alim)
c     refer to  zbesk
c
c     zunk2 computes k(fnu,z) and its analytic continuation from the
c     right half plane to the left half plane by means of the
c     uniform asymptotic expansions for h(kind,fnu,zn) and j(fnu,zn)
c     where zn is in the right half plane, kind=(3-mr)/2, mr=+1 or
c     -1. here zn=zr*i or -zr*i where zr=z if z is in the right
c     half plane or zr=-z if z is in the left half plane. mr indic-
c     ates the direction of rotation for analytic continuation.
c     nz=-1 means an overflow will occur
c
c***routines called  zairy,zkscl,zs1s2,zuchk,zunhj,d1mach,zabs2
c     complex ai,arg,argd,asum,asumd,bsum,bsumd,cfn,ci,cip,ck,cone,crsc,
c    *cr1,cr2,cs,cscl,csgn,cspn,csr,css,cy,czero,c1,c2,dai,phi,phid,rz,
c    *s1,s2,y,z,zb,zeta1,zeta1d,zeta2,zeta2d,zn,zr
      double precision aarg, aic, aii, air, alim, ang, aphi, argdi,
     * argdr, argi, argr, asc, ascle, asumdi, asumdr, asumi, asumr,
     * bry, bsumdi, bsumdr, bsumi, bsumr, car, cipi, cipr, cki, ckr,
     * coner, crsc, cr1i, cr1r, cr2i, cr2r, cscl, csgni, csi,
     * cspni, cspnr, csr, csrr, cssr, cyi, cyr, c1i, c1r, c2i, c2m,
     * c2r, daii, dair, elim, fmr, fn, fnf, fnu, hpi, phidi, phidr,
     * phii, phir, pi, pti, ptr, rast, razr, rs1, rzi, rzr, sar, sgn,
     * sti, str, s1i, s1r, s2i, s2r, tol, yi, yr, yy, zbi, zbr, zeroi,
     * zeror, zeta1i, zeta1r, zeta2i, zeta2r, zet1di, zet1dr, zet2di,
     * zet2dr, zi, zni, znr, zr, zri, zrr, d1mach, zabs2
      integer i, ib, iflag, ifn, il, in, inu, iuf, k, kdflg, kflag, kk,
     * kode, mr, n, nai, ndai, nw, nz, idum, j, ipard, ic
      dimension bry(3), yr(n), yi(n), asumr(2), asumi(2), bsumr(2),
     * bsumi(2), phir(2), phii(2), argr(2), argi(2), zeta1r(2),
     * zeta1i(2), zeta2r(2), zeta2i(2), cyr(2), cyi(2), cipr(4),
     * cipi(4), cssr(3), csrr(3)
      data zeror,zeroi,coner,cr1r,cr1i,cr2r,cr2i /
     1         0.0d0, 0.0d0, 1.0d0,
     1 1.0d0,1.73205080756887729d0 , -0.5d0,-8.66025403784438647d-01 /
      data hpi, pi, aic /
     1     1.57079632679489662d+00,     3.14159265358979324d+00,
     1     1.26551212348464539d+00/
      data cipr(1),cipi(1),cipr(2),cipi(2),cipr(3),cipi(3),cipr(4),
     * cipi(4) /
     1  1.0d0,0.0d0 ,  0.0d0,-1.0d0 ,  -1.0d0,0.0d0 ,  0.0d0,1.0d0 /
c
      kdflg = 1
      nz = 0
c-----------------------------------------------------------------------
c     exp(-alim)=exp(-elim)/tol=approx. one precision greater than
c     the underflow limit
c-----------------------------------------------------------------------
      cscl = 1.0d0/tol
      crsc = tol
      cssr(1) = cscl
      cssr(2) = coner
      cssr(3) = crsc
      csrr(1) = crsc
      csrr(2) = coner
      csrr(3) = cscl
      bry(1) = 1.0d+3*d1mach(1)/tol
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      zrr = zr
      zri = zi
      if (zr.ge.0.0d0) go to 10
      zrr = -zr
      zri = -zi
   10 continue
      yy = zri
      znr = zri
      zni = -zrr
      zbr = zrr
      zbi = zri
      inu = int(sngl(fnu))
      fnf = fnu - dble(float(inu))
      ang = -hpi*fnf
      car = dcos(ang)
      sar = dsin(ang)
      c2r = hpi*sar
      c2i = -hpi*car
      kk = mod(inu,4) + 1
      str = c2r*cipr(kk) - c2i*cipi(kk)
      sti = c2r*cipi(kk) + c2i*cipr(kk)
      csr = cr1r*str - cr1i*sti
      csi = cr1r*sti + cr1i*str
      if (yy.gt.0.0d0) go to 20
      znr = -znr
      zbi = -zbi
   20 continue
c-----------------------------------------------------------------------
c     k(fnu,z) is computed from h(2,fnu,-i*z) where z is in the first
c     quadrant. fourth quadrant values (yy.le.0.0e0) are computed by
c     conjugation since the k function is real on the positive real axis
c-----------------------------------------------------------------------
      j = 2
      do 80 i=1,n
c-----------------------------------------------------------------------
c     j flip flops between 1 and 2 in j = 3 - j
c-----------------------------------------------------------------------
        j = 3 - j
        fn = fnu + dble(float(i-1))
        call zunhj(znr, zni, fn, 0, tol, phir(j), phii(j), argr(j),
     *   argi(j), zeta1r(j), zeta1i(j), zeta2r(j), zeta2i(j), asumr(j),
     *   asumi(j), bsumr(j), bsumi(j))
        if (kode.eq.1) go to 30
        str = zbr + zeta2r(j)
        sti = zbi + zeta2i(j)
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = zeta1r(j) - str
        s1i = zeta1i(j) - sti
        go to 40
   30   continue
        s1r = zeta1r(j) - zeta2r(j)
        s1i = zeta1i(j) - zeta2i(j)
   40   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 70
        if (kdflg.eq.1) kflag = 2
        if (dabs(rs1).lt.alim) go to 50
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phir(j),phii(j))
        aarg = zabs2(argr(j),argi(j))
        rs1 = rs1 + dlog(aphi) - 0.25d0*dlog(aarg) - aic
        if (dabs(rs1).gt.elim) go to 70
        if (kdflg.eq.1) kflag = 1
        if (rs1.lt.0.0d0) go to 50
        if (kdflg.eq.1) kflag = 3
   50   continue
c-----------------------------------------------------------------------
c     scale s1 to keep intermediate arithmetic on scale near
c     exponent extremes
c-----------------------------------------------------------------------
        c2r = argr(j)*cr2r - argi(j)*cr2i
        c2i = argr(j)*cr2i + argi(j)*cr2r
        call zairy(c2r, c2i, 0, 2, air, aii, nai, idum)
        call zairy(c2r, c2i, 1, 2, dair, daii, ndai, idum)
        str = dair*bsumr(j) - daii*bsumi(j)
        sti = dair*bsumi(j) + daii*bsumr(j)
        ptr = str*cr2r - sti*cr2i
        pti = str*cr2i + sti*cr2r
        str = ptr + (air*asumr(j)-aii*asumi(j))
        sti = pti + (air*asumi(j)+aii*asumr(j))
        ptr = str*phir(j) - sti*phii(j)
        pti = str*phii(j) + sti*phir(j)
        s2r = ptr*csr - pti*csi
        s2i = ptr*csi + pti*csr
        str = dexp(s1r)*cssr(kflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s1r*s2i + s2r*s1i
        s2r = str
        if (kflag.ne.1) go to 60
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.ne.0) go to 70
   60   continue
        if (yy.le.0.0d0) s2i = -s2i
        cyr(kdflg) = s2r
        cyi(kdflg) = s2i
        yr(i) = s2r*csrr(kflag)
        yi(i) = s2i*csrr(kflag)
        str = csi
        csi = -csr
        csr = str
        if (kdflg.eq.2) go to 85
        kdflg = 2
        go to 80
   70   continue
        if (rs1.gt.0.0d0) go to 320
c-----------------------------------------------------------------------
c     for zr.lt.0.0, the i function to be added will overflow
c-----------------------------------------------------------------------
        if (zr.lt.0.0d0) go to 320
        kdflg = 1
        yr(i)=zeror
        yi(i)=zeroi
        nz=nz+1
        str = csi
        csi =-csr
        csr = str
        if (i.eq.1) go to 80
        if ((yr(i-1).eq.zeror).and.(yi(i-1).eq.zeroi)) go to 80
        yr(i-1)=zeror
        yi(i-1)=zeroi
        nz=nz+1
   80 continue
      i = n
   85 continue
      razr = 1.0d0/zabs2(zrr,zri)
      str = zrr*razr
      sti = -zri*razr
      rzr = (str+str)*razr
      rzi = (sti+sti)*razr
      ckr = fn*rzr
      cki = fn*rzi
      ib = i + 1
      if (n.lt.ib) go to 180
c-----------------------------------------------------------------------
c     test last member for underflow and overflow. set sequence to zero
c     on underflow.
c-----------------------------------------------------------------------
      fn = fnu + dble(float(n-1))
      ipard = 1
      if (mr.ne.0) ipard = 0
      call zunhj(znr, zni, fn, ipard, tol, phidr, phidi, argdr, argdi,
     * zet1dr, zet1di, zet2dr, zet2di, asumdr, asumdi, bsumdr, bsumdi)
      if (kode.eq.1) go to 90
      str = zbr + zet2dr
      sti = zbi + zet2di
      rast = fn/zabs2(str,sti)
      str = str*rast*rast
      sti = -sti*rast*rast
      s1r = zet1dr - str
      s1i = zet1di - sti
      go to 100
   90 continue
      s1r = zet1dr - zet2dr
      s1i = zet1di - zet2di
  100 continue
      rs1 = s1r
      if (dabs(rs1).gt.elim) go to 105
      if (dabs(rs1).lt.alim) go to 120
c----------------------------------------------------------------------------
c     refine estimate and test
c-------------------------------------------------------------------------
      aphi = zabs2(phidr,phidi)
      rs1 = rs1+dlog(aphi)
      if (dabs(rs1).lt.elim) go to 120
  105 continue
      if (rs1.gt.0.0d0) go to 320
c-----------------------------------------------------------------------
c     for zr.lt.0.0, the i function to be added will overflow
c-----------------------------------------------------------------------
      if (zr.lt.0.0d0) go to 320
      nz = n
      do 106 i=1,n
        yr(i) = zeror
        yi(i) = zeroi
  106 continue
      return
  120 continue
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      c1r = csrr(kflag)
      ascle = bry(kflag)
      do 130 i=ib,n
        c2r = s2r
        c2i = s2i
        s2r = ckr*c2r - cki*c2i + s1r
        s2i = ckr*c2i + cki*c2r + s1i
        s1r = c2r
        s1i = c2i
        ckr = ckr + rzr
        cki = cki + rzi
        c2r = s2r*c1r
        c2i = s2i*c1r
        yr(i) = c2r
        yi(i) = c2i
        if (kflag.ge.3) go to 130
        str = dabs(c2r)
        sti = dabs(c2i)
        c2m = dmax1(str,sti)
        if (c2m.le.ascle) go to 130
        kflag = kflag + 1
        ascle = bry(kflag)
        s1r = s1r*c1r
        s1i = s1i*c1r
        s2r = c2r
        s2i = c2i
        s1r = s1r*cssr(kflag)
        s1i = s1i*cssr(kflag)
        s2r = s2r*cssr(kflag)
        s2i = s2i*cssr(kflag)
        c1r = csrr(kflag)
  130 continue
  180 continue
      if (mr.eq.0) return
c-----------------------------------------------------------------------
c     analytic continuation for re(z).lt.0.0d0
c-----------------------------------------------------------------------
      nz = 0
      fmr = dble(float(mr))
      sgn = -dsign(pi,fmr)
c-----------------------------------------------------------------------
c     cspn and csgn are coeff of k and i funcions resp.
c-----------------------------------------------------------------------
      csgni = sgn
      if (yy.le.0.0d0) csgni = -csgni
      ifn = inu + n - 1
      ang = fnf*sgn
      cspnr = dcos(ang)
      cspni = dsin(ang)
      if (mod(ifn,2).eq.0) go to 190
      cspnr = -cspnr
      cspni = -cspni
  190 continue
c-----------------------------------------------------------------------
c     cs=coeff of the j function to get the i function. i(fnu,z) is
c     computed from exp(i*fnu*hpi)*j(fnu,-i*z) where z is in the first
c     quadrant. fourth quadrant values (yy.le.0.0e0) are computed by
c     conjugation since the i function is real on the positive real axis
c-----------------------------------------------------------------------
      csr = sar*csgni
      csi = car*csgni
      in = mod(ifn,4) + 1
      c2r = cipr(in)
      c2i = cipi(in)
      str = csr*c2r + csi*c2i
      csi = -csr*c2i + csi*c2r
      csr = str
      asc = bry(1)
      iuf = 0
      kk = n
      kdflg = 1
      ib = ib - 1
      ic = ib - 1
      do 290 k=1,n
        fn = fnu + dble(float(kk-1))
c-----------------------------------------------------------------------
c     logic to sort out cases whose parameters were set for the k
c     function above
c-----------------------------------------------------------------------
        if (n.gt.2) go to 175
  172   continue
        phidr = phir(j)
        phidi = phii(j)
        argdr = argr(j)
        argdi = argi(j)
        zet1dr = zeta1r(j)
        zet1di = zeta1i(j)
        zet2dr = zeta2r(j)
        zet2di = zeta2i(j)
        asumdr = asumr(j)
        asumdi = asumi(j)
        bsumdr = bsumr(j)
        bsumdi = bsumi(j)
        j = 3 - j
        go to 210
  175   continue
        if ((kk.eq.n).and.(ib.lt.n)) go to 210
        if ((kk.eq.ib).or.(kk.eq.ic)) go to 172
        call zunhj(znr, zni, fn, 0, tol, phidr, phidi, argdr,
     *   argdi, zet1dr, zet1di, zet2dr, zet2di, asumdr,
     *   asumdi, bsumdr, bsumdi)
  210   continue
        if (kode.eq.1) go to 220
        str = zbr + zet2dr
        sti = zbi + zet2di
        rast = fn/zabs2(str,sti)
        str = str*rast*rast
        sti = -sti*rast*rast
        s1r = -zet1dr + str
        s1i = -zet1di + sti
        go to 230
  220   continue
        s1r = -zet1dr + zet2dr
        s1i = -zet1di + zet2di
  230   continue
c-----------------------------------------------------------------------
c     test for underflow and overflow
c-----------------------------------------------------------------------
        rs1 = s1r
        if (dabs(rs1).gt.elim) go to 280
        if (kdflg.eq.1) iflag = 2
        if (dabs(rs1).lt.alim) go to 240
c-----------------------------------------------------------------------
c     refine  test and scale
c-----------------------------------------------------------------------
        aphi = zabs2(phidr,phidi)
        aarg = zabs2(argdr,argdi)
        rs1 = rs1 + dlog(aphi) - 0.25d0*dlog(aarg) - aic
        if (dabs(rs1).gt.elim) go to 280
        if (kdflg.eq.1) iflag = 1
        if (rs1.lt.0.0d0) go to 240
        if (kdflg.eq.1) iflag = 3
  240   continue
        call zairy(argdr, argdi, 0, 2, air, aii, nai, idum)
        call zairy(argdr, argdi, 1, 2, dair, daii, ndai, idum)
        str = dair*bsumdr - daii*bsumdi
        sti = dair*bsumdi + daii*bsumdr
        str = str + (air*asumdr-aii*asumdi)
        sti = sti + (air*asumdi+aii*asumdr)
        ptr = str*phidr - sti*phidi
        pti = str*phidi + sti*phidr
        s2r = ptr*csr - pti*csi
        s2i = ptr*csi + pti*csr
        str = dexp(s1r)*cssr(iflag)
        s1r = str*dcos(s1i)
        s1i = str*dsin(s1i)
        str = s2r*s1r - s2i*s1i
        s2i = s2r*s1i + s2i*s1r
        s2r = str
        if (iflag.ne.1) go to 250
        call zuchk(s2r, s2i, nw, bry(1), tol)
        if (nw.eq.0) go to 250
        s2r = zeror
        s2i = zeroi
  250   continue
        if (yy.le.0.0d0) s2i = -s2i
        cyr(kdflg) = s2r
        cyi(kdflg) = s2i
        c2r = s2r
        c2i = s2i
        s2r = s2r*csrr(iflag)
        s2i = s2i*csrr(iflag)
c-----------------------------------------------------------------------
c     add i and k functions, k sequence in y(i), i=1,n
c-----------------------------------------------------------------------
        s1r = yr(kk)
        s1i = yi(kk)
        if (kode.eq.1) go to 270
        call zs1s2(zrr, zri, s1r, s1i, s2r, s2i, nw, asc, alim, iuf)
        nz = nz + nw
  270   continue
        yr(kk) = s1r*cspnr - s1i*cspni + s2r
        yi(kk) = s1r*cspni + s1i*cspnr + s2i
        kk = kk - 1
        cspnr = -cspnr
        cspni = -cspni
        str = csi
        csi = -csr
        csr = str
        if (c2r.ne.0.0d0 .or. c2i.ne.0.0d0) go to 255
        kdflg = 1
        go to 290
  255   continue
        if (kdflg.eq.2) go to 295
        kdflg = 2
        go to 290
  280   continue
        if (rs1.gt.0.0d0) go to 320
        s2r = zeror
        s2i = zeroi
        go to 250
  290 continue
      k = n
  295 continue
      il = n - k
      if (il.eq.0) return
c-----------------------------------------------------------------------
c     recur backward for remainder of i sequence and add in the
c     k functions, scaling the i sequence during recurrence to keep
c     intermediate arithmetic on scale near exponent extremes.
c-----------------------------------------------------------------------
      s1r = cyr(1)
      s1i = cyi(1)
      s2r = cyr(2)
      s2i = cyi(2)
      csr = csrr(iflag)
      ascle = bry(iflag)
      fn = dble(float(inu+il))
      do 310 i=1,il
        c2r = s2r
        c2i = s2i
        s2r = s1r + (fn+fnf)*(rzr*c2r-rzi*c2i)
        s2i = s1i + (fn+fnf)*(rzr*c2i+rzi*c2r)
        s1r = c2r
        s1i = c2i
        fn = fn - 1.0d0
        c2r = s2r*csr
        c2i = s2i*csr
        ckr = c2r
        cki = c2i
        c1r = yr(kk)
        c1i = yi(kk)
        if (kode.eq.1) go to 300
        call zs1s2(zrr, zri, c1r, c1i, c2r, c2i, nw, asc, alim, iuf)
        nz = nz + nw
  300   continue
        yr(kk) = c1r*cspnr - c1i*cspni + c2r
        yi(kk) = c1r*cspni + c1i*cspnr + c2i
        kk = kk - 1
        cspnr = -cspnr
        cspni = -cspni
        if (iflag.ge.3) go to 310
        c2r = dabs(ckr)
        c2i = dabs(cki)
        c2m = dmax1(c2r,c2i)
        if (c2m.le.ascle) go to 310
        iflag = iflag + 1
        ascle = bry(iflag)
        s1r = s1r*csr
        s1i = s1i*csr
        s2r = ckr
        s2i = cki
        s1r = s1r*cssr(iflag)
        s1i = s1i*cssr(iflag)
        s2r = s2r*cssr(iflag)
        s2i = s2i*cssr(iflag)
        csr = csrr(iflag)
  310 continue
      return
  320 continue
      nz = -1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zuoik(zr, zi, fnu, kode, ikflg, n, yr, yi, nuf, tol,
     * elim, alim)
c     geuz for g77
      EXTERNAL zlog
c     refer to  zbesi,zbesk,zbesh
c
c     zuoik computes the leading terms of the uniform asymptotic
c     expansions for the i and k functions and compares them
c     (in logarithmic form) to alim and elim for over and underflow
c     where alim.lt.elim. if the magnitude, based on the leading
c     exponential, is less than alim or greater than -alim, then
c     the result is on scale. if not, then a refined test using other
c     multipliers (in logarithmic form) is made based on elim. here
c     exp(-elim)=smallest machine number*1.0e+3 and exp(-alim)=
c     exp(-elim)/tol
c
c     ikflg=1 means the i sequence is tested
c          =2 means the k sequence is tested
c     nuf = 0 means the last member of the sequence is on scale
c         =-1 means an overflow would occur
c     ikflg=1 and nuf.gt.0 means the last nuf y values were set to zero
c             the first n-nuf values must be set by another routine
c     ikflg=2 and nuf.eq.n means all y values were set to zero
c     ikflg=2 and 0.lt.nuf.lt.n not considered. y must be set by
c             another routine
c
c***routines called  zuchk,zunhj,zunik,d1mach,zabs2,zlog
c     complex arg,asum,bsum,cwrk,cz,czero,phi,sum,y,z,zb,zeta1,zeta2,zn,
c    *zr
      double precision aarg, aic, alim, aphi, argi, argr, asumi, asumr,
     * ascle, ax, ay, bsumi, bsumr, cwrki, cwrkr, czi, czr, elim, fnn,
     * fnu, gnn, gnu, phii, phir, rcz, str, sti, sumi, sumr, tol, yi,
     * yr, zbi, zbr, zeroi, zeror, zeta1i, zeta1r, zeta2i, zeta2r, zi,
     * zni, znr, zr, zri, zrr, d1mach, zabs2
      integer i, idum, iform, ikflg, init, kode, n, nn, nuf, nw
      dimension yr(n), yi(n), cwrkr(16), cwrki(16)
      data zeror,zeroi / 0.0d0, 0.0d0 /
      data aic / 1.265512123484645396d+00 /
      nuf = 0
      nn = n
      zrr = zr
      zri = zi
      if (zr.ge.0.0d0) go to 10
      zrr = -zr
      zri = -zi
   10 continue
      zbr = zrr
      zbi = zri
      ax = dabs(zr)*1.7321d0
      ay = dabs(zi)
      iform = 1
      if (ay.gt.ax) iform = 2
      gnu = dmax1(fnu,1.0d0)
      if (ikflg.eq.1) go to 20
      fnn = dble(float(nn))
      gnn = fnu + fnn - 1.0d0
      gnu = dmax1(gnn,fnn)
   20 continue
c-----------------------------------------------------------------------
c     only the magnitude of arg and phi are needed along with the
c     real parts of zeta1, zeta2 and zb. no attempt is made to get
c     the sign of the imaginary part correct.
c-----------------------------------------------------------------------
      if (iform.eq.2) go to 30
      init = 0
      call zunik(zrr, zri, gnu, ikflg, 1, tol, init, phir, phii,
     * zeta1r, zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
      czr = -zeta1r + zeta2r
      czi = -zeta1i + zeta2i
      go to 50
   30 continue
      znr = zri
      zni = -zrr
      if (zi.gt.0.0d0) go to 40
      znr = -znr
   40 continue
      call zunhj(znr, zni, gnu, 1, tol, phir, phii, argr, argi, zeta1r,
     * zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
      czr = -zeta1r + zeta2r
      czi = -zeta1i + zeta2i
      aarg = zabs2(argr,argi)
   50 continue
      if (kode.eq.1) go to 60
      czr = czr - zbr
      czi = czi - zbi
   60 continue
      if (ikflg.eq.1) go to 70
      czr = -czr
      czi = -czi
   70 continue
      aphi = zabs2(phir,phii)
      rcz = czr
c-----------------------------------------------------------------------
c     overflow test
c-----------------------------------------------------------------------
      if (rcz.gt.elim) go to 210
      if (rcz.lt.alim) go to 80
      rcz = rcz + dlog(aphi)
      if (iform.eq.2) rcz = rcz - 0.25d0*dlog(aarg) - aic
      if (rcz.gt.elim) go to 210
      go to 130
   80 continue
c-----------------------------------------------------------------------
c     underflow test
c-----------------------------------------------------------------------
      if (rcz.lt.(-elim)) go to 90
      if (rcz.gt.(-alim)) go to 130
      rcz = rcz + dlog(aphi)
      if (iform.eq.2) rcz = rcz - 0.25d0*dlog(aarg) - aic
      if (rcz.gt.(-elim)) go to 110
   90 continue
      do 100 i=1,nn
        yr(i) = zeror
        yi(i) = zeroi
  100 continue
      nuf = nn
      return
  110 continue
      ascle = 1.0d+3*d1mach(1)/tol
      call zlog(phir, phii, str, sti, idum)
      czr = czr + str
      czi = czi + sti
      if (iform.eq.1) go to 120
      call zlog(argr, argi, str, sti, idum)
      czr = czr - 0.25d0*str - aic
      czi = czi - 0.25d0*sti
  120 continue
      ax = dexp(rcz)/tol
      ay = czi
      czr = ax*dcos(ay)
      czi = ax*dsin(ay)
      call zuchk(czr, czi, nw, ascle, tol)
      if (nw.ne.0) go to 90
  130 continue
      if (ikflg.eq.2) return
      if (n.eq.1) return
c-----------------------------------------------------------------------
c     set underflows on i sequence
c-----------------------------------------------------------------------
  140 continue
      gnu = fnu + dble(float(nn-1))
      if (iform.eq.2) go to 150
      init = 0
      call zunik(zrr, zri, gnu, ikflg, 1, tol, init, phir, phii,
     * zeta1r, zeta1i, zeta2r, zeta2i, sumr, sumi, cwrkr, cwrki)
      czr = -zeta1r + zeta2r
      czi = -zeta1i + zeta2i
      go to 160
  150 continue
      call zunhj(znr, zni, gnu, 1, tol, phir, phii, argr, argi, zeta1r,
     * zeta1i, zeta2r, zeta2i, asumr, asumi, bsumr, bsumi)
      czr = -zeta1r + zeta2r
      czi = -zeta1i + zeta2i
      aarg = zabs2(argr,argi)
  160 continue
      if (kode.eq.1) go to 170
      czr = czr - zbr
      czi = czi - zbi
  170 continue
      aphi = zabs2(phir,phii)
      rcz = czr
      if (rcz.lt.(-elim)) go to 180
      if (rcz.gt.(-alim)) return
      rcz = rcz + dlog(aphi)
      if (iform.eq.2) rcz = rcz - 0.25d0*dlog(aarg) - aic
      if (rcz.gt.(-elim)) go to 190
  180 continue
      yr(nn) = zeror
      yi(nn) = zeroi
      nn = nn - 1
      nuf = nuf + 1
      if (nn.eq.0) return
      go to 140
  190 continue
      ascle = 1.0d+3*d1mach(1)/tol
      call zlog(phir, phii, str, sti, idum)
      czr = czr + str
      czi = czi + sti
      if (iform.eq.1) go to 200
      call zlog(argr, argi, str, sti, idum)
      czr = czr - 0.25d0*str - aic
      czi = czi - 0.25d0*sti
  200 continue
      ax = dexp(rcz)/tol
      ay = czi
      czr = ax*dcos(ay)
      czi = ax*dsin(ay)
      call zuchk(czr, czi, nw, ascle, tol)
      if (nw.ne.0) go to 180
      return
  210 continue
      nuf = -1
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------

















      subroutine zbesj(zr, zi, fnu, kode, n, cyr, cyi, nz, ierr)
c     j-Bessel function of complex argument and first kind
c Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, cbesj computes an n member  sequence of complex
c         bessel functions cy(i)=j(fnu+i-1,z) for real, nonnegative
c         orders fnu+i-1, i=1,...,n and complex z in the cut plane
c         -pi.lt.arg(z).le.pi. on kode=2, cbesj returns the scaled
c         functions
c
c         cy(i)=exp(-abs(y))*j(fnu+i-1,z)   i = 1,...,n , y=aimag(z)
c
c         which remove the exponential growth in both the upper and
c         lower half planes for z to infinity.
c
c         Input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi),  -pi.lt.arg(z).le.pi
c           fnu    - order of initial j function, fnu.ge.0.0d0
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(i)=j(fnu+i-1,z), i=1,...,n
c                        = 2  returns
c                             cy(i)=j(fnu+i-1,z)exp(-abs(y)), i=1,...,n
c           n      - number of members of the sequence, n.ge.1
c
c         Output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(i)=j(fnu+i-1,z)  or
c                    cy(i)=j(fnu+i-1,z)exp(-abs(y))  i=1,...,n
c                    depending on kode, y=aimag(z).
c           nz     - number of components set to zero due to underflow,
c                    nz= 0   , normal return
c                    nz.gt.0 , last nz components of cy set  zero due
c                              to underflow, cy(i)=cmplx(0.0d0,0.0d0),
c                              i = n-nz+1,...,n
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, aimag(z)
c                            too large on kode=1
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         the computation is carried out by the formula
c
c         j(fnu,z)=exp( fnu*pi*i/2)*i(fnu,-i*z)    aimag(z).ge.0.0
c
c         j(fnu,z)=exp(-fnu*pi*i/2)*i(fnu, i*z)    aimag(z).lt.0.0
c
c         where i**2 = -1 and i(fnu,z) is the i bessel function.
c
c         for negative orders,the formula
c
c              j(-fnu,z) = j(fnu,z)*cos(pi*fnu) - y(fnu,z)*sin(pi*fnu)
c
c         can be used. however,for large orders close to integers, the
c         the function changes radically. when fnu is a large positive
c         integer,the magnitude of j(-fnu,z)=j(fnu,z)*cos(pi*fnu) is a
c         large negative power of ten. but when fnu is not an integer,
c         y(fnu,z) dominates in magnitude with a large positive power of
c         ten and the most that the second term can be reduced is by
c         unit roundoff from the coefficient. thus, wide changes can
c         occur within unit roundoff of a large integer for fnu. here,
c         large means fnu.gt.cabs(z).
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zbinu,i1mach,d1mach
c
c     complex ci,csgn,cy,z,zn
      double precision aa, alim, arg, cii, csgni, csgnr, cyi, cyr, dig,
     * elim, fnu, fnul, hpi, rl, r1m5, str, tol, zi, zni, znr, zr,
     * d1mach, bb, fn, az, zabs2, ascle, rtol, atol, sti
      integer i, ierr, inu, inuh, ir, k, kode, k1, k2, n, nl, nz, i1mach
      dimension cyr(n), cyi(n)
      data hpi /1.57079632679489662d0/

c      write(*,*)'zr, zi, fnu, kode, n, nz',zr, zi, fnu, kode, n,nz
c      write(*,*)'cyr',(cyr(i),i=1,n) 
c      write(*,*)'cyi',(cyi(i),i=1,n) 
      
c
      ierr = 0
      nz=0
      if (fnu.lt.0.0d0) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu.
c-----------------------------------------------------------------------
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      rl = 1.2d0*dig + 3.0d0
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
c-----------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      az = zabs2(zr,zi)
      fn = fnu+dble(float(n-1))
      aa = 0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa = dmin1(aa,bb)
      if (az.gt.aa) go to 260
      if (fn.gt.aa) go to 260
      aa = dsqrt(aa)
      if (az.gt.aa) ierr=3
      if (fn.gt.aa) ierr=3
c-----------------------------------------------------------------------
c     calculate csgn=exp(fnu*hpi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      cii = 1.0d0
      inu = int(sngl(fnu))
      inuh = inu/2
      ir = inu - 2*inuh
      arg = (fnu-dble(float(inu-ir)))*hpi
      csgnr = dcos(arg)
      csgni = dsin(arg)
      if (mod(inuh,2).eq.0) go to 40
      csgnr = -csgnr
      csgni = -csgni
   40 continue
c-----------------------------------------------------------------------
c     zn is in the right half plane
c-----------------------------------------------------------------------
      znr = zi
      zni = -zr
      if (zi.ge.0.0d0) go to 50
      znr = -znr
      zni = -zni
      csgni = -csgni
      cii = -cii
   50 continue
      call zbinu(znr, zni, fnu, kode, n, cyr, cyi, nz, rl, fnul, tol,
     * elim, alim)
      if (nz.lt.0) go to 130
      nl = n - nz
      if (nl.eq.0) return
      rtol = 1.0d0/tol
      ascle = d1mach(1)*rtol*1.0d+3
      do 60 i=1,nl
c       str = cyr(i)*csgnr - cyi(i)*csgni
c       cyi(i) = cyr(i)*csgni + cyi(i)*csgnr
c       cyr(i) = str
        aa = cyr(i)
        bb = cyi(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 55
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
   55   continue
        str = aa*csgnr - bb*csgni
        sti = aa*csgni + bb*csgnr
        cyr(i) = str*atol
        cyi(i) = sti*atol
        str = -csgni*cii
        csgni = csgnr*cii
        csgnr = str
   60 continue
      return
  130 continue
      if(nz.eq.(-2)) go to 140
      nz = 0
      ierr = 2
      return
  140 continue
      nz=0
      ierr=5
      return
  260 continue
      nz=0
      ierr=4
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbesy(zr, zi, fnu, kode, n, cyr, cyi, nz, cwrkr, cwrki,
     *                 ierr)
c     y-Bessel function of complex argument and of second kind
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, cbesy computes an n member sequence of complex
c         bessel functions cy(i)=y(fnu+i-1,z) for real, nonnegative
c         orders fnu+i-1, i=1,...,n and complex z in the cut plane
c         -pi.lt.arg(z).le.pi. on kode=2, cbesy returns the scaled
c         functions
c
c         cy(i)=exp(-abs(y))*y(fnu+i-1,z)   i = 1,...,n , y=aimag(z)
c
c         which remove the exponential growth in both the upper and
c         lower half planes for z to infinity.
c
c         input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi), z.ne.cmplx(0.0d0,0.0d0),
c                    -pi.lt.arg(z).le.pi
c           fnu    - order of initial y function, fnu.ge.0.0d0
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(i)=y(fnu+i-1,z), i=1,...,n
c                        = 2  returns
c                             cy(i)=y(fnu+i-1,z)*exp(-abs(y)), i=1,...,n
c                             where y=aimag(z)
c           n      - number of members of the sequence, n.ge.1
c           cwrkr, - double precision work vectors of dimension at
c           cwrki    at least n
c
c         output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(i)=y(fnu+i-1,z)  or
c                    cy(i)=y(fnu+i-1,z)*exp(-abs(y))  i=1,...,n
c                    depending on kode.
c           nz     - nz=0 , a normal return
c                    nz.gt.0 , nz components of cy set to zero due to
c                    underflow (generally on kode=2)
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, fnu is
c                            too large or cabs(z) is too small or both
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         the computation is carried out by the formula
c
c         y(fnu,z)=0.5*(h(1,fnu,z)-h(2,fnu,z))/i
c
c         where i**2 = -1 and the hankel bessel functions h(1,fnu,z)
c         and h(2,fnu,z) are calculated in cbesh.
c
c         for negative orders,the formula
c
c         y(-fnu,z) = y(fnu,z)*cos(pi*fnu) + j(fnu,z)*sin(pi*fnu)
c
c         can be used. however,for large orders close to half odd
c         integers the function changes radically. when fnu is a large
c         positive half odd integer,the magnitude of y(-fnu,z)=j(fnu,z)*
c         sin(pi*fnu) is a large negative power of ten. but when fnu is
c         not a half odd integer, y(fnu,z) dominates in magnitude with a
c         large positive power of ten and the most that the second term
c         can be reduced is by unit roundoff from the coefficient. thus,
c         wide changes can occur within unit roundoff of a large half
c         odd integer. here, large means fnu.gt.cabs(z).
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zbesh,i1mach,d1mach
c
c     complex cwrk,cy,c1,c2,ex,hci,z,zu,zv
      double precision cwrki, cwrkr, cyi, cyr, c1i, c1r, c2i, c2r,
     * elim, exi, exr, ey, fnu, hcii, sti, str, tay, zi, zr, dexp,
     * d1mach, ascle, rtol, atol, aa, bb, tol
      integer i, ierr, k, kode, k1, k2, n, nz, nz1, nz2, i1mach
      dimension cyr(n), cyi(n), cwrkr(n), cwrki(n)
c     
      ierr = 0
      nz=0
      if (zr.eq.0.0d0 .and. zi.eq.0.0d0) ierr=1
      if (fnu.lt.0.0d0) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
      hcii = 0.5d0
      call zbesh(zr, zi, fnu, kode, 1, n, cyr, cyi, nz1, ierr)
      if (ierr.ne.0.and.ierr.ne.3) go to 170
      call zbesh(zr, zi, fnu, kode, 2, n, cwrkr, cwrki, nz2, ierr)
      if (ierr.ne.0.and.ierr.ne.3) go to 170
      nz = min0(nz1,nz2)
      if (kode.eq.2) go to 60
      do 50 i=1,n
        str = cwrkr(i) - cyr(i)
        sti = cwrki(i) - cyi(i)
        cyr(i) = -sti*hcii
        cyi(i) = str*hcii
   50 continue
      return
   60 continue
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      k = min0(iabs(k1),iabs(k2))
      r1m5 = d1mach(5)
c-----------------------------------------------------------------------
c     elim is the approximate exponential under- and overflow limit
c-----------------------------------------------------------------------
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      exr = dcos(zr)
      exi = dsin(zr)
      ey = 0.0d0
      tay = dabs(zi+zi)
      if (tay.lt.elim) ey = dexp(-tay)
      if (zi.lt.0.0d0) go to 90
      c1r = exr*ey
      c1i = exi*ey
      c2r = exr
      c2i = -exi
   70 continue
      nz = 0
      rtol = 1.0d0/tol
      ascle = d1mach(1)*rtol*1.0d+3
      do 80 i=1,n
c       str = c1r*cyr(i) - c1i*cyi(i)
c       sti = c1r*cyi(i) + c1i*cyr(i)
c       str = -str + c2r*cwrkr(i) - c2i*cwrki(i)
c       sti = -sti + c2r*cwrki(i) + c2i*cwrkr(i)
c       cyr(i) = -sti*hcii
c       cyi(i) = str*hcii
        aa = cwrkr(i)
        bb = cwrki(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 75
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
   75   continue
        str = (aa*c2r - bb*c2i)*atol
        sti = (aa*c2i + bb*c2r)*atol
        aa = cyr(i)
        bb = cyi(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 85
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
   85   continue
        str = str - (aa*c1r - bb*c1i)*atol
        sti = sti - (aa*c1i + bb*c1r)*atol
        cyr(i) = -sti*hcii
        cyi(i) =  str*hcii
        if (str.eq.0.0d0 .and. sti.eq.0.0d0 .and. ey.eq.0.0d0) nz = nz
     *   + 1
   80 continue
      return
   90 continue
      c1r = exr
      c1i = exi
      c2r = exr*ey
      c2i = -exi*ey
      go to 70
  170 continue
      nz = 0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbesh(zr, zi, fnu, kode, m, n, cyr, cyi, nz, ierr)
c     h-Bessel functions of complex argument and third kind,hankel functions
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, zbesh computes an n member sequence of complex
c         hankel (bessel) functions cy(j)=h(m,fnu+j-1,z) for kinds m=1
c         or 2, real, nonnegative orders fnu+j-1, j=1,...,n, and complex
c         z.ne.cmplx(0.0,0.0) in the cut plane -pi.lt.arg(z).le.pi.
c         on kode=2, zbesh returns the scaled hankel functions
c
c         cy(i)=exp(-mm*z*i)*h(m,fnu+j-1,z)       mm=3-2*m,   i**2=-1.
c
c         which removes the exponential behavior in both the upper and
c         lower half planes.
c
c         input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi), z.ne.cmplx(0.0d0,0.0d0),
c                    -pt.lt.arg(z).le.pi
c           fnu    - order of initial h function, fnu.ge.0.0d0
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(j)=h(m,fnu+j-1,z),   j=1,...,n
c                        = 2  returns
c                             cy(j)=h(m,fnu+j-1,z)*exp(-i*z*(3-2m))
c                                  j=1,...,n  ,  i**2=-1
c           m      - kind of hankel function, m=1 or 2
c           n      - number of members in the sequence, n.ge.1
c
c         output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(j)=h(m,fnu+j-1,z)  or
c                    cy(j)=h(m,fnu+j-1,z)*exp(-i*z*(3-2m))  j=1,...,n
c                    depending on kode, i**2=-1.
c           nz     - number of components set to zero due to underflow,
c                    nz= 0   , normal return
c                    nz.gt.0 , first nz components of cy set to zero due
c                              to underflow, cy(j)=cmplx(0.0d0,0.0d0)
c                              j=1,...,nz when y.gt.0.0 and m=1 or
c                              y.lt.0.0 and m=2. for the complmentary
c                              half planes, nz states only the number
c                              of underflows.
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, fnu too
c                            large or cabs(z) too small or both
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         the computation is carried out by the relation
c
c         h(m,fnu,z)=(1/mp)*exp(-mp*fnu)*k(fnu,z*exp(-mp))
c             mp=mm*hpi*i,  mm=3-2*m,  hpi=pi/2,  i**2=-1
c
c         for m=1 or 2 where the k bessel function is computed for the
c         right half plane re(z).ge.0.0. the k function is continued
c         to the left half plane by the relation
c
c         k(fnu,z*exp(mp)) = exp(-mp*fnu)*k(fnu,z)-mp*i(fnu,z)
c         mp=mr*pi*i, mr=+1 or -1, re(z).gt.0, i**2=-1
c
c         where i(fnu,z) is the i bessel function.
c
c         exponential decay of h(m,fnu,z) occurs in the upper half z
c         plane for m=1 and the lower half z plane for m=2.  exponential
c         growth occurs in the complementary half planes.  scaling
c         by exp(-mm*z*i) removes the exponential behavior in the
c         whole z plane for z to infinity.
c
c         for negative orders,the formulae
c
c               h(1,-fnu,z) = h(1,fnu,z)*cexp( pi*fnu*i)
c               h(2,-fnu,z) = h(2,fnu,z)*cexp(-pi*fnu*i)
c                         i**2=-1
c
c         can be used.
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0d-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zacon,zbknu,zbunk,zuoik,zabs2,i1mach,d1mach
c
c     complex cy,z,zn,zt,csgn
      double precision aa, alim, aln, arg, az, cyi, cyr, dig, elim,
     * fmm, fn, fnu, fnul, hpi, rhpi, rl, r1m5, sgn, str, tol, ufl, zi,
     * zni, znr, zr, zti, d1mach, zabs2, bb, ascle, rtol, atol, sti,
     * csgnr, csgni
      integer i, ierr, inu, inuh, ir, k, kode, k1, k2, m,
     * mm, mr, n, nn, nuf, nw, nz, i1mach
      dimension cyr(n), cyi(n)
      data hpi /1.57079632679489662d0/
c
      ierr = 0
      nz=0
      if (zr.eq.0.0d0 .and. zi.eq.0.0d0) ierr=1
      if (fnu.lt.0.0d0) ierr=1
      if (m.lt.1 .or. m.gt.2) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
      nn = n
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu
c-----------------------------------------------------------------------
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
      rl = 1.2d0*dig + 3.0d0
      fn = fnu + dble(float(nn-1))
      mm = 3 - m - m
      fmm = dble(float(mm))
      znr = fmm*zi
      zni = -fmm*zr
c-----------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      az = zabs2(zr,zi)
      aa = 0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa = dmin1(aa,bb)
      if (az.gt.aa) go to 260
      if (fn.gt.aa) go to 260
      aa = dsqrt(aa)
      if (az.gt.aa) ierr=3
      if (fn.gt.aa) ierr=3
c-----------------------------------------------------------------------
c     overflow test on the last member of the sequence
c-----------------------------------------------------------------------
      ufl = d1mach(1)*1.0d+3
      if (az.lt.ufl) go to 230
      if (fnu.gt.fnul) go to 90
      if (fn.le.1.0d0) go to 70
      if (fn.gt.2.0d0) go to 60
      if (az.gt.tol) go to 70
      arg = 0.5d0*az
      aln = -fn*dlog(arg)
      if (aln.gt.elim) go to 230
      go to 70
   60 continue
      call zuoik(znr, zni, fnu, kode, 2, nn, cyr, cyi, nuf, tol, elim,
     * alim)
      if (nuf.lt.0) go to 230
      nz = nz + nuf
      nn = nn - nuf
c-----------------------------------------------------------------------
c     here nn=n or nn=0 since nuf=0,nn, or -1 on return from cuoik
c     if nuf=nn, then cy(i)=czero for all i
c-----------------------------------------------------------------------
      if (nn.eq.0) go to 140
   70 continue
      if ((znr.lt.0.0d0) .or. (znr.eq.0.0d0 .and. zni.lt.0.0d0 .and.
     * m.eq.2)) go to 80
c-----------------------------------------------------------------------
c     right half plane computation, xn.ge.0. .and. (xn.ne.0. .or.
c     yn.ge.0. .or. m=1)
c-----------------------------------------------------------------------
      call zbknu(znr, zni, fnu, kode, nn, cyr, cyi, nz, tol, elim, alim)
      go to 110
c-----------------------------------------------------------------------
c     left half plane computation
c-----------------------------------------------------------------------
   80 continue
      mr = -mm
      call zacon(znr, zni, fnu, kode, mr, nn, cyr, cyi, nw, rl, fnul,
     * tol, elim, alim)
      if (nw.lt.0) go to 240
      nz=nw
      go to 110
   90 continue
c-----------------------------------------------------------------------
c     uniform asymptotic expansions for fnu.gt.fnul
c-----------------------------------------------------------------------
      mr = 0
      if ((znr.ge.0.0d0) .and. (znr.ne.0.0d0 .or. zni.ge.0.0d0 .or.
     * m.ne.2)) go to 100
      mr = -mm
      if (znr.ne.0.0d0 .or. zni.ge.0.0d0) go to 100
      znr = -znr
      zni = -zni
  100 continue
      call zbunk(znr, zni, fnu, kode, mr, nn, cyr, cyi, nw, tol, elim,
     * alim)
      if (nw.lt.0) go to 240
      nz = nz + nw
  110 continue
c-----------------------------------------------------------------------
c     h(m,fnu,z) = -fmm*(i/hpi)*(zt**fnu)*k(fnu,-z*zt)
c
c     zt=exp(-fmm*hpi*i) = cmplx(0.0,-fmm), fmm=3-2*m, m=1,2
c-----------------------------------------------------------------------
      sgn = dsign(hpi,-fmm)
c-----------------------------------------------------------------------
c     calculate exp(fnu*hpi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      inuh = inu/2
      ir = inu - 2*inuh
      arg = (fnu-dble(float(inu-ir)))*sgn
      rhpi = 1.0d0/sgn
c     zni = rhpi*dcos(arg)
c     znr = -rhpi*dsin(arg)
      csgni = rhpi*dcos(arg)
      csgnr = -rhpi*dsin(arg)
      if (mod(inuh,2).eq.0) go to 120
c     znr = -znr
c     zni = -zni
      csgnr = -csgnr
      csgni = -csgni
  120 continue
      zti = -fmm
      rtol = 1.0d0/tol
      ascle = ufl*rtol
      do 130 i=1,nn
c       str = cyr(i)*znr - cyi(i)*zni
c       cyi(i) = cyr(i)*zni + cyi(i)*znr
c       cyr(i) = str
c       str = -zni*zti
c       zni = znr*zti
c       znr = str
        aa = cyr(i)
        bb = cyi(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 135
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
  135 continue
      str = aa*csgnr - bb*csgni
      sti = aa*csgni + bb*csgnr
      cyr(i) = str*atol
      cyi(i) = sti*atol
      str = -csgni*zti
      csgni = csgnr*zti
      csgnr = str
  130 continue
      return
  140 continue
      if (znr.lt.0.0d0) go to 230
      return
  230 continue
      nz=0
      ierr=2
      return
  240 continue
      if(nw.eq.(-1)) go to 230
      nz=0
      ierr=5
      return
  260 continue
      nz=0
      ierr=4
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbesi(zr, zi, fnu, kode, n, cyr, cyi, nz, ierr)
c     i-Bessel function,complex bessel function,
c     modified bessel function of the first kind
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, zbesi computes an n member sequence of complex
c         bessel functions cy(j)=i(fnu+j-1,z) for real, nonnegative
c         orders fnu+j-1, j=1,...,n and complex z in the cut plane
c         -pi.lt.arg(z).le.pi. on kode=2, zbesi returns the scaled
c         functions
c
c         cy(j)=exp(-abs(x))*i(fnu+j-1,z)   j = 1,...,n , x=real(z)
c
c         with the exponential growth removed in both the left and
c         right half planes for z to infinity. definitions and notation
c         are found in the nbs handbook of mathematical functions
c         (ref. 1).
c
c         input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi),  -pi.lt.arg(z).le.pi
c           fnu    - order of initial i function, fnu.ge.0.0d0
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(j)=i(fnu+j-1,z), j=1,...,n
c                        = 2  returns
c                             cy(j)=i(fnu+j-1,z)*exp(-abs(x)), j=1,...,n
c           n      - number of members of the sequence, n.ge.1
c
c         output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(j)=i(fnu+j-1,z)  or
c                    cy(j)=i(fnu+j-1,z)*exp(-abs(x))  j=1,...,n
c                    depending on kode, x=real(z)
c           nz     - number of components set to zero due to underflow,
c                    nz= 0   , normal return
c                    nz.gt.0 , last nz components of cy set to zero
c                              to underflow, cy(j)=cmplx(0.0d0,0.0d0)
c                              j = n-nz+1,...,n
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, real(z) too
c                            large on kode=1
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         the computation is carried out by the power series for
c         small cabs(z), the asymptotic expansion for large cabs(z),
c         the miller algorithm normalized by the wronskian and a
c         neumann series for imtermediate magnitudes, and the
c         uniform asymptotic expansions for i(fnu,z) and j(fnu,z)
c         for large orders. backward recurrence is used to generate
c         sequences or reduce orders when necessary.
c
c         the calculations above are done in the right half plane and
c         continued into the left half plane by the formula
c
c         i(fnu,z*exp(m*pi)) = exp(m*pi*fnu)*i(fnu,z)  real(z).gt.0.0
c                       m = +i or -i,  i**2=-1
c
c         for negative orders,the formula
c
c              i(-fnu,z) = i(fnu,z) + (2/pi)*sin(pi*fnu)*k(fnu,z)
c
c         can be used. however,for large orders close to integers, the
c         the function changes radically. when fnu is a large positive
c         integer,the magnitude of i(-fnu,z)=i(fnu,z) is a large
c         negative power of ten. but when fnu is not an integer,
c         k(fnu,z) dominates in magnitude with a large positive power of
c         ten and the most that the second term can be reduced is by
c         unit roundoff from the coefficient. thus, wide changes can
c         occur within unit roundoff of a large integer for fnu. here,
c         large means fnu.gt.cabs(z).
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zbinu,i1mach,d1mach
c     complex cone,csgn,cw,cy,czero,z,zn
      double precision aa, alim, arg, conei, coner, csgni, csgnr, cyi,
     * cyr, dig, elim, fnu, fnul, pi, rl, r1m5, str, tol, zi, zni, znr,
     * zr, d1mach, az, bb, fn, zabs2, ascle, rtol, atol, sti
      integer i, ierr, inu, k, kode, k1,k2,n,nz,nn, i1mach
      dimension cyr(n), cyi(n)
      data pi /3.14159265358979324d0/
      data coner, conei /1.0d0,0.0d0/
c
      ierr = 0
      nz=0
      if (fnu.lt.0.0d0) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu.
c-----------------------------------------------------------------------
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      rl = 1.2d0*dig + 3.0d0
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
c-----------------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      az = zabs2(zr,zi)
      fn = fnu+dble(float(n-1))
      aa = 0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa = dmin1(aa,bb)
      if (az.gt.aa) go to 260
      if (fn.gt.aa) go to 260
      aa = dsqrt(aa)
      if (az.gt.aa) ierr=3
      if (fn.gt.aa) ierr=3
      znr = zr
      zni = zi
      csgnr = coner
      csgni = conei
      if (zr.ge.0.0d0) go to 40
      znr = -zr
      zni = -zi
c-----------------------------------------------------------------------
c     calculate csgn=exp(fnu*pi*i) to minimize losses of significance
c     when fnu is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      arg = (fnu-dble(float(inu)))*pi
      if (zi.lt.0.0d0) arg = -arg
      csgnr = dcos(arg)
      csgni = dsin(arg)
      if (mod(inu,2).eq.0) go to 40
      csgnr = -csgnr
      csgni = -csgni
   40 continue
      call zbinu(znr, zni, fnu, kode, n, cyr, cyi, nz, rl, fnul, tol,
     * elim, alim)
      if (nz.lt.0) go to 120
      if (zr.ge.0.0d0) return
c-----------------------------------------------------------------------
c     analytic continuation to the left half plane
c-----------------------------------------------------------------------
      nn = n - nz
      if (nn.eq.0) return
      rtol = 1.0d0/tol
      ascle = d1mach(1)*rtol*1.0d+3
      do 50 i=1,nn
c       str = cyr(i)*csgnr - cyi(i)*csgni
c       cyi(i) = cyr(i)*csgni + cyi(i)*csgnr
c       cyr(i) = str
        aa = cyr(i)
        bb = cyi(i)
        atol = 1.0d0
        if (dmax1(dabs(aa),dabs(bb)).gt.ascle) go to 55
          aa = aa*rtol
          bb = bb*rtol
          atol = tol
   55   continue
        str = aa*csgnr - bb*csgni
        sti = aa*csgni + bb*csgnr
        cyr(i) = str*atol
        cyi(i) = sti*atol
        csgnr = -csgnr
        csgni = -csgni
   50 continue
      return
  120 continue
      if(nz.eq.(-2)) go to 130
      nz = 0
      ierr=2
      return
  130 continue
      nz=0
      ierr=5
      return
  260 continue
      nz=0
      ierr=4
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbesk(zr, zi, fnu, kode, n, cyr, cyi, nz, ierr)
c     k-Bessel function,complex bessel function,
c     modified bessel function of the second kind,
c     bessel function of the third kind
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, cbesk computes an n member sequence of complex
c         bessel functions cy(j)=k(fnu+j-1,z) for real, nonnegative
c         orders fnu+j-1, j=1,...,n and complex z.ne.cmplx(0.0,0.0)
c         in the cut plane -pi.lt.arg(z).le.pi. on kode=2, cbesk
c         returns the scaled k functions,
c
c         cy(j)=exp(z)*k(fnu+j-1,z) , j=1,...,n,
c
c         which remove the exponential behavior in both the left and
c         right half planes for z to infinity.
c
c         input      zr,zi,fnu are double precision
c           zr,zi  - z=cmplx(zr,zi), z.ne.cmplx(0.0d0,0.0d0),
c                    -pi.lt.arg(z).le.pi
c           fnu    - order of initial k function, fnu.ge.0.0d0
c           n      - number of members of the sequence, n.ge.1
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             cy(i)=k(fnu+i-1,z), i=1,...,n
c                        = 2  returns
c                             cy(i)=k(fnu+i-1,z)*exp(z), i=1,...,n
c
c         output     cyr,cyi are double precision
c           cyr,cyi- double precision vectors whose first n components
c                    contain real and imaginary parts for the sequence
c                    cy(i)=k(fnu+i-1,z), i=1,...,n or
c                    cy(i)=k(fnu+i-1,z)*exp(z), i=1,...,n
c                    depending on kode
c           nz     - number of components set to zero due to underflow.
c                    nz= 0   , normal return
c                    nz.gt.0 , first nz components of cy set to zero due
c                              to underflow, cy(i)=cmplx(0.0d0,0.0d0),
c                              i=1,...,n when x.ge.0.0. when x.lt.0.0
c                              nz states only the number of underflows
c                              in the sequence.
c
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, fnu is
c                            too large or cabs(z) is too small or both
c                    ierr=3, cabs(z) or fnu+n-1 large - computation done
c                            but losses of signifcance by argument
c                            reduction produce less than half of machine
c                            accuracy
c                    ierr=4, cabs(z) or fnu+n-1 too large - no computa-
c                            tion because of complete losses of signifi-
c                            cance by argument reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         equations of the reference are implemented for small orders
c         dnu and dnu+1.0 in the right half plane x.ge.0.0. forward
c         recurrence generates higher orders. k is continued to the left
c         half plane by the relation
c
c         k(fnu,z*exp(mp)) = exp(-mp*fnu)*k(fnu,z)-mp*i(fnu,z)
c         mp=mr*pi*i, mr=+1 or -1, re(z).gt.0, i**2=-1
c
c         where i(fnu,z) is the i bessel function.
c
c         for large orders, fnu.gt.fnul, the k function is computed
c         by means of its uniform asymptotic expansions.
c
c         for negative orders, the formula
c
c                       k(-fnu,z) = k(fnu,z)
c
c         can be used.
c
c         cbesk assumes that a significant digit sinh(x) function is
c         available.
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z or fnu+n-1 is
c         large, losses of significance by argument reduction occur.
c         consequently, if either one exceeds u1=sqrt(0.5/ur), then
c         losses exceeding half precision are likely and an error flag
c         ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         if either is larger than u2=0.5/ur, then all significance is
c         lost and ierr=4. in order to use the int function, arguments
c         must be further restricted not to exceed the largest machine
c         integer, u3=i1mach(9). thus, the magnitude of z and fnu+n-1 is
c         restricted by min(u2,u3). on 32 bit machines, u1,u2, and u3
c         are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single precision
c         arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double precision
c         arithmetic respectively. this makes u2 and u3 limiting in
c         their respective arithmetics. this means that one can expect
c         to retain, in the worst cases on 32 bit machines, no digits
c         in single and only 7 digits in double precision arithmetic.
c         similar considerations hold for other machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zacon,zbknu,zbunk,zuoik,zabs2,i1mach,d1mach
c
c     complex cy,z
      double precision aa, alim, aln, arg, az, cyi, cyr, dig, elim, fn,
     * fnu, fnul, rl, r1m5, tol, ufl, zi, zr, d1mach, zabs2, bb
      integer ierr, k, kode, k1, k2, mr, n, nn, nuf, nw, nz, i1mach
      dimension cyr(n), cyi(n)
c
      ierr = 0
      nz=0
      if (zi.eq.0.0e0 .and. zr.eq.0.0e0) ierr=1
      if (fnu.lt.0.0d0) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (n.lt.1) ierr=1
      if (ierr.ne.0) return
      nn = n
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu
c-----------------------------------------------------------------------
      tol = dmax1(d1mach(4),1.0d-18)
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
      rl = 1.2d0*dig + 3.0d0
c-----------------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      az = zabs2(zr,zi)
      fn = fnu + dble(float(nn-1))
      aa = 0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa = dmin1(aa,bb)
      if (az.gt.aa) go to 260
      if (fn.gt.aa) go to 260
      aa = dsqrt(aa)
      if (az.gt.aa) ierr=3
      if (fn.gt.aa) ierr=3
c-----------------------------------------------------------------------
c     overflow test on the last member of the sequence
c-----------------------------------------------------------------------
c     ufl = dexp(-elim)
      ufl = d1mach(1)*1.0d+3
      if (az.lt.ufl) go to 180
      if (fnu.gt.fnul) go to 80
      if (fn.le.1.0d0) go to 60
      if (fn.gt.2.0d0) go to 50
      if (az.gt.tol) go to 60
      arg = 0.5d0*az
      aln = -fn*dlog(arg)
      if (aln.gt.elim) go to 180
      go to 60
   50 continue
      call zuoik(zr, zi, fnu, kode, 2, nn, cyr, cyi, nuf, tol, elim,
     * alim)
      if (nuf.lt.0) go to 180
      nz = nz + nuf
      nn = nn - nuf
c-----------------------------------------------------------------------
c     here nn=n or nn=0 since nuf=0,nn, or -1 on return from cuoik
c     if nuf=nn, then cy(i)=czero for all i
c-----------------------------------------------------------------------
      if (nn.eq.0) go to 100
   60 continue
      if (zr.lt.0.0d0) go to 70
c-----------------------------------------------------------------------
c     right half plane computation, real(z).ge.0.
c-----------------------------------------------------------------------
      call zbknu(zr, zi, fnu, kode, nn, cyr, cyi, nw, tol, elim, alim)
      if (nw.lt.0) go to 200
      nz=nw
      return
c-----------------------------------------------------------------------
c     left half plane computation
c     pi/2.lt.arg(z).le.pi and -pi.lt.arg(z).lt.-pi/2.
c-----------------------------------------------------------------------
   70 continue
      if (nz.ne.0) go to 180
      mr = 1
      if (zi.lt.0.0d0) mr = -1
      call zacon(zr, zi, fnu, kode, mr, nn, cyr, cyi, nw, rl, fnul,
     * tol, elim, alim)
      if (nw.lt.0) go to 200
      nz=nw
      return
c-----------------------------------------------------------------------
c     uniform asymptotic expansions for fnu.gt.fnul
c-----------------------------------------------------------------------
   80 continue
      mr = 0
      if (zr.ge.0.0d0) go to 90
      mr = 1
      if (zi.lt.0.0d0) mr = -1
   90 continue
      call zbunk(zr, zi, fnu, kode, mr, nn, cyr, cyi, nw, tol, elim,
     * alim)
      if (nw.lt.0) go to 200
      nz = nz + nw
      return
  100 continue
      if (zr.lt.0.0d0) go to 180
      return
  180 continue
      nz = 0
      ierr=2
      return
  200 continue
      if(nw.eq.(-1)) go to 180
      nz=0
      ierr=5
      return
  260 continue
      nz=0
      ierr=4
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zasyi(zr, zi, fnu, kode, n, yr, yi, nz, rl, tol, elim,
     * alim)
c     geuz for g77
      EXTERNAL zsqrt
      EXTERNAL zexp
c     Refer to  zbesi,zbesk
c
c     zasyi computes the i bessel function for real(z).ge.0.0 by
c     means of the asymptotic expansion for large cabs(z) in the
c     region cabs(z).gt.max(rl,fnu*fnu/2). nz=0 is a normal return.
c     nz.lt.0 indicates an overflow on kode=1.
c
c***routines called  d1mach,zabs2,zdiv,zexp,zmlt,zsqrt
c
c     complex ak1,ck,cone,cs1,cs2,cz,czero,dk,ez,p1,rz,s2,y,z
      double precision aa, aez, ak, ak1i, ak1r, alim, arg, arm, atol,
     * az, bb, bk, cki, ckr, conei, coner, cs1i, cs1r, cs2i, cs2r, czi,
     * czr, dfnu, dki, dkr, dnu2, elim, ezi, ezr, fdn, fnu, pi, p1i,
     * p1r, raz, rl, rtpi, rtr1, rzi, rzr, s, sgn, sqk, sti, str, s2i,
     * s2r, tol, tzi, tzr, yi, yr, zeroi, zeror, zi, zr, d1mach, zabs2
      integer i, ib, il, inu, j, jl, k, kode, koded, m, n, nn, nz
      dimension yr(n), yi(n)
      data pi, rtpi  /3.14159265358979324d0 , 0.159154943091895336d0 /
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
c
      nz = 0
      az = zabs2(zr,zi)
      arm = 1.0d+3*d1mach(1)
      rtr1 = dsqrt(arm)
      il = min0(2,n)
      dfnu = fnu + dble(float(n-il))
c-----------------------------------------------------------------------
c     overflow test
c-----------------------------------------------------------------------
      raz = 1.0d0/az
      str = zr*raz
      sti = -zi*raz
      ak1r = rtpi*str*raz
      ak1i = rtpi*sti*raz
      call zsqrt(ak1r, ak1i, ak1r, ak1i)
      czr = zr
      czi = zi
      if (kode.ne.2) go to 10
      czr = zeror
      czi = zi
   10 continue
      if (dabs(czr).gt.elim) go to 100
      dnu2 = dfnu + dfnu
      koded = 1
      if ((dabs(czr).gt.alim) .and. (n.gt.2)) go to 20
      koded = 0
      call zexp(czr, czi, str, sti)
      call zmlt(ak1r, ak1i, str, sti, ak1r, ak1i)
   20 continue
      fdn = 0.0d0
      if (dnu2.gt.rtr1) fdn = dnu2*dnu2
      ezr = zr*8.0d0
      ezi = zi*8.0d0
c-----------------------------------------------------------------------
c     when z is imaginary, the error test must be made relative to the
c     first reciprocal power since this is the leading term of the
c     expansion for the imaginary part.
c-----------------------------------------------------------------------
      aez = 8.0d0*az
      s = tol/aez
      jl = int(sngl(rl+rl)) + 2
      p1r = zeror
      p1i = zeroi
      if (zi.eq.0.0d0) go to 30
c-----------------------------------------------------------------------
c     calculate exp(pi*(0.5+fnu+n-il)*i) to minimize losses of
c     significance when fnu or n is large
c-----------------------------------------------------------------------
      inu = int(sngl(fnu))
      arg = (fnu-dble(float(inu)))*pi
      inu = inu + n - il
      ak = -dsin(arg)
      bk = dcos(arg)
      if (zi.lt.0.0d0) bk = -bk
      p1r = ak
      p1i = bk
      if (mod(inu,2).eq.0) go to 30
      p1r = -p1r
      p1i = -p1i
   30 continue
      do 70 k=1,il
        sqk = fdn - 1.0d0
        atol = s*dabs(sqk)
        sgn = 1.0d0
        cs1r = coner
        cs1i = conei
        cs2r = coner
        cs2i = conei
        ckr = coner
        cki = conei
        ak = 0.0d0
        aa = 1.0d0
        bb = aez
        dkr = ezr
        dki = ezi
        do 40 j=1,jl
          call zdiv(ckr, cki, dkr, dki, str, sti)
          ckr = str*sqk
          cki = sti*sqk
          cs2r = cs2r + ckr
          cs2i = cs2i + cki
          sgn = -sgn
          cs1r = cs1r + ckr*sgn
          cs1i = cs1i + cki*sgn
          dkr = dkr + ezr
          dki = dki + ezi
          aa = aa*dabs(sqk)/bb
          bb = bb + aez
          ak = ak + 8.0d0
          sqk = sqk - ak
          if (aa.le.atol) go to 50
   40   continue
        go to 110
   50   continue
        s2r = cs1r
        s2i = cs1i
        if (zr+zr.ge.elim) go to 60
        tzr = zr + zr
        tzi = zi + zi
        call zexp(-tzr, -tzi, str, sti)
        call zmlt(str, sti, p1r, p1i, str, sti)
        call zmlt(str, sti, cs2r, cs2i, str, sti)
        s2r = s2r + str
        s2i = s2i + sti
   60   continue
        fdn = fdn + 8.0d0*dfnu + 4.0d0
        p1r = -p1r
        p1i = -p1i
        m = n - il + k
        yr(m) = s2r*ak1r - s2i*ak1i
        yi(m) = s2r*ak1i + s2i*ak1r
   70 continue
      if (n.le.2) return
      nn = n
      k = nn - 2
      ak = dble(float(k))
      str = zr*raz
      sti = -zi*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      ib = 3
      do 80 i=ib,nn
        yr(k) = (ak+fnu)*(rzr*yr(k+1)-rzi*yi(k+1)) + yr(k+2)
        yi(k) = (ak+fnu)*(rzr*yi(k+1)+rzi*yr(k+1)) + yi(k+2)
        ak = ak - 1.0d0
        k = k - 1
   80 continue
      if (koded.eq.0) return
      call zexp(czr, czi, ckr, cki)
      do 90 i=1,nn
        str = yr(i)*ckr - yi(i)*cki
        yi(i) = yr(i)*cki + yi(i)*ckr
        yr(i) = str
   90 continue
      return
  100 continue
      nz = -1
      return
  110 continue
      nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbinu(zr, zi, fnu, kode, n, cyr, cyi, nz, rl, fnul,
     * tol, elim, alim)
c***refer to  zbesh,zbesi,zbesj,zbesk,zairy,zbiry
c
c     zbinu computes the i function in the right half z plane
c
c***routines called  zabs2,zasyi,zbuni,zmlri,zseri,zuoik,zwrsk
c
      double precision alim, az, cwi, cwr, cyi, cyr, dfnu, elim, fnu,
     * fnul, rl, tol, zeroi, zeror, zi, zr, zabs2
      integer i, inw, kode, n, nlast, nn, nui, nw, nz
      dimension cyr(n), cyi(n), cwr(2), cwi(2)
      data zeror,zeroi / 0.0d0, 0.0d0 /
c
      nz = 0
      az = zabs2(zr,zi)
      nn = n
      dfnu = fnu + dble(float(n-1))
      if (az.le.2.0d0) go to 10
      if (az*az*0.25d0.gt.dfnu+1.0d0) go to 20
   10 continue
c-----------------------------------------------------------------------
c     power series
c-----------------------------------------------------------------------
      call zseri(zr, zi, fnu, kode, nn, cyr, cyi, nw, tol, elim, alim)
      inw = iabs(nw)
      nz = nz + inw
      nn = nn - inw
      if (nn.eq.0) return
      if (nw.ge.0) go to 120
      dfnu = fnu + dble(float(nn-1))
   20 continue
      if (az.lt.rl) go to 40
      if (dfnu.le.1.0d0) go to 30
      if (az+az.lt.dfnu*dfnu) go to 50
c-----------------------------------------------------------------------
c     asymptotic expansion for large z
c-----------------------------------------------------------------------
   30 continue
      call zasyi(zr, zi, fnu, kode, nn, cyr, cyi, nw, rl, tol, elim,
     * alim)
      if (nw.lt.0) go to 130
      go to 120
   40 continue
      if (dfnu.le.1.0d0) go to 70
   50 continue
c-----------------------------------------------------------------------
c     overflow and underflow test on i sequence for miller algorithm
c-----------------------------------------------------------------------
      call zuoik(zr, zi, fnu, kode, 1, nn, cyr, cyi, nw, tol, elim,
     * alim)
      if (nw.lt.0) go to 130
      nz = nz + nw
      nn = nn - nw
      if (nn.eq.0) return
      dfnu = fnu+dble(float(nn-1))
      if (dfnu.gt.fnul) go to 110
      if (az.gt.fnul) go to 110
   60 continue
      if (az.gt.rl) go to 80
   70 continue
c-----------------------------------------------------------------------
c     miller algorithm normalized by the series
c-----------------------------------------------------------------------
      call zmlri(zr, zi, fnu, kode, nn, cyr, cyi, nw, tol)
      if(nw.lt.0) go to 130
      go to 120
   80 continue
c-----------------------------------------------------------------------
c     miller algorithm normalized by the wronskian
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
c     overflow test on k functions used in wronskian
c-----------------------------------------------------------------------
      call zuoik(zr, zi, fnu, kode, 2, 2, cwr, cwi, nw, tol, elim,
     * alim)
      if (nw.ge.0) go to 100
      nz = nn
      do 90 i=1,nn
        cyr(i) = zeror
        cyi(i) = zeroi
   90 continue
      return
  100 continue
      if (nw.gt.0) go to 130
      call zwrsk(zr, zi, fnu, kode, nn, cyr, cyi, nw, cwr, cwi, tol,
     * elim, alim)
      if (nw.lt.0) go to 130
      go to 120
  110 continue
c-----------------------------------------------------------------------
c     increment fnu+nn-1 up to fnul, compute and recur backward
c-----------------------------------------------------------------------
      nui = int(sngl(fnul-dfnu)) + 1
      nui = max0(nui,0)
      call zbuni(zr, zi, fnu, kode, nn, cyr, cyi, nw, nui, nlast, fnul,
     * tol, elim, alim)
      if (nw.lt.0) go to 130
      nz = nz + nw
      if (nlast.eq.0) go to 120
      nn = nlast
      go to 60
  120 continue
      return
  130 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbknu(zr, zi, fnu, kode, n, yr, yi, nz, tol, elim,
     * alim)
c     geuz for g77
      EXTERNAL zsqrt
      EXTERNAL zexp
      EXTERNAL zlog
c     Refer to  zbesi,zbesk,zairy,zbesh
c
c     zbknu computes the k bessel function in the right half z plane.
c
c***routines called  dgamln,i1mach,d1mach,zkscl,zshch,zuchk,zabs2,zdiv,
c                    zexp,zlog,zmlt,zsqrt
c
      double precision aa, ak, alim, ascle, a1, a2, bb, bk, bry, caz,
     * cbi, cbr, cc, cchi, cchr, cki, ckr, coefi, coefr, conei, coner,
     * crscr, csclr, cshi, cshr, csi, csr, csrr, cssr, ctwor,
     * czeroi, czeror, czi, czr, dnu, dnu2, dpi, elim, etest, fc, fhs,
     * fi, fk, fks, fmui, fmur, fnu, fpi, fr, g1, g2, hpi, pi, pr, pti,
     * ptr, p1i, p1r, p2i, p2m, p2r, qi, qr, rak, rcaz, rthpi, rzi,
     * rzr, r1, s, smui, smur, spi, sti, str, s1i, s1r, s2i, s2r, tm,
     * tol, tth, t1, t2, yi, yr, zi, zr, dgamln, d1mach, zabs2, elm,
     * celmr, zdr, zdi, as, alas, helim, cyr, cyi
      integer i, iflag, inu, k, kflag, kk, kmax, kode, koded, n, nz,
     * idum, i1mach, j, ic, inub, nw
      dimension yr(n), yi(n), cc(8), cssr(3), csrr(3), bry(3), cyr(2),
     * cyi(2)
c     complex z,y,a,b,rz,smu,fu,fmu,f,flrz,cz,s1,s2,csh,cch
c     complex ck,p,q,coef,p1,p2,cbk,pt,czero,cone,ctwo,st,ez,cs,dk
c
      data kmax / 30 /
      data czeror,czeroi,coner,conei,ctwor,r1/
     1  0.0d0 , 0.0d0 , 1.0d0 , 0.0d0 , 2.0d0 , 2.0d0 /
      data dpi, rthpi, spi ,hpi, fpi, tth /
     1     3.14159265358979324d0,       1.25331413731550025d0,
     2     1.90985931710274403d0,       1.57079632679489662d0,
     3     1.89769999331517738d0,       6.66666666666666666d-01/
      data cc(1), cc(2), cc(3), cc(4), cc(5), cc(6), cc(7), cc(8)/
     1     5.77215664901532861d-01,    -4.20026350340952355d-02,
     2    -4.21977345555443367d-02,     7.21894324666309954d-03,
     3    -2.15241674114950973d-04,    -2.01348547807882387d-05,
     4     1.13302723198169588d-06,     6.11609510448141582d-09/
c
      caz = zabs2(zr,zi)
      csclr = 1.0d0/tol
      crscr = tol
      cssr(1) = csclr
      cssr(2) = 1.0d0
      cssr(3) = crscr
      csrr(1) = crscr
      csrr(2) = 1.0d0
      csrr(3) = csclr
      bry(1) = 1.0d+3*d1mach(1)/tol
      bry(2) = 1.0d0/bry(1)
      bry(3) = d1mach(2)
      nz = 0
      iflag = 0
      koded = kode
      rcaz = 1.0d0/caz
      str = zr*rcaz
      sti = -zi*rcaz
      rzr = (str+str)*rcaz
      rzi = (sti+sti)*rcaz
      inu = int(sngl(fnu+0.5d0))
      dnu = fnu - dble(float(inu))
      if (dabs(dnu).eq.0.5d0) go to 110
      dnu2 = 0.0d0
      if (dabs(dnu).gt.tol) dnu2 = dnu*dnu
      if (caz.gt.r1) go to 110
c-----------------------------------------------------------------------
c     series for cabs(z).le.r1
c-----------------------------------------------------------------------
      fc = 1.0d0
      call zlog(rzr, rzi, smur, smui, idum)
      fmur = smur*dnu
      fmui = smui*dnu
      call zshch(fmur, fmui, cshr, cshi, cchr, cchi)
      if (dnu.eq.0.0d0) go to 10
      fc = dnu*dpi
      fc = fc/dsin(fc)
      smur = cshr/dnu
      smui = cshi/dnu
   10 continue
      a2 = 1.0d0 + dnu
c-----------------------------------------------------------------------
c     gam(1-z)*gam(1+z)=pi*z/sin(pi*z), t1=1/gam(1-dnu), t2=1/gam(1+dnu)
c-----------------------------------------------------------------------
      t2 = dexp(-dgamln(a2,idum))
      t1 = 1.0d0/(t2*fc)
      if (dabs(dnu).gt.0.1d0) go to 40
c-----------------------------------------------------------------------
c     series for f0 to resolve indeterminacy for small abs(dnu)
c-----------------------------------------------------------------------
      ak = 1.0d0
      s = cc(1)
      do 20 k=2,8
        ak = ak*dnu2
        tm = cc(k)*ak
        s = s + tm
        if (dabs(tm).lt.tol) go to 30
   20 continue
   30 g1 = -s
      go to 50
   40 continue
      g1 = (t1-t2)/(dnu+dnu)
   50 continue
      g2 = (t1+t2)*0.5d0
      fr = fc*(cchr*g1+smur*g2)
      fi = fc*(cchi*g1+smui*g2)
      call zexp(fmur, fmui, str, sti)
      pr = 0.5d0*str/t2
      pi = 0.5d0*sti/t2
      call zdiv(0.5d0, 0.0d0, str, sti, ptr, pti)
      qr = ptr/t1
      qi = pti/t1
      s1r = fr
      s1i = fi
      s2r = pr
      s2i = pi
      ak = 1.0d0
      a1 = 1.0d0
      ckr = coner
      cki = conei
      bk = 1.0d0 - dnu2
      if (inu.gt.0 .or. n.gt.1) go to 80
c-----------------------------------------------------------------------
c     generate k(fnu,z), 0.0d0 .le. fnu .lt. 0.5d0 and n=1
c-----------------------------------------------------------------------
      if (caz.lt.tol) go to 70
      call zmlt(zr, zi, zr, zi, czr, czi)
      czr = 0.25d0*czr
      czi = 0.25d0*czi
      t1 = 0.25d0*caz*caz
   60 continue
      fr = (fr*ak+pr+qr)/bk
      fi = (fi*ak+pi+qi)/bk
      str = 1.0d0/(ak-dnu)
      pr = pr*str
      pi = pi*str
      str = 1.0d0/(ak+dnu)
      qr = qr*str
      qi = qi*str
      str = ckr*czr - cki*czi
      rak = 1.0d0/ak
      cki = (ckr*czi+cki*czr)*rak
      ckr = str*rak
      s1r = ckr*fr - cki*fi + s1r
      s1i = ckr*fi + cki*fr + s1i
      a1 = a1*t1*rak
      bk = bk + ak + ak + 1.0d0
      ak = ak + 1.0d0
      if (a1.gt.tol) go to 60
   70 continue
      yr(1) = s1r
      yi(1) = s1i
      if (koded.eq.1) return
      call zexp(zr, zi, str, sti)
      call zmlt(s1r, s1i, str, sti, yr(1), yi(1))
      return
c-----------------------------------------------------------------------
c     generate k(dnu,z) and k(dnu+1,z) for forward recurrence
c-----------------------------------------------------------------------
   80 continue
      if (caz.lt.tol) go to 100
      call zmlt(zr, zi, zr, zi, czr, czi)
      czr = 0.25d0*czr
      czi = 0.25d0*czi
      t1 = 0.25d0*caz*caz
   90 continue
      fr = (fr*ak+pr+qr)/bk
      fi = (fi*ak+pi+qi)/bk
      str = 1.0d0/(ak-dnu)
      pr = pr*str
      pi = pi*str
      str = 1.0d0/(ak+dnu)
      qr = qr*str
      qi = qi*str
      str = ckr*czr - cki*czi
      rak = 1.0d0/ak
      cki = (ckr*czi+cki*czr)*rak
      ckr = str*rak
      s1r = ckr*fr - cki*fi + s1r
      s1i = ckr*fi + cki*fr + s1i
      str = pr - fr*ak
      sti = pi - fi*ak
      s2r = ckr*str - cki*sti + s2r
      s2i = ckr*sti + cki*str + s2i
      a1 = a1*t1*rak
      bk = bk + ak + ak + 1.0d0
      ak = ak + 1.0d0
      if (a1.gt.tol) go to 90
  100 continue
      kflag = 2
      a1 = fnu + 1.0d0
      ak = a1*dabs(smur)
      if (ak.gt.alim) kflag = 3
      str = cssr(kflag)
      p2r = s2r*str
      p2i = s2i*str
      call zmlt(p2r, p2i, rzr, rzi, s2r, s2i)
      s1r = s1r*str
      s1i = s1i*str
      if (koded.eq.1) go to 210
      call zexp(zr, zi, fr, fi)
      call zmlt(s1r, s1i, fr, fi, s1r, s1i)
      call zmlt(s2r, s2i, fr, fi, s2r, s2i)
      go to 210
c-----------------------------------------------------------------------
c     iflag=0 means no underflow occurred
c     iflag=1 means an underflow occurred- computation proceeds with
c     koded=2 and a test for on scale values is made during forward
c     recursion
c-----------------------------------------------------------------------
  110 continue
      call zsqrt(zr, zi, str, sti)
      call zdiv(rthpi, czeroi, str, sti, coefr, coefi)
      kflag = 2
      if (koded.eq.2) go to 120
      if (zr.gt.alim) go to 290
c     blank line
      str = dexp(-zr)*cssr(kflag)
      sti = -str*dsin(zi)
      str = str*dcos(zi)
      call zmlt(coefr, coefi, str, sti, coefr, coefi)
  120 continue
      if (dabs(dnu).eq.0.5d0) go to 300
c-----------------------------------------------------------------------
c     miller algorithm for cabs(z).gt.r1
c-----------------------------------------------------------------------
      ak = dcos(dpi*dnu)
      ak = dabs(ak)
      if (ak.eq.czeror) go to 300
      fhs = dabs(0.25d0-dnu2)
      if (fhs.eq.czeror) go to 300
c-----------------------------------------------------------------------
c     compute r2=f(e). if cabs(z).ge.r2, use forward recurrence to
c     determine the backward index k. r2=f(e) is a straight line on
c     12.le.e.le.60. e is computed from 2**(-e)=b**(1-i1mach(14))=
c     tol where b is the base of the arithmetic.
c-----------------------------------------------------------------------
      t1 = dble(float(i1mach(14)-1))
      t1 = t1*d1mach(5)*3.321928094d0
      t1 = dmax1(t1,12.0d0)
      t1 = dmin1(t1,60.0d0)
      t2 = tth*t1 - 6.0d0
      if (zr.ne.0.0d0) go to 130
      t1 = hpi
      go to 140
  130 continue
      t1 = datan(zi/zr)
      t1 = dabs(t1)
  140 continue
      if (t2.gt.caz) go to 170
c-----------------------------------------------------------------------
c     forward recurrence loop when cabs(z).ge.r2
c-----------------------------------------------------------------------
      etest = ak/(dpi*caz*tol)
      fk = coner
      if (etest.lt.coner) go to 180
      fks = ctwor
      ckr = caz + caz + ctwor
      p1r = czeror
      p2r = coner
      do 150 i=1,kmax
        ak = fhs/fks
        cbr = ckr/(fk+coner)
        ptr = p2r
        p2r = cbr*p2r - p1r*ak
        p1r = ptr
        ckr = ckr + ctwor
        fks = fks + fk + fk + ctwor
        fhs = fhs + fk + fk
        fk = fk + coner
        str = dabs(p2r)*fk
        if (etest.lt.str) go to 160
  150 continue
      go to 310
  160 continue
      fk = fk + spi*t1*dsqrt(t2/caz)
      fhs = dabs(0.25d0-dnu2)
      go to 180
  170 continue
c-----------------------------------------------------------------------
c     compute backward index k for cabs(z).lt.r2
c-----------------------------------------------------------------------
      a2 = dsqrt(caz)
      ak = fpi*ak/(tol*dsqrt(a2))
      aa = 3.0d0*t1/(1.0d0+caz)
      bb = 14.7d0*t1/(28.0d0+caz)
      ak = (dlog(ak)+caz*dcos(aa)/(1.0d0+0.008d0*caz))/dcos(bb)
      fk = 0.12125d0*ak*ak/caz + 1.5d0
  180 continue
c-----------------------------------------------------------------------
c     backward recurrence loop for miller algorithm
c-----------------------------------------------------------------------
      k = int(sngl(fk))
      fk = dble(float(k))
      fks = fk*fk
      p1r = czeror
      p1i = czeroi
      p2r = tol
      p2i = czeroi
      csr = p2r
      csi = p2i
      do 190 i=1,k
        a1 = fks - fk
        ak = (fks+fk)/(a1+fhs)
        rak = 2.0d0/(fk+coner)
        cbr = (fk+zr)*rak
        cbi = zi*rak
        ptr = p2r
        pti = p2i
        p2r = (ptr*cbr-pti*cbi-p1r)*ak
        p2i = (pti*cbr+ptr*cbi-p1i)*ak
        p1r = ptr
        p1i = pti
        csr = csr + p2r
        csi = csi + p2i
        fks = a1 - fk + coner
        fk = fk - coner
  190 continue
c-----------------------------------------------------------------------
c     compute (p2/cs)=(p2/cabs(cs))*(conjg(cs)/cabs(cs)) for better
c     scaling
c-----------------------------------------------------------------------
      tm = zabs2(csr,csi)
      ptr = 1.0d0/tm
      s1r = p2r*ptr
      s1i = p2i*ptr
      csr = csr*ptr
      csi = -csi*ptr
      call zmlt(coefr, coefi, s1r, s1i, str, sti)
      call zmlt(str, sti, csr, csi, s1r, s1i)
      if (inu.gt.0 .or. n.gt.1) go to 200
      zdr = zr
      zdi = zi
      if(iflag.eq.1) go to 270
      go to 240
  200 continue
c-----------------------------------------------------------------------
c     compute p1/p2=(p1/cabs(p2)*conjg(p2)/cabs(p2) for scaling
c-----------------------------------------------------------------------
      tm = zabs2(p2r,p2i)
      ptr = 1.0d0/tm
      p1r = p1r*ptr
      p1i = p1i*ptr
      p2r = p2r*ptr
      p2i = -p2i*ptr
      call zmlt(p1r, p1i, p2r, p2i, ptr, pti)
      str = dnu + 0.5d0 - ptr
      sti = -pti
      call zdiv(str, sti, zr, zi, str, sti)
      str = str + 1.0d0
      call zmlt(str, sti, s1r, s1i, s2r, s2i)
c-----------------------------------------------------------------------
c     forward recursion on the three term recursion with relation with
c     scaling near exponent extremes on kflag=1 or kflag=3
c-----------------------------------------------------------------------
  210 continue
      str = dnu + 1.0d0
      ckr = str*rzr
      cki = str*rzi
      if (n.eq.1) inu = inu - 1
      if (inu.gt.0) go to 220
      if (n.gt.1) go to 215
      s1r = s2r
      s1i = s2i
  215 continue
      zdr = zr
      zdi = zi
      if(iflag.eq.1) go to 270
      go to 240
  220 continue
      inub = 1
      if(iflag.eq.1) go to 261
  225 continue
      p1r = csrr(kflag)
      ascle = bry(kflag)
      do 230 i=inub,inu
        str = s2r
        sti = s2i
        s2r = ckr*str - cki*sti + s1r
        s2i = ckr*sti + cki*str + s1i
        s1r = str
        s1i = sti
        ckr = ckr + rzr
        cki = cki + rzi
        if (kflag.ge.3) go to 230
        p2r = s2r*p1r
        p2i = s2i*p1r
        str = dabs(p2r)
        sti = dabs(p2i)
        p2m = dmax1(str,sti)
        if (p2m.le.ascle) go to 230
        kflag = kflag + 1
        ascle = bry(kflag)
        s1r = s1r*p1r
        s1i = s1i*p1r
        s2r = p2r
        s2i = p2i
        str = cssr(kflag)
        s1r = s1r*str
        s1i = s1i*str
        s2r = s2r*str
        s2i = s2i*str
        p1r = csrr(kflag)
  230 continue
      if (n.ne.1) go to 240
      s1r = s2r
      s1i = s2i
  240 continue
      str = csrr(kflag)
      yr(1) = s1r*str
      yi(1) = s1i*str
      if (n.eq.1) return
      yr(2) = s2r*str
      yi(2) = s2i*str
      if (n.eq.2) return
      kk = 2
  250 continue
      kk = kk + 1
      if (kk.gt.n) return
      p1r = csrr(kflag)
      ascle = bry(kflag)
      do 260 i=kk,n
        p2r = s2r
        p2i = s2i
        s2r = ckr*p2r - cki*p2i + s1r
        s2i = cki*p2r + ckr*p2i + s1i
        s1r = p2r
        s1i = p2i
        ckr = ckr + rzr
        cki = cki + rzi
        p2r = s2r*p1r
        p2i = s2i*p1r
        yr(i) = p2r
        yi(i) = p2i
        if (kflag.ge.3) go to 260
        str = dabs(p2r)
        sti = dabs(p2i)
        p2m = dmax1(str,sti)
        if (p2m.le.ascle) go to 260
        kflag = kflag + 1
        ascle = bry(kflag)
        s1r = s1r*p1r
        s1i = s1i*p1r
        s2r = p2r
        s2i = p2i
        str = cssr(kflag)
        s1r = s1r*str
        s1i = s1i*str
        s2r = s2r*str
        s2i = s2i*str
        p1r = csrr(kflag)
  260 continue
      return
c-----------------------------------------------------------------------
c     iflag=1 cases, forward recurrence on scaled values on underflow
c-----------------------------------------------------------------------
  261 continue
      helim = 0.5d0*elim
      elm = dexp(-elim)
      celmr = elm
      ascle = bry(1)
      zdr = zr
      zdi = zi
      ic = -1
      j = 2
      do 262 i=1,inu
        str = s2r
        sti = s2i
        s2r = str*ckr-sti*cki+s1r
        s2i = sti*ckr+str*cki+s1i
        s1r = str
        s1i = sti
        ckr = ckr+rzr
        cki = cki+rzi
        as = zabs2(s2r,s2i)
        alas = dlog(as)
        p2r = -zdr+alas
        if(p2r.lt.(-elim)) go to 263
        call zlog(s2r,s2i,str,sti,idum)
        p2r = -zdr+str
        p2i = -zdi+sti
        p2m = dexp(p2r)/tol
        p1r = p2m*dcos(p2i)
        p1i = p2m*dsin(p2i)
        call zuchk(p1r,p1i,nw,ascle,tol)
        if(nw.ne.0) go to 263
        j = 3 - j
        cyr(j) = p1r
        cyi(j) = p1i
        if(ic.eq.(i-1)) go to 264
        ic = i
        go to 262
  263   continue
        if(alas.lt.helim) go to 262
        zdr = zdr-elim
        s1r = s1r*celmr
        s1i = s1i*celmr
        s2r = s2r*celmr
        s2i = s2i*celmr
  262 continue
      if(n.ne.1) go to 270
      s1r = s2r
      s1i = s2i
      go to 270
  264 continue
      kflag = 1
      inub = i+1
      s2r = cyr(j)
      s2i = cyi(j)
      j = 3 - j
      s1r = cyr(j)
      s1i = cyi(j)
      if(inub.le.inu) go to 225
      if(n.ne.1) go to 240
      s1r = s2r
      s1i = s2i
      go to 240
  270 continue
      yr(1) = s1r
      yi(1) = s1i
      if(n.eq.1) go to 280
      yr(2) = s2r
      yi(2) = s2i
  280 continue
      ascle = bry(1)
      call zkscl(zdr,zdi,fnu,n,yr,yi,nz,rzr,rzi,ascle,tol,elim)
      inu = n - nz
      if (inu.le.0) return
      kk = nz + 1
      s1r = yr(kk)
      s1i = yi(kk)
      yr(kk) = s1r*csrr(1)
      yi(kk) = s1i*csrr(1)
      if (inu.eq.1) return
      kk = nz + 2
      s2r = yr(kk)
      s2i = yi(kk)
      yr(kk) = s2r*csrr(1)
      yi(kk) = s2i*csrr(1)
      if (inu.eq.2) return
      t2 = fnu + dble(float(kk-1))
      ckr = t2*rzr
      cki = t2*rzi
      kflag = 1
      go to 250
  290 continue
c-----------------------------------------------------------------------
c     scale by dexp(z), iflag = 1 cases
c-----------------------------------------------------------------------
      koded = 2
      iflag = 1
      kflag = 2
      go to 120
c-----------------------------------------------------------------------
c     fnu=half odd integer case, dnu=-0.5
c-----------------------------------------------------------------------
  300 continue
      s1r = coefr
      s1i = coefi
      s2r = coefr
      s2i = coefi
      go to 210
c
c
  310 continue
      nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbuni(zr, zi, fnu, kode, n, yr, yi, nz, nui, nlast,
     * fnul, tol, elim, alim)
c     Refer to  zbesi,zbesk
c
c     zbuni computes the i bessel function for large cabs(z).gt.
c     fnul and fnu+n-1.lt.fnul. the order is increased from
c     fnu+n-1 greater than fnul by adding nui and computing
c     according to the uniform asymptotic expansion for i(fnu,z)
c     on iform=1 and the expansion for j(fnu,z) on iform=2
c
c***routines called  zuni1,zuni2,zabs2,d1mach
c
c     complex cscl,cscr,cy,rz,st,s1,s2,y,z
      double precision alim, ax, ay, csclr, cscrr, cyi, cyr, dfnu,
     * elim, fnu, fnui, fnul, gnu, raz, rzi, rzr, sti, str, s1i, s1r,
     * s2i, s2r, tol, yi, yr, zi, zr, zabs2, ascle, bry, c1r, c1i, c1m,
     * d1mach
      integer i, iflag, iform, k, kode, n, nl, nlast, nui, nw, nz
      dimension yr(n), yi(n), cyr(2), cyi(2), bry(3)
      nz = 0
      ax = dabs(zr)*1.7321d0
      ay = dabs(zi)
      iform = 1
      if (ay.gt.ax) iform = 2
      if (nui.eq.0) go to 60
      fnui = dble(float(nui))
      dfnu = fnu + dble(float(n-1))
      gnu = dfnu + fnui
      if (iform.eq.2) go to 10
c-----------------------------------------------------------------------
c     asymptotic expansion for i(fnu,z) for large fnu applied in
c     -pi/3.le.arg(z).le.pi/3
c-----------------------------------------------------------------------
      call zuni1(zr, zi, gnu, kode, 2, cyr, cyi, nw, nlast, fnul, tol,
     * elim, alim)
      go to 20
   10 continue
c-----------------------------------------------------------------------
c     asymptotic expansion for j(fnu,z*exp(m*hpi)) for large fnu
c     applied in pi/3.lt.abs(arg(z)).le.pi/2 where m=+i or -i
c     and hpi=pi/2
c-----------------------------------------------------------------------
      call zuni2(zr, zi, gnu, kode, 2, cyr, cyi, nw, nlast, fnul, tol,
     * elim, alim)
   20 continue
      if (nw.lt.0) go to 50
      if (nw.ne.0) go to 90
      str = zabs2(cyr(1),cyi(1))
c----------------------------------------------------------------------
c     scale backward recurrence, bry(3) is defined but never used
c----------------------------------------------------------------------
      bry(1)=1.0d+3*d1mach(1)/tol
      bry(2) = 1.0d0/bry(1)
      bry(3) = bry(2)
      iflag = 2
      ascle = bry(2)
      csclr = 1.0d0
      if (str.gt.bry(1)) go to 21
      iflag = 1
      ascle = bry(1)
      csclr = 1.0d0/tol
      go to 25
   21 continue
      if (str.lt.bry(2)) go to 25
      iflag = 3
      ascle=bry(3)
      csclr = tol
   25 continue
      cscrr = 1.0d0/csclr
      s1r = cyr(2)*csclr
      s1i = cyi(2)*csclr
      s2r = cyr(1)*csclr
      s2i = cyi(1)*csclr
      raz = 1.0d0/zabs2(zr,zi)
      str = zr*raz
      sti = -zi*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      do 30 i=1,nui
        str = s2r
        sti = s2i
        s2r = (dfnu+fnui)*(rzr*str-rzi*sti) + s1r
        s2i = (dfnu+fnui)*(rzr*sti+rzi*str) + s1i
        s1r = str
        s1i = sti
        fnui = fnui - 1.0d0
        if (iflag.ge.3) go to 30
        str = s2r*cscrr
        sti = s2i*cscrr
        c1r = dabs(str)
        c1i = dabs(sti)
        c1m = dmax1(c1r,c1i)
        if (c1m.le.ascle) go to 30
        iflag = iflag+1
        ascle = bry(iflag)
        s1r = s1r*cscrr
        s1i = s1i*cscrr
        s2r = str
        s2i = sti
        csclr = csclr*tol
        cscrr = 1.0d0/csclr
        s1r = s1r*csclr
        s1i = s1i*csclr
        s2r = s2r*csclr
        s2i = s2i*csclr
   30 continue
      yr(n) = s2r*cscrr
      yi(n) = s2i*cscrr
      if (n.eq.1) return
      nl = n - 1
      fnui = dble(float(nl))
      k = nl
      do 40 i=1,nl
        str = s2r
        sti = s2i
        s2r = (fnu+fnui)*(rzr*str-rzi*sti) + s1r
        s2i = (fnu+fnui)*(rzr*sti+rzi*str) + s1i
        s1r = str
        s1i = sti
        str = s2r*cscrr
        sti = s2i*cscrr
        yr(k) = str
        yi(k) = sti
        fnui = fnui - 1.0d0
        k = k - 1
        if (iflag.ge.3) go to 40
        c1r = dabs(str)
        c1i = dabs(sti)
        c1m = dmax1(c1r,c1i)
        if (c1m.le.ascle) go to 40
        iflag = iflag+1
        ascle = bry(iflag)
        s1r = s1r*cscrr
        s1i = s1i*cscrr
        s2r = str
        s2i = sti
        csclr = csclr*tol
        cscrr = 1.0d0/csclr
        s1r = s1r*csclr
        s1i = s1i*csclr
        s2r = s2r*csclr
        s2i = s2i*csclr
   40 continue
      return
   50 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
   60 continue
      if (iform.eq.2) go to 70
c-----------------------------------------------------------------------
c     asymptotic expansion for i(fnu,z) for large fnu applied in
c     -pi/3.le.arg(z).le.pi/3
c-----------------------------------------------------------------------
      call zuni1(zr, zi, fnu, kode, n, yr, yi, nw, nlast, fnul, tol,
     * elim, alim)
      go to 80
   70 continue
c-----------------------------------------------------------------------
c     asymptotic expansion for j(fnu,z*exp(m*hpi)) for large fnu
c     applied in pi/3.lt.abs(arg(z)).le.pi/2 where m=+i or -i
c     and hpi=pi/2
c-----------------------------------------------------------------------
      call zuni2(zr, zi, fnu, kode, n, yr, yi, nw, nlast, fnul, tol,
     * elim, alim)
   80 continue
      if (nw.lt.0) go to 50
      nz = nw
      return
   90 continue
      nlast = n
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbunk(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim,
     * alim)
c     Refer to  zbesk,zbesh
c
c     zbunk computes the k bessel function for fnu.gt.fnul.
c     according to the uniform asymptotic expansion for k(fnu,z)
c     in zunk1 and the expansion for h(2,fnu,z) in zunk2
c
c***routines called  zunk1,zunk2
c
c     complex y,z
      double precision alim, ax, ay, elim, fnu, tol, yi, yr, zi, zr
      integer kode, mr, n, nz
      dimension yr(n), yi(n)
      nz = 0
      ax = dabs(zr)*1.7321d0
      ay = dabs(zi)
      if (ay.gt.ax) go to 10
c-----------------------------------------------------------------------
c     asymptotic expansion for k(fnu,z) for large fnu applied in
c     -pi/3.le.arg(z).le.pi/3
c-----------------------------------------------------------------------
      call zunk1(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim, alim)
      go to 20
   10 continue
c-----------------------------------------------------------------------
c     asymptotic expansion for h(2,fnu,z*exp(m*hpi)) for large fnu
c     applied in pi/3.lt.abs(arg(z)).le.pi/2 where m=+i or -i
c     and hpi=pi/2
c-----------------------------------------------------------------------
      call zunk2(zr, zi, fnu, kode, mr, n, yr, yi, nz, tol, elim, alim)
   20 continue
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zmlri(zr, zi, fnu, kode, n, yr, yi, nz, tol)
c     geuz for g77
      EXTERNAL zexp
      EXTERNAL zlog
c     Refer to  zbesi,zbesk
c
c     zmlri computes the i bessel function for re(z).ge.0.0 by the
c     miller algorithm normalized by a neumann series.
c
c***routines called  dgamln,d1mach,zabs2,zexp,zlog,zmlt
c
c     complex ck,cnorm,cone,ctwo,czero,pt,p1,p2,rz,sum,y,z
      double precision ack, ak, ap, at, az, bk, cki, ckr, cnormi,
     * cnormr, conei, coner, fkap, fkk, flam, fnf, fnu, pti, ptr, p1i,
     * p1r, p2i, p2r, raz, rho, rho2, rzi, rzr, scle, sti, str, sumi,
     * sumr, tfnf, tol, tst, yi, yr, zeroi, zeror, zi, zr, dgamln,
     * d1mach, zabs2
      integer i, iaz, idum, ifnu, inu, itime, k, kk, km, kode, m, n, nz
      dimension yr(n), yi(n)
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
      scle = d1mach(1)/tol
      nz=0
      az = zabs2(zr,zi)
      iaz = int(sngl(az))
      ifnu = int(sngl(fnu))
      inu = ifnu + n - 1
      at = dble(float(iaz)) + 1.0d0
      raz = 1.0d0/az
      str = zr*raz
      sti = -zi*raz
      ckr = str*at*raz
      cki = sti*at*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      p1r = zeror
      p1i = zeroi
      p2r = coner
      p2i = conei
      ack = (at+1.0d0)*raz
      rho = ack + dsqrt(ack*ack-1.0d0)
      rho2 = rho*rho
      tst = (rho2+rho2)/((rho2-1.0d0)*(rho-1.0d0))
      tst = tst/tol
c-----------------------------------------------------------------------
c     compute relative truncation error index for series
c-----------------------------------------------------------------------
      ak = at
      do 10 i=1,80
        ptr = p2r
        pti = p2i
        p2r = p1r - (ckr*ptr-cki*pti)
        p2i = p1i - (cki*ptr+ckr*pti)
        p1r = ptr
        p1i = pti
        ckr = ckr + rzr
        cki = cki + rzi
        ap = zabs2(p2r,p2i)
        if (ap.gt.tst*ak*ak) go to 20
        ak = ak + 1.0d0
   10 continue
      go to 110
   20 continue
      i = i + 1
      k = 0
      if (inu.lt.iaz) go to 40
c-----------------------------------------------------------------------
c     compute relative truncation error for ratios
c-----------------------------------------------------------------------
      p1r = zeror
      p1i = zeroi
      p2r = coner
      p2i = conei
      at = dble(float(inu)) + 1.0d0
      str = zr*raz
      sti = -zi*raz
      ckr = str*at*raz
      cki = sti*at*raz
      ack = at*raz
      tst = dsqrt(ack/tol)
      itime = 1
      do 30 k=1,80
        ptr = p2r
        pti = p2i
        p2r = p1r - (ckr*ptr-cki*pti)
        p2i = p1i - (ckr*pti+cki*ptr)
        p1r = ptr
        p1i = pti
        ckr = ckr + rzr
        cki = cki + rzi
        ap = zabs2(p2r,p2i)
        if (ap.lt.tst) go to 30
        if (itime.eq.2) go to 40
        ack = zabs2(ckr,cki)
        flam = ack + dsqrt(ack*ack-1.0d0)
        fkap = ap/zabs2(p1r,p1i)
        rho = dmin1(flam,fkap)
        tst = tst*dsqrt(rho/(rho*rho-1.0d0))
        itime = 2
   30 continue
      go to 110
   40 continue
c-----------------------------------------------------------------------
c     backward recurrence and sum normalizing relation
c-----------------------------------------------------------------------
      k = k + 1
      kk = max0(i+iaz,k+inu)
      fkk = dble(float(kk))
      p1r = zeror
      p1i = zeroi
c-----------------------------------------------------------------------
c     scale p2 and sum by scle
c-----------------------------------------------------------------------
      p2r = scle
      p2i = zeroi
      fnf = fnu - dble(float(ifnu))
      tfnf = fnf + fnf
      bk = dgamln(fkk+tfnf+1.0d0,idum) - dgamln(fkk+1.0d0,idum) -
     * dgamln(tfnf+1.0d0,idum)
      bk = dexp(bk)
      sumr = zeror
      sumi = zeroi
      km = kk - inu
      do 50 i=1,km
        ptr = p2r
        pti = p2i
        p2r = p1r + (fkk+fnf)*(rzr*ptr-rzi*pti)
        p2i = p1i + (fkk+fnf)*(rzi*ptr+rzr*pti)
        p1r = ptr
        p1i = pti
        ak = 1.0d0 - tfnf/(fkk+tfnf)
        ack = bk*ak
        sumr = sumr + (ack+bk)*p1r
        sumi = sumi + (ack+bk)*p1i
        bk = ack
        fkk = fkk - 1.0d0
   50 continue
      yr(n) = p2r
      yi(n) = p2i
      if (n.eq.1) go to 70
      do 60 i=2,n
        ptr = p2r
        pti = p2i
        p2r = p1r + (fkk+fnf)*(rzr*ptr-rzi*pti)
        p2i = p1i + (fkk+fnf)*(rzi*ptr+rzr*pti)
        p1r = ptr
        p1i = pti
        ak = 1.0d0 - tfnf/(fkk+tfnf)
        ack = bk*ak
        sumr = sumr + (ack+bk)*p1r
        sumi = sumi + (ack+bk)*p1i
        bk = ack
        fkk = fkk - 1.0d0
        m = n - i + 1
        yr(m) = p2r
        yi(m) = p2i
   60 continue
   70 continue
      if (ifnu.le.0) go to 90
      do 80 i=1,ifnu
        ptr = p2r
        pti = p2i
        p2r = p1r + (fkk+fnf)*(rzr*ptr-rzi*pti)
        p2i = p1i + (fkk+fnf)*(rzr*pti+rzi*ptr)
        p1r = ptr
        p1i = pti
        ak = 1.0d0 - tfnf/(fkk+tfnf)
        ack = bk*ak
        sumr = sumr + (ack+bk)*p1r
        sumi = sumi + (ack+bk)*p1i
        bk = ack
        fkk = fkk - 1.0d0
   80 continue
   90 continue
      ptr = zr
      pti = zi
      if (kode.eq.2) ptr = zeror
      call zlog(rzr, rzi, str, sti, idum)
      p1r = -fnf*str + ptr
      p1i = -fnf*sti + pti
      ap = dgamln(1.0d0+fnf,idum)
      ptr = p1r - ap
      pti = p1i
c-----------------------------------------------------------------------
c     the division cexp(pt)/(sum+p2) is altered to avoid overflow
c     in the denominator by squaring large quantities
c-----------------------------------------------------------------------
      p2r = p2r + sumr
      p2i = p2i + sumi
      ap = zabs2(p2r,p2i)
      p1r = 1.0d0/ap
      call zexp(ptr, pti, str, sti)
      ckr = str*p1r
      cki = sti*p1r
      ptr = p2r*p1r
      pti = -p2i*p1r
      call zmlt(ckr, cki, ptr, pti, cnormr, cnormi)
      do 100 i=1,n
        str = yr(i)*cnormr - yi(i)*cnormi
        yi(i) = yr(i)*cnormi + yi(i)*cnormr
        yr(i) = str
  100 continue
      return
  110 continue
      nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zseri(zr, zi, fnu, kode, n, yr, yi, nz, tol, elim,
     * alim)
c     geuz for g77
      EXTERNAL zlog
c     Refer to  zbesi,zbesk
c
c     zseri computes the i bessel function for real(z).ge.0.0 by
c     means of the power series for large cabs(z) in the
c     region cabs(z).le.2*sqrt(fnu+1). nz=0 is a normal return.
c     nz.gt.0 means that the last nz components were set to zero
c     due to underflow. nz.lt.0 means underflow occurred, but the
c     condition cabs(z).le.2*sqrt(fnu+1) was violated and the
c     computation must be completed in another routine with n=n-abs(nz).
c
c***routines called  dgamln,d1mach,zuchk,zabs2,zdiv,zlog,zmlt
c
c     complex ak1,ck,coef,cone,crsc,cscl,cz,czero,hz,rz,s1,s2,y,z
      double precision aa, acz, ak, ak1i, ak1r, alim, arm, ascle, atol,
     * az, cki, ckr, coefi, coefr, conei, coner, crscr, czi, czr, dfnu,
     * elim, fnu, fnup, hzi, hzr, raz, rs, rtr1, rzi, rzr, s, ss, sti,
     * str, s1i, s1r, s2i, s2r, tol, yi, yr, wi, wr, zeroi, zeror, zi,
     * zr, dgamln, d1mach, zabs2
      integer i, ib, idum, iflag, il, k, kode, l, m, n, nn, nz, nw
      dimension yr(n), yi(n), wr(2), wi(2)
      data zeror,zeroi,coner,conei / 0.0d0, 0.0d0, 1.0d0, 0.0d0 /
c
      nz = 0
      az = zabs2(zr,zi)
      if (az.eq.0.0d0) go to 160
      arm = 1.0d+3*d1mach(1)
      rtr1 = dsqrt(arm)
      crscr = 1.0d0
      iflag = 0
      if (az.lt.arm) go to 150
      hzr = 0.5d0*zr
      hzi = 0.5d0*zi
      czr = zeror
      czi = zeroi
      if (az.le.rtr1) go to 10
      call zmlt(hzr, hzi, hzr, hzi, czr, czi)
   10 continue
      acz = zabs2(czr,czi)
      nn = n
      call zlog(hzr, hzi, ckr, cki, idum)
   20 continue
      dfnu = fnu + dble(float(nn-1))
      fnup = dfnu + 1.0d0
c-----------------------------------------------------------------------
c     underflow test
c-----------------------------------------------------------------------
      ak1r = ckr*dfnu
      ak1i = cki*dfnu
      ak = dgamln(fnup,idum)
      ak1r = ak1r - ak
      if (kode.eq.2) ak1r = ak1r - zr
      if (ak1r.gt.(-elim)) go to 40
   30 continue
      nz = nz + 1
      yr(nn) = zeror
      yi(nn) = zeroi
      if (acz.gt.dfnu) go to 190
      nn = nn - 1
      if (nn.eq.0) return
      go to 20
   40 continue
      if (ak1r.gt.(-alim)) go to 50
      iflag = 1
      ss = 1.0d0/tol
      crscr = tol
      ascle = arm*ss
   50 continue
      aa = dexp(ak1r)
      if (iflag.eq.1) aa = aa*ss
      coefr = aa*dcos(ak1i)
      coefi = aa*dsin(ak1i)
      atol = tol*acz/fnup
      il = min0(2,nn)
      do 90 i=1,il
        dfnu = fnu + dble(float(nn-i))
        fnup = dfnu + 1.0d0
        s1r = coner
        s1i = conei
        if (acz.lt.tol*fnup) go to 70
        ak1r = coner
        ak1i = conei
        ak = fnup + 2.0d0
        s = fnup
        aa = 2.0d0
   60   continue
        rs = 1.0d0/s
        str = ak1r*czr - ak1i*czi
        sti = ak1r*czi + ak1i*czr
        ak1r = str*rs
        ak1i = sti*rs
        s1r = s1r + ak1r
        s1i = s1i + ak1i
        s = s + ak
        ak = ak + 2.0d0
        aa = aa*acz*rs
        if (aa.gt.atol) go to 60
   70   continue
        s2r = s1r*coefr - s1i*coefi
        s2i = s1r*coefi + s1i*coefr
        wr(i) = s2r
        wi(i) = s2i
        if (iflag.eq.0) go to 80
        call zuchk(s2r, s2i, nw, ascle, tol)
        if (nw.ne.0) go to 30
   80   continue
        m = nn - i + 1
        yr(m) = s2r*crscr
        yi(m) = s2i*crscr
        if (i.eq.il) go to 90
        call zdiv(coefr, coefi, hzr, hzi, str, sti)
        coefr = str*dfnu
        coefi = sti*dfnu
   90 continue
      if (nn.le.2) return
      k = nn - 2
      ak = dble(float(k))
      raz = 1.0d0/az
      str = zr*raz
      sti = -zi*raz
      rzr = (str+str)*raz
      rzi = (sti+sti)*raz
      if (iflag.eq.1) go to 120
      ib = 3
  100 continue
      do 110 i=ib,nn
        yr(k) = (ak+fnu)*(rzr*yr(k+1)-rzi*yi(k+1)) + yr(k+2)
        yi(k) = (ak+fnu)*(rzr*yi(k+1)+rzi*yr(k+1)) + yi(k+2)
        ak = ak - 1.0d0
        k = k - 1
  110 continue
      return
c-----------------------------------------------------------------------
c     recur backward with scaled values
c-----------------------------------------------------------------------
  120 continue
c-----------------------------------------------------------------------
c     exp(-alim)=exp(-elim)/tol=approx. one precision above the
c     underflow limit = ascle = d1mach(1)*ss*1.0d+3
c-----------------------------------------------------------------------
      s1r = wr(1)
      s1i = wi(1)
      s2r = wr(2)
      s2i = wi(2)
      do 130 l=3,nn
        ckr = s2r
        cki = s2i
        s2r = s1r + (ak+fnu)*(rzr*ckr-rzi*cki)
        s2i = s1i + (ak+fnu)*(rzr*cki+rzi*ckr)
        s1r = ckr
        s1i = cki
        ckr = s2r*crscr
        cki = s2i*crscr
        yr(k) = ckr
        yi(k) = cki
        ak = ak - 1.0d0
        k = k - 1
        if (zabs2(ckr,cki).gt.ascle) go to 140
  130 continue
      return
  140 continue
      ib = l + 1
      if (ib.gt.nn) return
      go to 100
  150 continue
      nz = n
      if (fnu.eq.0.0d0) nz = nz - 1
  160 continue
      yr(1) = zeror
      yi(1) = zeroi
      if (fnu.ne.0.0d0) go to 170
      yr(1) = coner
      yi(1) = conei
  170 continue
      if (n.eq.1) return
      do 180 i=2,n
        yr(i) = zeror
        yi(i) = zeroi
  180 continue
      return
c-----------------------------------------------------------------------
c     return with nz.lt.0 if cabs(z*z/4).gt.fnu+n-nz-1 complete
c     the calculation in cbinu with n=n-iabs(nz)
c-----------------------------------------------------------------------
  190 continue
      nz = -nz
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zwrsk(zrr, zri, fnu, kode, n, yr, yi, nz, cwr, cwi,
     * tol, elim, alim)
c     refer to  zbesi,zbesk
c
c     zwrsk computes the i bessel function for re(z).ge.0.0 by
c     normalizing the i function ratios from zrati by the wronskian
c
c***routines called  d1mach,zbknu,zrati,zabs2
c     complex cinu,cscl,ct,cw,c1,c2,rct,st,y,zr
      double precision act, acw, alim, ascle, cinui, cinur, csclr, cti,
     * ctr, cwi, cwr, c1i, c1r, c2i, c2r, elim, fnu, pti, ptr, ract,
     * sti, str, tol, yi, yr, zri, zrr, zabs2, d1mach
      integer i, kode, n, nw, nz
      dimension yr(n), yi(n), cwr(2), cwi(2)
c-----------------------------------------------------------------------
c     i(fnu+i-1,z) by backward recurrence for ratios
c     y(i)=i(fnu+i,z)/i(fnu+i-1,z) from crati normalized by the
c     wronskian with k(fnu,z) and k(fnu+1,z) from cbknu.
c-----------------------------------------------------------------------
      nz = 0
      call zbknu(zrr, zri, fnu, kode, 2, cwr, cwi, nw, tol, elim, alim)
      if (nw.ne.0) go to 50
      call zrati(zrr, zri, fnu, n, yr, yi, tol)
c-----------------------------------------------------------------------
c     recur forward on i(fnu+1,z) = r(fnu,z)*i(fnu,z),
c     r(fnu+j-1,z)=y(j),  j=1,...,n
c-----------------------------------------------------------------------
      cinur = 1.0d0
      cinui = 0.0d0
      if (kode.eq.1) go to 10
      cinur = dcos(zri)
      cinui = dsin(zri)
   10 continue
c-----------------------------------------------------------------------
c     on low exponent machines the k functions can be close to both
c     the under and overflow limits and the normalization must be
c     scaled to prevent over or underflow. cuoik has determined that
c     the result is on scale.
c-----------------------------------------------------------------------
      acw = zabs2(cwr(2),cwi(2))
      ascle = 1.0d+3*d1mach(1)/tol
      csclr = 1.0d0
      if (acw.gt.ascle) go to 20
      csclr = 1.0d0/tol
      go to 30
   20 continue
      ascle = 1.0d0/ascle
      if (acw.lt.ascle) go to 30
      csclr = tol
   30 continue
      c1r = cwr(1)*csclr
      c1i = cwi(1)*csclr
      c2r = cwr(2)*csclr
      c2i = cwi(2)*csclr
      str = yr(1)
      sti = yi(1)
c-----------------------------------------------------------------------
c     cinu=cinu*(conjg(ct)/cabs(ct))*(1.0d0/cabs(ct) prevents
c     under- or overflow prematurely by squaring cabs(ct)
c-----------------------------------------------------------------------
      ptr = str*c1r - sti*c1i
      pti = str*c1i + sti*c1r
      ptr = ptr + c2r
      pti = pti + c2i
      ctr = zrr*ptr - zri*pti
      cti = zrr*pti + zri*ptr
      act = zabs2(ctr,cti)
      ract = 1.0d0/act
      ctr = ctr*ract
      cti = -cti*ract
      ptr = cinur*ract
      pti = cinui*ract
      cinur = ptr*ctr - pti*cti
      cinui = ptr*cti + pti*ctr
      yr(1) = cinur*csclr
      yi(1) = cinui*csclr
      if (n.eq.1) return
      do 40 i=2,n
        ptr = str*cinur - sti*cinui
        cinui = str*cinui + sti*cinur
        cinur = ptr
        str = yr(i)
        sti = yi(i)
        yr(i) = cinur*csclr
        yi(i) = cinui*csclr
   40 continue
      return
   50 continue
      nz = -1
      if(nw.eq.(-2)) nz=-2
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------









      subroutine zairy(zr, zi, id, kode, air, aii, nz, ierr)
c     geuz for g77
      EXTERNAL zsqrt
      EXTERNAL zexp
c     Airy function,bessel functions of order one third
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, zairy computes the complex airy function ai(z) or
c         its derivative dai(z)/dz on id=0 or id=1 respectively. on
c         kode=2, a scaling option cexp(zta)*ai(z) or cexp(zta)*
c         dai(z)/dz is provided to remove the exponential decay in
c         -pi/3.lt.arg(z).lt.pi/3 and the exponential growth in
c         pi/3.lt.abs(arg(z)).lt.pi where zta=(2/3)*z*csqrt(z).
c
c         while the airy functions ai(z) and dai(z)/dz are analytic in
c         the whole z plane, the corresponding scaled functions defined
c         for kode=2 have a cut along the negative real axis.
c
c         input      zr,zi are double precision
c           zr,zi  - z=cmplx(zr,zi)
c           id     - order of derivative, id=0 or id=1
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             ai=ai(z)                on id=0 or
c                             ai=dai(z)/dz            on id=1
c                        = 2  returns
c                             ai=cexp(zta)*ai(z)       on id=0 or
c                             ai=cexp(zta)*dai(z)/dz   on id=1 where
c                             zta=(2/3)*z*csqrt(z)
c
c         output     air,aii are double precision
c           air,aii- complex answer depending on the choices for id and
c                    kode
c           nz     - underflow indicator
c                    nz= 0   , normal return
c                    nz= 1   , ai=cmplx(0.0d0,0.0d0) due to underflow in
c                              -pi/3.lt.arg(z).lt.pi/3 on kode=1
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, real(zta)
c                            too large on kode=1
c                    ierr=3, cabs(z) large      - computation completed
c                            losses of signifcance by argument reduction
c                            produce less than half of machine accuracy
c                    ierr=4, cabs(z) too large  - no computation
c                            complete loss of accuracy by argument
c                            reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c
c         ai and dai are computed for cabs(z).gt.1.0 from the k bessel
c         functions by
c
c            ai(z)=c*sqrt(z)*k(1/3,zta) , dai(z)=-c*z*k(2/3,zta)
c                           c=1.0/(pi*sqrt(3.0))
c                            zta=(2/3)*z**(3/2)
c
c         with the power series for cabs(z).le.1.0.
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z is large, losses
c         of significance by argument reduction occur. consequently, if
c         the magnitude of zeta=(2/3)*z**1.5 exceeds u1=sqrt(0.5/ur),
c         then losses exceeding half precision are likely and an error
c         flag ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         also, if the magnitude of zeta is larger than u2=0.5/ur, then
c         all significance is lost and ierr=4. in order to use the int
c         function, zeta must be further restricted not to exceed the
c         largest integer, u3=i1mach(9). thus, the magnitude of zeta
c         must be restricted by min(u2,u3). on 32 bit machines, u1,u2,
c         and u3 are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single
c         precision arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double
c         precision arithmetic respectively. this makes u2 and u3 limit-
c         ing in their respective arithmetics. this means that the mag-
c         nitude of z cannot exceed 3.1e+4 in single and 2.1e+6 in
c         double precision arithmetic. this also means that one can
c         expect to retain, in the worst cases on 32 bit machines,
c         no digits in single precision and only 7 digits in double
c         precision arithmetic. similar considerations hold for other
c         machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zacai,zbknu,zexp,zsqrt,i1mach,d1mach
c
c     complex ai,cone,csq,cy,s1,s2,trm1,trm2,z,zta,z3
      double precision aa, ad, aii, air, ak, alim, atrm, az, az3, bk,
     * cc, ck, coef, conei, coner, csqi, csqr, cyi, cyr, c1, c2, dig,
     * dk, d1, d2, elim, fid, fnu, ptr, rl, r1m5, sfac, sti, str,
     * s1i, s1r, s2i, s2r, tol, trm1i, trm1r, trm2i, trm2r, tth, zeroi,
     * zeror, zi, zr, ztai, ztar, z3i, z3r, d1mach, zabs2, alaz, bb
      integer id, ierr, iflag, k, kode, k1, k2, mr, nn, nz, i1mach
      dimension cyr(1), cyi(1)
      data tth, c1, c2, coef /6.66666666666666667d-01,
     * 3.55028053887817240d-01,2.58819403792806799d-01,
     * 1.83776298473930683d-01/
      data zeror, zeroi, coner, conei /0.0d0,0.0d0,1.0d0,0.0d0/
c***first executable statement  zairy
      ierr = 0
      nz=0
      if (id.lt.0 .or. id.gt.1) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (ierr.ne.0) return
      az = zabs2(zr,zi)
      tol = dmax1(d1mach(4),1.0d-18)
      fid = dble(float(id))
      if (az.gt.1.0d0) go to 70
c-----------------------------------------------------------------------
c     power series for cabs(z).le.1.
c-----------------------------------------------------------------------
      s1r = coner
      s1i = conei
      s2r = coner
      s2i = conei
      if (az.lt.tol) go to 170
      aa = az*az
      if (aa.lt.tol/az) go to 40
      trm1r = coner
      trm1i = conei
      trm2r = coner
      trm2i = conei
      atrm = 1.0d0
      str = zr*zr - zi*zi
      sti = zr*zi + zi*zr
      z3r = str*zr - sti*zi
      z3i = str*zi + sti*zr
      az3 = az*aa
      ak = 2.0d0 + fid
      bk = 3.0d0 - fid - fid
      ck = 4.0d0 - fid
      dk = 3.0d0 + fid + fid
      d1 = ak*dk
      d2 = bk*ck
      ad = dmin1(d1,d2)
      ak = 24.0d0 + 9.0d0*fid
      bk = 30.0d0 - 9.0d0*fid
      do 30 k=1,25
        str = (trm1r*z3r-trm1i*z3i)/d1
        trm1i = (trm1r*z3i+trm1i*z3r)/d1
        trm1r = str
        s1r = s1r + trm1r
        s1i = s1i + trm1i
        str = (trm2r*z3r-trm2i*z3i)/d2
        trm2i = (trm2r*z3i+trm2i*z3r)/d2
        trm2r = str
        s2r = s2r + trm2r
        s2i = s2i + trm2i
        atrm = atrm*az3/ad
        d1 = d1 + ak
        d2 = d2 + bk
        ad = dmin1(d1,d2)
        if (atrm.lt.tol*ad) go to 40
        ak = ak + 18.0d0
        bk = bk + 18.0d0
   30 continue
   40 continue
      if (id.eq.1) go to 50
      air = s1r*c1 - c2*(zr*s2r-zi*s2i)
      aii = s1i*c1 - c2*(zr*s2i+zi*s2r)
      if (kode.eq.1) return
      call zsqrt(zr, zi, str, sti)
      ztar = tth*(zr*str-zi*sti)
      ztai = tth*(zr*sti+zi*str)
      call zexp(ztar, ztai, str, sti)
      ptr = air*str - aii*sti
      aii = air*sti + aii*str
      air = ptr
      return
   50 continue
      air = -s2r*c2
      aii = -s2i*c2
      if (az.le.tol) go to 60
      str = zr*s1r - zi*s1i
      sti = zr*s1i + zi*s1r
      cc = c1/(1.0d0+fid)
      air = air + cc*(str*zr-sti*zi)
      aii = aii + cc*(str*zi+sti*zr)
   60 continue
      if (kode.eq.1) return
      call zsqrt(zr, zi, str, sti)
      ztar = tth*(zr*str-zi*sti)
      ztai = tth*(zr*sti+zi*str)
      call zexp(ztar, ztai, str, sti)
      ptr = str*air - sti*aii
      aii = str*aii + sti*air
      air = ptr
      return
c-----------------------------------------------------------------------
c     case for cabs(z).gt.1.0
c-----------------------------------------------------------------------
   70 continue
      fnu = (1.0d0+fid)/3.0d0
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0d-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c-----------------------------------------------------------------------
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      rl = 1.2d0*dig + 3.0d0
      alaz = dlog(az)
c--------------------------------------------------------------------------
c     test for proper range
c-----------------------------------------------------------------------
      aa=0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa=dmin1(aa,bb)
      aa=aa**tth
      if (az.gt.aa) go to 260
      aa=dsqrt(aa)
      if (az.gt.aa) ierr=3
      call zsqrt(zr, zi, csqr, csqi)
      ztar = tth*(zr*csqr-zi*csqi)
      ztai = tth*(zr*csqi+zi*csqr)
c-----------------------------------------------------------------------
c     re(zta).le.0 when re(z).lt.0, especially when im(z) is small
c-----------------------------------------------------------------------
      iflag = 0
      sfac = 1.0d0
      ak = ztai
      if (zr.ge.0.0d0) go to 80
      bk = ztar
      ck = -dabs(bk)
      ztar = ck
      ztai = ak
   80 continue
      if (zi.ne.0.0d0) go to 90
      if (zr.gt.0.0d0) go to 90
      ztar = 0.0d0
      ztai = ak
   90 continue
      aa = ztar
      if (aa.ge.0.0d0 .and. zr.gt.0.0d0) go to 110
      if (kode.eq.2) go to 100
c-----------------------------------------------------------------------
c     overflow test
c-----------------------------------------------------------------------
      if (aa.gt.(-alim)) go to 100
      aa = -aa + 0.25d0*alaz
      iflag = 1
      sfac = tol
      if (aa.gt.elim) go to 270
  100 continue
c-----------------------------------------------------------------------
c     cbknu and cacon return exp(zta)*k(fnu,zta) on kode=2
c-----------------------------------------------------------------------
      mr = 1
      if (zi.lt.0.0d0) mr = -1
      call zacai(ztar, ztai, fnu, kode, mr, 1, cyr, cyi, nn, rl, tol,
     * elim, alim)
      if (nn.lt.0) go to 280
      nz = nz + nn
      go to 130
  110 continue
      if (kode.eq.2) go to 120
c-----------------------------------------------------------------------
c     underflow test
c-----------------------------------------------------------------------
      if (aa.lt.alim) go to 120
      aa = -aa - 0.25d0*alaz
      iflag = 2
      sfac = 1.0d0/tol
      if (aa.lt.(-elim)) go to 210
  120 continue
      call zbknu(ztar, ztai, fnu, kode, 1, cyr, cyi, nz, tol, elim,
     * alim)
  130 continue
      s1r = cyr(1)*coef
      s1i = cyi(1)*coef
      if (iflag.ne.0) go to 150
      if (id.eq.1) go to 140
      air = csqr*s1r - csqi*s1i
      aii = csqr*s1i + csqi*s1r
      return
  140 continue
      air = -(zr*s1r-zi*s1i)
      aii = -(zr*s1i+zi*s1r)
      return
  150 continue
      s1r = s1r*sfac
      s1i = s1i*sfac
      if (id.eq.1) go to 160
      str = s1r*csqr - s1i*csqi
      s1i = s1r*csqi + s1i*csqr
      s1r = str
      air = s1r/sfac
      aii = s1i/sfac
      return
  160 continue
      str = -(s1r*zr-s1i*zi)
      s1i = -(s1r*zi+s1i*zr)
      s1r = str
      air = s1r/sfac
      aii = s1i/sfac
      return
  170 continue
      aa = 1.0d+3*d1mach(1)
      s1r = zeror
      s1i = zeroi
      if (id.eq.1) go to 190
      if (az.le.aa) go to 180
      s1r = c2*zr
      s1i = c2*zi
  180 continue
      air = c1 - s1r
      aii = -s1i
      return
  190 continue
      air = -c2
      aii = 0.0d0
      aa = dsqrt(aa)
      if (az.le.aa) go to 200
      s1r = 0.5d0*(zr*zr-zi*zi)
      s1i = zr*zi
  200 continue
      air = air + c1*s1r
      aii = aii + c1*s1i
      return
  210 continue
      nz = 1
      air = zeror
      aii = zeroi
      return
  270 continue
      nz = 0
      ierr=2
      return
  280 continue
      if(nn.eq.(-1)) go to 270
      nz=0
      ierr=5
      return
  260 continue
      ierr=4
      nz=0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------
      subroutine zbiry(zr, zi, id, kode, bir, bii, ierr)
c     geuz for g77
      EXTERNAL zsqrt
c     Airy function,bessel functions of order one third
c     Author  Amos, Donald E., Sandia National Laboratories
c
c         on kode=1, cbiry computes the complex airy function bi(z) or
c         its derivative dbi(z)/dz on id=0 or id=1 respectively. on
c         kode=2, a scaling option cexp(-axzta)*bi(z) or cexp(-axzta)*
c         dbi(z)/dz is provided to remove the exponential behavior in
c         both the left and right half planes where
c         zta=(2/3)*z*csqrt(z)=cmplx(xzta,yzta) and axzta=abs(xzta).
c
c         input      zr,zi are double precision
c           zr,zi  - z=cmplx(zr,zi)
c           id     - order of derivative, id=0 or id=1
c           kode   - a parameter to indicate the scaling option
c                    kode= 1  returns
c                             bi=bi(z)                 on id=0 or
c                             bi=dbi(z)/dz             on id=1
c                        = 2  returns
c                             bi=cexp(-axzta)*bi(z)     on id=0 or
c                             bi=cexp(-axzta)*dbi(z)/dz on id=1 where
c                             zta=(2/3)*z*csqrt(z)=cmplx(xzta,yzta)
c                             and axzta=abs(xzta)
c
c         output     bir,bii are double precision
c           bir,bii- complex answer depending on the choices for id and
c                    kode
c           ierr   - error flag
c                    ierr=0, normal return - computation completed
c                    ierr=1, input error   - no computation
c                    ierr=2, overflow      - no computation, real(z)
c                            too large on kode=1
c                    ierr=3, cabs(z) large      - computation completed
c                            losses of signifcance by argument reduction
c                            produce less than half of machine accuracy
c                    ierr=4, cabs(z) too large  - no computation
c                            complete loss of accuracy by argument
c                            reduction
c                    ierr=5, error              - no computation,
c                            algorithm termination condition not met
c
c         bi and dbi are computed for cabs(z).gt.1.0 from the i bessel
c         functions by
c
c                bi(z)=c*sqrt(z)*( i(-1/3,zta) + i(1/3,zta) )
c               dbi(z)=c *  z  * ( i(-2/3,zta) + i(2/3,zta) )
c                               c=1.0/sqrt(3.0)
c                             zta=(2/3)*z**(3/2)
c
c         with the power series for cabs(z).le.1.0.
c
c         in most complex variable computation, one must evaluate ele-
c         mentary functions. when the magnitude of z is large, losses
c         of significance by argument reduction occur. consequently, if
c         the magnitude of zeta=(2/3)*z**1.5 exceeds u1=sqrt(0.5/ur),
c         then losses exceeding half precision are likely and an error
c         flag ierr=3 is triggered where ur=dmax1(d1mach(4),1.0d-18) is
c         double precision unit roundoff limited to 18 digits precision.
c         also, if the magnitude of zeta is larger than u2=0.5/ur, then
c         all significance is lost and ierr=4. in order to use the int
c         function, zeta must be further restricted not to exceed the
c         largest integer, u3=i1mach(9). thus, the magnitude of zeta
c         must be restricted by min(u2,u3). on 32 bit machines, u1,u2,
c         and u3 are approximately 2.0e+3, 4.2e+6, 2.1e+9 in single
c         precision arithmetic and 1.3e+8, 1.8e+16, 2.1e+9 in double
c         precision arithmetic respectively. this makes u2 and u3 limit-
c         ing in their respective arithmetics. this means that the mag-
c         nitude of z cannot exceed 3.1e+4 in single and 2.1e+6 in
c         double precision arithmetic. this also means that one can
c         expect to retain, in the worst cases on 32 bit machines,
c         no digits in single precision and only 7 digits in double
c         precision arithmetic. similar considerations hold for other
c         machines.
c
c         the approximate relative error in the magnitude of a complex
c         bessel function can be expressed by p*10**s where p=max(unit
c         roundoff,1.0e-18) is the nominal precision and 10**s repre-
c         sents the increase in error due to argument reduction in the
c         elementary functions. here, s=max(1,abs(log10(cabs(z))),
c         abs(log10(fnu))) approximately (i.e. s=max(1,abs(exponent of
c         cabs(z),abs(exponent of fnu)) ). however, the phase angle may
c         have only absolute accuracy. this is most likely to occur when
c         one component (in absolute value) is larger than the other by
c         several orders of magnitude. if one component is 10**k larger
c         than the other, then one can expect only max(abs(log10(p))-k,
c         0) significant digits; or, stated another way, when k exceeds
c         the exponent of p, no significant digits remain in the smaller
c         component. however, the phase angle retains absolute accuracy
c         because, in complex arithmetic with precision p, the smaller
c         component will not (as a rule) decrease below p times the
c         magnitude of the larger component. in these extreme cases,
c         the principal phase angle is on the order of +p, -p, pi/2-p,
c         or -pi/2+p.
c
c***routines called  zbinu,zabs2,zdiv,zsqrt,d1mach,i1mach
c
c     complex bi,cone,csq,cy,s1,s2,trm1,trm2,z,zta,z3
      double precision aa, ad, ak, alim, atrm, az, az3, bb, bii, bir,
     * bk, cc, ck, coef, conei, coner, csqi, csqr, cyi, cyr, c1, c2,
     * dig, dk, d1, d2, eaa, elim, fid, fmr, fnu, fnul, pi, rl, r1m5,
     * sfac, sti, str, s1i, s1r, s2i, s2r, tol, trm1i, trm1r, trm2i,
     * trm2r, tth, zi, zr, ztai, ztar, z3i, z3r, d1mach, zabs2
      integer id, ierr, k, kode, k1, k2, nz, i1mach
      dimension cyr(2), cyi(2)
      data tth, c1, c2, coef, pi /6.66666666666666667d-01,
     * 6.14926627446000736d-01,4.48288357353826359d-01,
     * 5.77350269189625765d-01,3.14159265358979324d+00/
      data coner, conei /1.0d0,0.0d0/
c
      ierr = 0
      nz=0
      if (id.lt.0 .or. id.gt.1) ierr=1
      if (kode.lt.1 .or. kode.gt.2) ierr=1
      if (ierr.ne.0) return
      az = zabs2(zr,zi)
      tol = dmax1(d1mach(4),1.0d-18)
      fid = dble(float(id))
      if (az.gt.1.0e0) go to 70
c-----------------------------------------------------------------------
c     power series for cabs(z).le.1.
c-----------------------------------------------------------------------
      s1r = coner
      s1i = conei
      s2r = coner
      s2i = conei
      if (az.lt.tol) go to 130
      aa = az*az
      if (aa.lt.tol/az) go to 40
      trm1r = coner
      trm1i = conei
      trm2r = coner
      trm2i = conei
      atrm = 1.0d0
      str = zr*zr - zi*zi
      sti = zr*zi + zi*zr
      z3r = str*zr - sti*zi
      z3i = str*zi + sti*zr
      az3 = az*aa
      ak = 2.0d0 + fid
      bk = 3.0d0 - fid - fid
      ck = 4.0d0 - fid
      dk = 3.0d0 + fid + fid
      d1 = ak*dk
      d2 = bk*ck
      ad = dmin1(d1,d2)
      ak = 24.0d0 + 9.0d0*fid
      bk = 30.0d0 - 9.0d0*fid
      do 30 k=1,25
        str = (trm1r*z3r-trm1i*z3i)/d1
        trm1i = (trm1r*z3i+trm1i*z3r)/d1
        trm1r = str
        s1r = s1r + trm1r
        s1i = s1i + trm1i
        str = (trm2r*z3r-trm2i*z3i)/d2
        trm2i = (trm2r*z3i+trm2i*z3r)/d2
        trm2r = str
        s2r = s2r + trm2r
        s2i = s2i + trm2i
        atrm = atrm*az3/ad
        d1 = d1 + ak
        d2 = d2 + bk
        ad = dmin1(d1,d2)
        if (atrm.lt.tol*ad) go to 40
        ak = ak + 18.0d0
        bk = bk + 18.0d0
   30 continue
   40 continue
      if (id.eq.1) go to 50
      bir = c1*s1r + c2*(zr*s2r-zi*s2i)
      bii = c1*s1i + c2*(zr*s2i+zi*s2r)
      if (kode.eq.1) return
      call zsqrt(zr, zi, str, sti)
      ztar = tth*(zr*str-zi*sti)
      ztai = tth*(zr*sti+zi*str)
      aa = ztar
      aa = -dabs(aa)
      eaa = dexp(aa)
      bir = bir*eaa
      bii = bii*eaa
      return
   50 continue
      bir = s2r*c2
      bii = s2i*c2
      if (az.le.tol) go to 60
      cc = c1/(1.0d0+fid)
      str = s1r*zr - s1i*zi
      sti = s1r*zi + s1i*zr
      bir = bir + cc*(str*zr-sti*zi)
      bii = bii + cc*(str*zi+sti*zr)
   60 continue
      if (kode.eq.1) return
      call zsqrt(zr, zi, str, sti)
      ztar = tth*(zr*str-zi*sti)
      ztai = tth*(zr*sti+zi*str)
      aa = ztar
      aa = -dabs(aa)
      eaa = dexp(aa)
      bir = bir*eaa
      bii = bii*eaa
      return
c-----------------------------------------------------------------------
c     case for cabs(z).gt.1.0
c-----------------------------------------------------------------------
   70 continue
      fnu = (1.0d0+fid)/3.0d0
c-----------------------------------------------------------------------
c     set parameters related to machine constants.
c     tol is the approximate unit roundoff limited to 1.0e-18.
c     elim is the approximate exponential over- and underflow limit.
c     exp(-elim).lt.exp(-alim)=exp(-elim)/tol    and
c     exp(elim).gt.exp(alim)=exp(elim)*tol       are intervals near
c     underflow and overflow limits where scaled arithmetic is done.
c     rl is the lower boundary of the asymptotic expansion for large z.
c     dig = number of base 10 digits in tol = 10**(-dig).
c     fnul is the lower boundary of the asymptotic series for large fnu.
c-----------------------------------------------------------------------
      k1 = i1mach(15)
      k2 = i1mach(16)
      r1m5 = d1mach(5)
      k = min0(iabs(k1),iabs(k2))
      elim = 2.303d0*(dble(float(k))*r1m5-3.0d0)
      k1 = i1mach(14) - 1
      aa = r1m5*dble(float(k1))
      dig = dmin1(aa,18.0d0)
      aa = aa*2.303d0
      alim = elim + dmax1(-aa,-41.45d0)
      rl = 1.2d0*dig + 3.0d0
      fnul = 10.0d0 + 6.0d0*(dig-3.0d0)
c-----------------------------------------------------------------------
c     test for range
c-----------------------------------------------------------------------
      aa=0.5d0/tol
      bb=dble(float(i1mach(9)))*0.5d0
      aa=dmin1(aa,bb)
      aa=aa**tth
      if (az.gt.aa) go to 260
      aa=dsqrt(aa)
      if (az.gt.aa) ierr=3
      call zsqrt(zr, zi, csqr, csqi)
      ztar = tth*(zr*csqr-zi*csqi)
      ztai = tth*(zr*csqi+zi*csqr)
c-----------------------------------------------------------------------
c     re(zta).le.0 when re(z).lt.0, especially when im(z) is small
c-----------------------------------------------------------------------
      sfac = 1.0d0
      ak = ztai
      if (zr.ge.0.0d0) go to 80
      bk = ztar
      ck = -dabs(bk)
      ztar = ck
      ztai = ak
   80 continue
      if (zi.ne.0.0d0 .or. zr.gt.0.0d0) go to 90
      ztar = 0.0d0
      ztai = ak
   90 continue
      aa = ztar
      if (kode.eq.2) go to 100
c-----------------------------------------------------------------------
c     overflow test
c-----------------------------------------------------------------------
      bb = dabs(aa)
      if (bb.lt.alim) go to 100
      bb = bb + 0.25d0*dlog(az)
      sfac = tol
      if (bb.gt.elim) go to 190
  100 continue
      fmr = 0.0d0
      if (aa.ge.0.0d0 .and. zr.gt.0.0d0) go to 110
      fmr = pi
      if (zi.lt.0.0d0) fmr = -pi
      ztar = -ztar
      ztai = -ztai
  110 continue
c-----------------------------------------------------------------------
c     aa=factor for analytic continuation of i(fnu,zta)
c     kode=2 returns exp(-abs(xzta))*i(fnu,zta) from cbesi
c-----------------------------------------------------------------------
      call zbinu(ztar, ztai, fnu, kode, 1, cyr, cyi, nz, rl, fnul, tol,
     * elim, alim)
      if (nz.lt.0) go to 200
      aa = fmr*fnu
      z3r = sfac
      str = dcos(aa)
      sti = dsin(aa)
      s1r = (str*cyr(1)-sti*cyi(1))*z3r
      s1i = (str*cyi(1)+sti*cyr(1))*z3r
      fnu = (2.0d0-fid)/3.0d0
      call zbinu(ztar, ztai, fnu, kode, 2, cyr, cyi, nz, rl, fnul, tol,
     * elim, alim)
      cyr(1) = cyr(1)*z3r
      cyi(1) = cyi(1)*z3r
      cyr(2) = cyr(2)*z3r
      cyi(2) = cyi(2)*z3r
c-----------------------------------------------------------------------
c     backward recur one step for orders -1/3 or -2/3
c-----------------------------------------------------------------------
      call zdiv(cyr(1), cyi(1), ztar, ztai, str, sti)
      s2r = (fnu+fnu)*str + cyr(2)
      s2i = (fnu+fnu)*sti + cyi(2)
      aa = fmr*(fnu-1.0d0)
      str = dcos(aa)
      sti = dsin(aa)
      s1r = coef*(s1r+s2r*str-s2i*sti)
      s1i = coef*(s1i+s2r*sti+s2i*str)
      if (id.eq.1) go to 120
      str = csqr*s1r - csqi*s1i
      s1i = csqr*s1i + csqi*s1r
      s1r = str
      bir = s1r/sfac
      bii = s1i/sfac
      return
  120 continue
      str = zr*s1r - zi*s1i
      s1i = zr*s1i + zi*s1r
      s1r = str
      bir = s1r/sfac
      bii = s1i/sfac
      return
  130 continue
      aa = c1*(1.0d0-fid) + fid*c2
      bir = aa
      bii = 0.0d0
      return
  190 continue
      ierr=2
      nz=0
      return
  200 continue
      if(nz.eq.(-1)) go to 190
      nz=0
      ierr=5
      return
  260 continue
      ierr=4
      nz=0
      return
      end
c-----------------------------------------------------------------------
c-----------------------------------------------------------------------






