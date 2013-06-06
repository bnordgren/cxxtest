
FORTRAN_SRCS= \
	datatest_f.f03
FORTRAN_OBJS= $(FORTRAN_SRCS:.f03=.o)

CXX_SRCS = \
	datatest_c.cpp
CXX_OBJS = $(CXX_SRCS:.cpp=.o)

OBJS= $(FORTRAN_OBJS) $(CXX_OBJS)

LD_OPTS= -lgfortran

%.o : %.cpp
	g++ -c -o $@ $<

%.o : %.f03
	gfortran -c -o $@ $<

all: $(OBJS)
clean:
	rm *.o *.mod
