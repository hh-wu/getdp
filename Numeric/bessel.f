c -- cbessjo (bessel spherique d'ordre 0)

      FUNCTION cbessj0(z)

      IMPLICIT NONE
      COMPLEX cbessj0,z

      cbessj0 = CSIN(z) / z

      RETURN
      END

c -- cbessj1 (bessel spherique d'ordre 1)

      FUNCTION cbessj1(z)

      IMPLICIT NONE
      COMPLEX cbessj1,z

      cbessj1 = ( CSIN(z) / z - CCOS(z) ) / z

      RETURN
      END

c -- cbessj2 (bessel spherique d'ordre 2)

      FUNCTION cbessj2(z)

      IMPLICIT NONE
      COMPLEX cbessj2,z

      cbessj2 =  ( CSIN(z) * (3./(z*z)-1.) - CCOS(z) * 3./z ) / z

      RETURN
      END



