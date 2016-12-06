.SUFFIXES: .f .o
.SUFFIXES: .f90 .o
.SUFFIXES: .f90 .mod

FC = gfortran
LD = gfortran
FFLAGS = -g 

OBJS1 =  besselh.o main_surface_wave_convex.o surface_wave_convex.o
OBJS2 =  main_surface_waves_concave.o surface_waves_concave.o
OBJS3 =  besselh.o main_cylindrical_cavity.o cylindrical_cavity.o
OBJS4 =  besselh.o main_cylindrical_inclusion.o cylindrical_inclusion.o

SW_convex.x: $(OBJS1)
	$(LD) -o $@ $(OBJS1) 

# You can get ZBESH needed here for example from
# https://github.com/JuliaLang/openspecfun.git
# Do
# git clone https://github.com/JuliaLang/openspecfun.git
# cd openspecfun
# make
# cp libopenspecfun.a ../
SW_concave.x: $(OBJS2)
	$(LD) -o $@ $(OBJS2) -L. libopenspecfun.a

cyl_cav.x: $(OBJS3)
	$(LD) -o $@ $(OBJS3) 


cyl_inc.x: $(OBJS4)
	$(LD) -o $@ $(OBJS4) -llapack -lblas

.f.o:	
	$(FC) -c $(FFLAGS) $(FINC) $<
.f90.o:	
	$(FC) -c $(FFLAGS) $(FINC) $<
.f90.mod:	
	$(FC) -c $(FFLAGS) $(FINC) $<

clean:
	rm -f *.o *.x

