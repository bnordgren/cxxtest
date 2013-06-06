
CXX=g++
FORTRAN=gfortran

FORTRAN_SRCS= \
	datatest_f.f03
FORTRAN_OBJS= $(FORTRAN_SRCS:.f03=.o)

CXX_SRCS = \
	datatest_c.cpp \
	DataTestSuite.cpp \
	DataTestTracker.cpp
CXX_OBJS = $(CXX_SRCS:.cpp=.o)
CFLAGS=-I../..

OBJS= $(FORTRAN_OBJS) $(CXX_OBJS)

LD_OPTS= -lgfortran

%.o : %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

%.o : %.f03
	$(FORTRAN) -c -o $@ $<

all: $(OBJS)
clean:
	rm *.o *.mod
