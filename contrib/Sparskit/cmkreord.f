c $Id: cmkreord.f,v 1.1 2008-04-11 06:01:06 geuzaine Exp $
c-----------------------------------------------------------------------
      subroutine cmkreord(n,a,ja,ia,a0,ja0,ia0,
     *     init,iperm,mask,maskval,nlev,riord,
     *     levels)
      implicit none 
      integer n,ja(*),ia(*),iperm(n),mask(n),riord(*),levels(*),
     *     nlev,maskval,init 
      integer ja0(*),ia0(*)
      real*8  a(*),a0(*)
c-----------------------------------------------------------------------
c      Cuthill-McKee Reordering 
c-----------------------------------------------------------------------
c on entry:
c----------
c n      = number of nodes in the graph 
c ja, ia = pattern of matrix in CSR format (the ja,ia arrays of csr data
c          structure)
c init   = initial node 
c iperm  = integer array indicating in which order to  traverse the graph
c          in order to generate all connected components. 
c          The nodes will be traversed in order iperm(1),....,iperm(n) 
c          Convention: 
c          if iperm(1) .eq. 0 on entry then BFS will traverse the 
c          nodes in the  order 1,2,...,n. 
c 
c riord  = (also an ouput argument). on entry riord contains the labels  
c          of the nfirst nodes that constitute the first level.      
c 
c mask   = array used to indicate whether or not a node should be 
c          condidered in the graph. see maskval.
c          mask is also used as a marker of  visited nodes. 
c 
c maskval= consider node i only when:  mask(i) .eq. maskval 
c          maskval must be .gt. 0. 
c          thus, to consider all nodes, take mask(1:n) = 1. 
c          maskval=1 (for example) 
c 
c on return
c ---------
c mask   = on return mask is restored to its initial state. 
c riord  = `reverse permutation array'. Contains the labels of the nodes
c          constituting all the levels found, from the first level to
c          the last. 
c levels = pointer array for the level structure. If lev is a level
c          number, and k1=levels(lev),k2=levels(lev+1)-1, then
c          all the nodes of level number lev are:
c          riord(k1),riord(k1+1),...,riord(k2) 
c nlev   = number of levels found
c-----------------------------------------------------------------------
      integer i
      maskval=1
      do i=1,n
	 mask(i)=maskval
      enddo
      iperm(1)=0
      call perphn(n,ja,ia,init,iperm,mask,maskval,nlev,riord,
     &            levels)
      call rversp(n,riord) 
      call exchange(n,riord,iperm)
      call dperm(n,a,ja,ia,a0,ja0,ia0,iperm,iperm,1)
      end
c-------------------------------------------------------------------------------
      subroutine sort_irv(itmp,rtmp,n)
c----------------------------------------------------------------------------
      implicit real*8 (a-h,o-z)
      dimension itmp(n),rtmp(n)

      do i=1,n
	 itmpmin=itmp(i)
	 jmin=i
	 do j=i+1,n
	    if (itmp(j).lt.itmpmin) then
		jmin=j
		itmpmin=itmp(jmin)
            endif
         enddo
	 it=itmp(i)
	 itmp(i)=itmp(jmin)
	 itmp(jmin)=it

	 rt=rtmp(i)
	 rtmp(i)=rtmp(jmin)
	 rtmp(jmin)=rt
      enddo
      end
c-------------------------------------------------------------------------------
      subroutine sortcol(n,a,ja,ia,iw,rw)
c-------------------------------------------------------------------------------
      implicit real*8 (a-h,o-z)
      real*8    a(*),rw(*)
      dimension ia(n+1),ja(*),iw(n)

      do i=1,n
	 ideb=ia(i)
	 ifin=ia(i+1)-1
	 k=0
	 do j=ideb,ifin
	    k=k+1
	    iw(k)=ja(j)
	    rw(k)= a(j)
         enddo
         call sort_irv(iw,rw,ifin-ideb+1)
	 k=0
	 do j=ideb,ifin
	    k=k+1
	    ja(j)=iw(k)
	     a(j)=rw(k)
         enddo
      enddo
      return
      end
c-------------------------------------------------------------------------------
      subroutine exchange(n,iriord,iperm)
c-------------------------------------------------------------------------------
      implicit none
      integer n,iriord(n),iperm(n)
c----------------------------------------------------------------------------
c  Reverse a permutation vector
c
c  On entry :
c  ----------
c            n      : dimension            
c            iriord : initial reordering vector
c  On return :
c  -----------
c            iperm  : permutation vector to be used with SPARSKIT (dperm ...)
c
c----------------------------------------------------------------------------
      integer i

      do i=1,n
	 iperm(iriord(i))=i
      enddo
 
      end
