      subroutine Critical_points_circle(t0,t,Nc)
c=====================================================================  
c
c     This routine finds the critical points of the phase of the 
c     integral equation in the case of a circle.
c     See the writeup by Fernando for explanation
c
c     We have the following formulas: 
c
c     t = Pi - t0 + 4nPi        if 0 leq t-t0 leq 2Pi
c
c     t = Pi/3 + t0/3 + 4nPi/3  if 0 leq t-t0 leq 2Pi
c     
c     for "some" n (which we determine n the code)  
c
c=====================================================================  
      IMPLICIT NONE 
      INTEGER ind, n, Nc
      DOUBLE PRECISION t(3), t0, tmp, Pi, Pion3, twoPi
c=======================================================================
c     DECLARATIONS
c=======================================================================
      Pi=4.0d0*datan(1.0d0)
      twoPi=2.0d0*Pi
      Pion3=Pi/3.0d0
      ind=1
      do n=-2,2
         tmp=Pi-t0+4.0d0*dfloat(n)*Pi
         if( ((tmp-t0).ge.0).and.((tmp-t0).le.twoPi)) then 
            t(ind)=tmp
c$$$            write(6,*)' 1 - n=',n,' tmp =',tmp
            ind=ind+1
         endif
      enddo
      do n=-2,2
         tmp=Pion3+t0/3.0d0+4.0d0*dfloat(n)*Pion3
         if(((tmp-t0).ge.0).and.((tmp-t0).le.twoPi)) then 
            t(ind)=tmp
c$$$            write(6,*)' 2 - n=',n,' tmp =',tmp
            ind=ind+1
         endif
      enddo
      Nc=ind-1
      do n=1,Nc
         if(t(n).gt.twoPi) then
            t(n)=t(n)-twoPi
         endif
      enddo
      do n=1,Nc
         if(t(n).gt.twoPi) then
            t(n)=t(n)-twoPi
         endif
      enddo
      if(Nc.ge.2) then 
         if(t(1).gt.t(2)) then
            tmp=t(2)
            t(2)=t(1)
            t(1)=tmp
         endif
      endif
      if(Nc.ge.3) then 
         if(t(2).gt.t(3)) then
            tmp=t(3)
            t(3)=t(2)
            t(2)=tmp
         endif         
      endif
c$$$      do n=1,Nc
c$$$         write(6,*)' t(',n,')=',t(n)
c$$$      enddo
c======================================================================
c     DETERMINES THE CRITICAL POINTS 
c======================================================================     
      if(Nc.eq.2) then 
         if(t(1).eq.t(2)) then 
            Nc=Nc-1
         endif
      endif      
      if(Nc.eq.3) then 
         if((dabs(t(1)-t(2)).lt.1e-14).and.
     &        (dabs(t(2)-t(3)).lt.1e-14)) then 
            Nc=Nc-2
         else 
            if((dabs(t(1)-t(2)).lt.1e-14)) then
               Nc=Nc-1
               t(2)=t(3)
            else
               if((dabs(t(2)-t(3)).lt.1e-14)) then
                  Nc=Nc-1
               endif
            endif
         endif
      endif
c======================================================================
c     ELIMINATES THE CRITICAL POINTS THAT ARE EQUAL  
c======================================================================     
      return
      end 
