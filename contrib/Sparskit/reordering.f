c $Id: reordering.f,v 1.1 2008-04-11 06:01:06 geuzaine Exp $
c----------------------------------------------------------------------c
c                          S P A R S K I T                             c
c----------------------------------------------------------------------c
c               ROERDERING ROUTINES -- LEVEL SET BASED ROUTINES        c
c----------------------------------------------------------------------c
c BSF     : Breadth-First Seearch traversal (Cuthill mc kee ordering)  c
c dblstr  : two-way dissection partitioning -- with equal size domains c
c stripes : routine used by dblstr to assign points                    c
c perphn  : finds a peripheral node and does a BFS search from it.     c
c add_lvst: routine for adding a new level set in BFS algorithm        c
c reversp : routine to reverse a given permuation (e.g., for RCMK)     c
c maskdeg : integer function to compute the `masked' of a node         c
c----------------------------------------------------------------------c
      subroutine BFS(n,ja,ia,nfirst,iperm,mask,maskval,riord,levels,
     *     nlev)
      implicit none 
      integer n,ja(*),ia(*),nfirst,iperm(n),mask(n),riord(*),levels(*),
     *     nlev,maskval 
c-----------------------------------------------------------------------
c finds the level-structure (breadth-first-search or CMK) ordering for a
c given sparse matrix. Uses add_lvst. Allows a  set of nodes to be 
c the initial level (instead of just one node). Allows masked nodes.
c-------------------------parameters------------------------------------
c on entry:
c----------
c n      = number of nodes in the graph 
c ja, ia = pattern of matrix in CSR format (the ja,ia arrays of csr data
c          structure)
c nfirst = number of nodes in the first level that is input in riord
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
c Notes on possible usage
c-------------------------
c 1. if you want a CMK ordering from a known node, say node init then
c    call BFS with nfirst=1,iperm(1) =0, mask(1:n) =1, maskval =1, 
c    riord(1) = init.
c 2. if you want the RCMK ordering and you have a preferred initial node
c     then use above call followed by reversp(n,riord)
c 3. Similarly to 1, and 2, but you know a good LEVEL SET to start from
c    (nfirst = number if nodes in the level, riord(1:nfirst) contains 
c    the nodes. 
c 4. If you do not know how to select a good initial node in 1 and 2, 
c    then you should use perphn instead. 
c
c-----------------------------------------------------------------------
c     local variables -- 
      integer j, ii, nod, istart, iend 
      logical permut
      permut = (iperm(1) .ne. 0) 
c     
c     start pointer structure to levels 
c     
      nlev   = 0 
c     
c     previous end
c     
      istart = 0 
      ii = 0
c     
c     current end 
c     
      iend = nfirst
c     
c     intialize masks to zero -- except nodes of first level -- 
c     
      do 12 j=1, nfirst 
         mask(riord(j)) = 0 
 12   continue
c-----------------------------------------------------------------------
 13   continue 
c     
 1    nlev = nlev+1
      levels(nlev) = istart + 1
      call add_lvst (istart,iend,nlev,riord,ja,ia,mask,maskval) 
      if (istart .lt. iend) goto 1
 2    ii = ii+1 
      if (ii .le. n) then
         nod = ii         
         if (permut) nod = iperm(nod)          
         if (mask(nod) .eq. maskval) then
c     
c     start a new level
c
            istart = iend
            iend = iend+1 
            riord(iend) = nod
            mask(nod) = 0
            goto 1
         else 
            goto 2
         endif
      endif
c----------------------------------------------------------------------- 
 3    levels(nlev+1) = iend+1 
      do j=1, iend
         mask(riord(j)) = maskval 
      enddo
      return
c----------------------------------------------------------------------- 
c-----end-of-BFS--------------------------------------------------------
      end
c-----------------------------------------------------------------------
      subroutine dblstr(n,ja,ia,ip1,ip2,nfirst,riord,ndom,map,mapptr,
     *     mask,levels,iwk) 
      implicit none
      integer ndom,ja(*),ia(*),ip1,ip2,nfirst,riord(*),map(*),mapptr(*),
     *     mask(*),levels(*),iwk(*),nextdom
c-----------------------------------------------------------------------
c this routine performs a two-way partitioning of a graph using 
c level sets recursively. First a coarse set is found by a
c simple cuthill-mc Kee type algorithm. Them each of the large
c domains is further partitioned into subsets using the same 
c technique. The ip1 and ip2 parameters indicate the desired number 
c number of partitions 'in each direction'. So the total number of
c partitions on return ought to be equal (or close) to ip1*ip2 
c----------------------parameters----------------------------------------
c on entry: 
c---------
c n      = row dimension of matrix == number of vertices in graph
c ja, ia = pattern of matrix in CSR format (the ja,ia arrays of csr data
c          structure)
c ip1    = integer indicating the number of large partitions ('number of
c          paritions in first direction') 
c ip2    = integer indicating the number of smaller partitions, per 
c          large partition, ('number of partitions in second direction') 
c nfirst = number of nodes in the first level that is input in riord 
c riord  = (also an ouput argument). on entry riord contains the labels  
c          of the nfirst nodes that constitute the first level.   
c on return:
c-----------
c ndom   = total number of partitions found 
c map    = list of nodes listed partition by pertition from partition 1
c          to paritition ndom.
c mapptr = pointer array for map. All nodes from position 
c          k1=mapptr(idom),to position k2=mapptr(idom+1)-1 in map belong
c          to partition idom.
c work arrays:
c-------------
c mask   = array of length n, used to hold the partition number of each 
c          node for the first (large) partitioning. 
c          mask is also used as a marker of  visited nodes. 
c levels = integer array of length .le. n used to hold the pointer 
c          arrays for the various level structures obtained from BFS. 
c-----------------------------------------------------------------------
      integer n, j,idom,kdom,jdom,maskval,k,nlev,init,ndp1,numnod
      maskval = 1 
      do j=1, n
         mask(j) = maskval 
      enddo
      iwk(1) = 0 
      call BFS(n,ja,ia,nfirst,iwk,mask,maskval,riord,levels,nlev)      
c      init = riord(1) 
c      call perphn (ja,ia,mask,maskval,init,nlev,riord,levels) 
      call stripes (nlev,riord,levels,ip1,map,mapptr,ndom)
c-----------------------------------------------------------------------
      if (ip2 .eq. 1) return      
      ndp1 = ndom+1
c     
c     pack info into array iwk 
c 
      do j = 1, ndom+1
         iwk(j) = ndp1+mapptr(j)  
      enddo
      do j=1, mapptr(ndom+1)-1
         iwk(ndp1+j) = map(j) 
      enddo
c----------------------------------------------------------------------- 
      do idom=1, ndom 
         do k=mapptr(idom),mapptr(idom+1)-1 
            mask(map(k)) = idom
         enddo
      enddo
      nextdom = 1 
c
c     jdom = counter for total number of (small) subdomains 
c     
      jdom = 1
      mapptr(jdom) = 1 
c----------------------------------------------------------------------- 
      do idom =1, ndom
         maskval = idom
         nfirst = 1
         numnod = iwk(idom+1) - iwk(idom) 
         j = iwk(idom) 
         init = iwk(j) 
         nextdom = mapptr(jdom) 
         call perphn(numnod,ja,ia,init,iwk(j),mask,maskval,
     *        nlev,riord,levels)
         call stripes (nlev,riord,levels,ip2,map(nextdom),
     *        mapptr(jdom),kdom)
         mapptr(jdom) = nextdom
         do j = jdom,jdom+kdom-1
            mapptr(j+1) = nextdom + mapptr(j+1)-1
         enddo
         jdom = jdom + kdom
      enddo
c
      ndom = jdom - 1
      return
      end 
c-----------------------------------------------------------------------
      subroutine perphn(n,ja,ia,init,iperm,mask,maskval,nlev,riord,
     *     levels) 
      implicit none
      integer n,ja(*),ia(*),init,iperm(*),mask(*),maskval,
     *     nlev,riord(*),levels(*)
c-----------------------------------------------------------------------
c     finds a pseudo-peripheral node and does a BFS search from it. 
c-----------------------------------------------------------------------
c see routine  dblstr for description of parameters
c input: 
c------- 
c ja, ia  = list pointer array for the adjacency graph 
c mask    = array used for masking nodes -- see maskval 
c maskval = value to be checked against for determing whether or
c           not a node is masked. If mask(k) .ne. maskval then
c           node k is not considered. 
c init    = init node in the pseudo-peripheral node algorithm. 
c
c output:
c-------
c init    = actual pseudo-peripherial node found. 
c nlev    = number of levels in the final BFS traversal. 
c riord   =  
c levels  = 
c-----------------------------------------------------------------------
      integer j,nlevp,deg,nfirst,mindeg,nod,maskdeg
      nlevp = 0 
 1    continue
      riord(1) = init
      nfirst = 1 
      call BFS(n,ja,ia,nfirst,iperm,mask,maskval,riord,levels,nlev)
      if (nlev .gt. nlevp) then 
         mindeg = levels(nlev+1)-1
         do j=levels(nlev),levels(nlev+1)-1
            nod = riord(j) 
            deg = maskdeg(ja,ia,nod,mask,maskval)
            if (deg .lt. mindeg) then
               init = nod
               mindeg = deg
            endif 
         enddo
         nlevp = nlev 
         goto 1 
      endif
      return
      end
c-----------------------------------------------------------------------
      subroutine add_lvst(istart,iend,nlev,riord,ja,ia,mask,maskval) 
      integer nlev, nod, riord(*), ja(*), ia(*), mask(*) 
c---------------------------------------------------------------------- 
c adds one level set to the previous sets. span all nodes of previous 
c set. Uses Mask to mark those already visited. 
c----------------------------------------------------------------------- 
      nod = iend
      do 25 ir = istart+1,iend 
         i = riord(ir)		
         do 24 k=ia(i),ia(i+1)-1
            j = ja(k)
            if (mask(j) .eq. maskval) then
               nod = nod+1 
               mask(j) = 0
               riord(nod) = j
            endif 
 24      continue
 25   continue
      istart = iend 
      iend   = nod 
      return
c-----------------------------------------------------------------------
      end 
c----------------------------------------------------------------------- 
      subroutine stripes (nlev,riord,levels,ip,map,mapptr,ndom)
      implicit none
      integer nlev,riord(*),levels(nlev+1),ip,map(*),
     *    mapptr(*), ndom
c-----------------------------------------------------------------------
c    this is a post processor to BFS. stripes uses the output of BFS to 
c    find a decomposition of the adjacency graph by stripes. It fills 
c    the stripes level by level until a number of nodes .gt. ip is 
c    is reached. 
c---------------------------parameters-----------------------------------
c on entry: 
c --------
c nlev   = number of levels as found by BFS 
c riord  = reverse permutation array produced by BFS -- 
c levels = pointer array for the level structure as computed by BFS. If 
c          lev is a level number, and k1=levels(lev),k2=levels(lev+1)-1, 
c          then all the nodes of level number lev are:
c                      riord(k1),riord(k1+1),...,riord(k2) 
c  ip    = number of desired partitions (subdomains) of about equal size.
c 
c on return
c ---------
c ndom     = number of subgraphs (subdomains) found 
c map      = node per processor list. The nodes are listed contiguously
c            from proc 1 to nproc = mpx*mpy. 
c mapptr   = pointer array for array map. list for proc. i starts at 
c            mapptr(i) and ends at mapptr(i+1)-1 in array map.
c-----------------------------------------------------------------------
c local variables. 
c
      integer ib,ktr,ilev,k,nsiz,psiz 
      ndom = 1 
      ib = 1
c to add: if (ip .le. 1) then ...
      nsiz = levels(nlev+1) - levels(1) 
      psiz = (nsiz-ib)/max(1,(ip - ndom + 1)) + 1 
      mapptr(ndom) = ib 
      ktr = 0 
      do 10 ilev = 1, nlev
c
c     add all nodes of this level to domain
c     
         do 3 k=levels(ilev), levels(ilev+1)-1
            map(ib) = riord(k)
            ib = ib+1
            ktr = ktr + 1 
            if (ktr .ge. psiz  .or. k .ge. nsiz) then 
               ndom = ndom + 1
               mapptr(ndom) = ib 
               psiz = (nsiz-ib)/max(1,(ip - ndom + 1)) + 1 
               ktr = 0
            endif
c
 3       continue
 10   continue
      ndom = ndom-1
      return 
c-----------------------------------------------------------------------
c-----end-of-stripes----------------------------------------------------
      end
c----------------------------------------------------------------------- 
      subroutine rversp (n, riord) 
      integer n, riord(n) 
c-----------------------------------------------------------------------
c     this routine does an in-place reversing of the permutation array
c     riord -- 
c----------------------------------------------------------------------- 
      integer j, k 
      do 26 j=1,n/2
         k = riord(j) 
         riord(j) = riord(n-j+1)
         riord(n-j+1) = k 
 26   continue 
      return 
      end 
c----------------------------------------------------------------------- 
      integer function maskdeg  (ja,ia,nod,mask,maskval) 
      implicit none 
      integer ja(*),ia(*),nod,mask(*),maskval
c-----------------------------------------------------------------------
      integer deg, k 
      deg = 0
      do k =ia(nod),ia(nod+1)-1
         if (mask(ja(k)) .eq. maskval) deg = deg+1 
      enddo
      maskdeg = deg 
      return
      end 
c-----------------------------------------------------------------------
