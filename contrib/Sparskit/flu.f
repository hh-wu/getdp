c $Id: flu.f,v 1.1 2008-04-11 06:01:06 geuzaine Exp $
C==============================================================================
C
C     RESOLUTION DE SYSTEMES LINEAIRES PAR METHODE DE GAUSS COMPACTE
C
C==============================================================================
C
C\*
C-----------------------------------------------------------------------------
      SUBROUTINE flu(IPARAM,RPARAM,A,LU,NMAX,N,B,X,DX,RES,IPIV)
C-----------------------------------------------------------------------------
C
C     +-----------------+------------------------------------------+---------+
C     |   PROGRAMMEUR   |              COMMENTAIRES                |   DATE  |
C     +-----------------+------------------------------------------+---------+
C     |   UME MARC      |                                          | 02/09/91|
C     +-----------------+------------------------------------------+---------+
C
C     BUT DE LA ROUTINE
C     +++++++++++++++++
C
C     RESOLUTION DU SYSTEME A.X = B
C     METHODE LU CLASSIQUE
C
C
C     DESCRIPTION DES PARAMETRES
C     ++++++++++++++++++++++++++
C
C     IPARAM(1) : 0 = IMPOSE LE CALCUL DE LA DECOMPOSITION LU
C                 1 = PAS DE CALCUL DE LA DECOMPOSITION LU
C
C     A(NMAX,NMAX) = MATRICE A
C     LU(NMAX,NMAX) = MATRICE LU
C     NMAX = DIMENSION DES TABLEAUX
C     N = NOMBRE D'EQUATIONS
C     B(N) = VECTEUR INDEPENDANT
C     X(N) = VECTEUR SOLUTION
C     DX(N) = VECTEUR CORRECTION DE LA SOLUTION
C     RES(N) = VECTEUR RESIDU
C     IPIV(N) = VECTEUR DE PIVOTAGE DES LIGNES DE A
C
C
      INTEGER IPARAM(*)
      REAL*8  RPARAM(*)
      INTEGER NMAX,N,IPIV(N)
      REAL*8  X(N),A(NMAX,NMAX),LU(NMAX,NMAX),DX(N),RES(N)
      REAL*8  B(N)

      INTEGER CONV

 10   CONTINUE
      IF (IPARAM(1).EQ.0) THEN
C        write(*,'(A)')'=    factorisation L.U                      ='
         IF (IPARAM(3).EQ.1) THEN
            DO J = 1,N
               DO I = 1,N
                  WRITE(77,*) I,J,A(I,J)
               ENDDO
            ENDDO            
            DO I = 1,N
               WRITE(78,*) I,B(I)
            ENDDO            
         ENDIF         
         CALL GAUFLU(NMAX,N,A,LU,IPIV)
      ENDIF

      CALL GAUFBA(NMAX,N,LU,IPIV,B,X)

      IF (IPARAM(2).EQ.1) THEN
         CALL GSFITE(IPARAM,RPARAM,
     &               NMAX,N,A,B,X,LU,RES,DX,IPIV,CONV)
      ENDIF

      IF (IPARAM(1).EQ.0) THEN
         IPARAM(1) = 1
         RETURN
      ENDIF

      IF (CONV.EQ.1) RETURN

      IPARAM(1) = 0
      GOTO 10

      END
C
C\*
C------------------------------------------------------------------------------
      SUBROUTINE GAUFLU(NMAX,N,A,LU,PIV)
C------------------------------------------------------------------------------
C
C     +-----------------+-------------------------------------------+---------+
C     |   PROGRAMMEUR   |              COMMENTAIRES                 |   DATE  |
C     +-----------------+-------------------------------------------+---------+
C     | UME MARC        |                                           | 02/09/91|
C     +-----------------+-------------------------------------------+---------+
C
C     BUT DE LA ROUTINE
C     +++++++++++++++++
C
C     CALCUL LA DECOMPOSITION COMPLETE L U  DE A
C
C
C     DESCRIPTION DES PARAMETRES
C     ++++++++++++++++++++++++++
C
C
C     NMAX = DIMENSION DES TABLEAUX
C     N = NOMBRE D'EQUATIONS
C     A(NMAX,NMAX) = MATRICE A
C     LU(NMAX,NMAX) = MATRICE LU
C     PIV(N) = VECTEUR DE PIVOTAGE DES LIGNES DE A
C
C
      INTEGER NMAX,N,PIV(N)
      REAL*8  A(NMAX,NMAX)
      REAL*8  LU(NMAX,NMAX)

      INTEGER K,I,J
      REAL*8  RPIV,VAL

      DO I = 1,N
         PIV(I) = I
      ENDDO

      DO J = 1,N
         DO I = 1,N
            LU(I,J) = A(I,J)
         ENDDO
      ENDDO

      DO K=1,N-1
         CALL PIFMAX(NMAX,N,K,LU,PIV)
         RPIV = LU(PIV(K),K)
         DO I=K+1,N
            if(abs(rpiv).lt.(1.D-10*abs(lu(piv(i),k)))) then
               write(6,*)'PIVOT TROP PETIT'
               write(6,*)'DENOM/NUM =',abs(rpiv/lu(piv(i),k))
            endif
            LU(PIV(I),K) = LU(PIV(I),K)/RPIV
         ENDDO

         DO J=K+1,N
            VAL = LU(PIV(K),J)
            IF (VAL.NE.0.0D0) THEN
               DO I=K+1,N
                  LU(PIV(I),J) = LU(PIV(I),J) 
     &                 - LU(PIV(I),K) * VAL
               ENDDO
            ENDIF
         ENDDO

      ENDDO

      END
C
C\*
C------------------------------------------------------------------------------
      SUBROUTINE GAUFBA(NMAX,N,LU,PIV,B,X)
C------------------------------------------------------------------------------
C
C     +-----------------+-------------------------------------------+---------+
C     |   PROGRAMMEUR   |              COMMENTAIRES                 |   DATE  |
C     +-----------------+-------------------------------------------+---------+
C     | UME MARC        |                                           | 02/09/91|
C     +-----------------+-------------------------------------------+---------+
C
C     BUT DE LA ROUTINE
C     +++++++++++++++++
C
C                     -1
C     CALCUL DE X = LU  .B 
C
C
C     DESCRIPTION DES PARAMETRES
C     ++++++++++++++++++++++++++
C
C     NMAX = DIMENSION DES TABLEAUX
C     N = NOMBRE D'EQUATIONS
C     LU(NMAX,NMAX) = MATRICE LU
C     PIV(N) = VECTEUR DE PIVOTAGE DES LIGNES DE A
C     B(N) = VECTEUR INDEPENDANT
C     X(N) = VECTEUR SOLUTION
C
C
      INTEGER  NMAX,N,PIV(N)
      REAL*8   LU(NMAX,NMAX),B(N),X(N)

      INTEGER  I,J
      REAL*8   VAL

      DO I=1,N
         VAL = 0.0D0
         DO J=1,I-1
            VAL = VAL + LU(PIV(I),J) * X(J)
         ENDDO
         X(I) = B(PIV(I)) - VAL
      ENDDO

      DO I=N,1,-1
         VAL = 0.0D0
         DO J=I+1,N
            VAL = VAL + LU(PIV(I),J) * X(J)
         ENDDO
         X(I) = (X(I) - VAL) / LU(PIV(I),I)
      ENDDO

      END
C
C\*
C------------------------------------------------------------------------------
      SUBROUTINE PIFMAX(NMAX,N,K,LU,PIV)
C------------------------------------------------------------------------------
C
C     +-----------------+------------------------------------------+----------+
C     |   PROGRAMMEUR   |              COMMENTAIRES                |   DATE   |
C     +-----------------+------------------------------------------+----------+
C     | UME MARC        |                                          | 02/09/91 |
C     +-----------------+------------------------------------------+----------+
C
C     BUT DE LA ROUTINE
C     +++++++++++++++++
C
C     RECHERCHE LE PIVOT MAX SUR LA COLONNE (K,K) -> (N,K)
C     MODIFIE LE VECTEUR DE PIVOTAGE EN CONSEQUENCE
C
C
C     DESCRIPTION DES PARAMETRES
C     ++++++++++++++++++++++++++
C
C     NMAX = DIMENSION DES TABLEAUX
C     N = NOMBRE D'EQUATIONS
C     K = NUMERO DE L'ETAPE 
C     LU(NMAX,NMAX) = MATRICE LU
C     PIV(N) = VECTEUR DE PIVOTAGE DES LIGNES DE A
C
C
      INTEGER NMAX,N,K,PIV(N)
      REAL*8    LU(NMAX,NMAX)

      INTEGER I,JMAX
      REAL*8    VA,VMAX

      VMAX = ABS(LU(PIV(K),K))
      JMAX = K
      DO I=K+1,N
         VA=ABS(LU(PIV(I),K))
         IF (VA.GT.VMAX) THEN
            VMAX = VA
            JMAX = I
         ENDIF
      ENDDO

      I = PIV(K)
      PIV(K) = PIV(JMAX)
      PIV(JMAX) = I

      END
C
C\*
C------------------------------------------------------------------------------
      SUBROUTINE GSFITE(IPARAM,RPARAM,
     &                  NMAX,N,A,B,X,LU,RES,DX,PIV,CONV)
C------------------------------------------------------------------------------
C
C     +-----------------+------------------------------------------+----------+
C     |   PROGRAMMEUR   |              COMMENTAIRES                |   DATE   |
C     +-----------------+------------------------------------------+----------+
C     | UME MARC        |                                          | 02/09/91 |
C     +-----------------+------------------------------------------+----------+
C
C     BUT DE LA ROUTINE
C     +++++++++++++++++
C
C     AMELIORATION ITERATIVE DE LA SOLUTION X
C
C
C     DESCRIPTION DES PARAMETRES
C     ++++++++++++++++++++++++++
C
C     NMAX = DIMENSION DES TABLEAUX
C     N = NOMBRE D'EQUATIONS
C     A(NMAX,NMAX) = MATRICE A
C     B(N) = VECTEUR INDEPENDANT
C     X(N) = VECTEUR SOLUTION
C     LU(NMAX,NMAX) = MATRICE LU
C     RESN) = VECTEUR RESIDU
C     DX(N) = VECTEUR CORRECTION DE LA SOLUTION
C     PIV(N) = VECTEUR DE PIVOTAGE DES LIGNES DE A
C     CONV : 0 = PAS DE CONVERGENCE EN N/10 ITERATIONS
C            1 = CONVERGENCE (PRECISION = 1.E-5)
C
C
      INTEGER IPARAM(*)
      REAL*8  RPARAM(*)
      INTEGER CONV
      INTEGER NMAX,N,PIV(N)
      REAL*8  A(NMAX,NMAX),B(N),X(N)
      REAL*8  LU(NMAX,NMAX),RES(N),DX(N)

      INTEGER   I,J,ITE
      REAL*8    PREC,DXMAX,DERR,DAV
      REAL*8    VAL

      PREC = RPARAM(1)

      DO ITE=1,IPARAM(4)

         DO I = 1,N
            VAL = 0.0D0
            DO J = 1,N
               VAL = VAL + DBLE(A(I,J)) * DBLE(X(J))
            ENDDO
            RES(I) = DBLE(B(I)) - VAL
         ENDDO
         
         CALL GAUFBA(NMAX,N,LU,PIV,RES,DX)
         
         DO I=1,N
            X(I) = X(I) + DX(I)
         ENDDO
         
         DXMAX = 0.0D0
         
         DO I=1,N
            IF (X(I).EQ.0.0D0) THEN
               DERR = ABS(DX(I))
            ELSE
               DERR = ABS(DX(I)/X(I))
            ENDIF
            IF (DERR.GT.DXMAX) DXMAX = DERR
         ENDDO
         
         WRITE(*,'(A,E12.5,$)')'=    ERREUR REL. MAX. ',DXMAX
         WRITE(*,'(A,$)')'          ='
         WRITE(*,'(A,$)')13

         IF (DXMAX.LT.PREC) THEN
            CONV = 1
            WRITE(*,*)
            RETURN
         ENDIF

         IF (IPARAM(3).EQ.1) THEN
            IF ((ITE.GT.2).AND.(DXMAX.GT.DAV)) THEN
               CONV = 0
               WRITE(*,*)
               RETURN
            ENDIF
         ENDIF

         DAV = DXMAX

      ENDDO
      WRITE(*,*)

      CONV = 0

      END



