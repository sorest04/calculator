ARCH = $(shell uname)

ifeq ($(ARCH),Darwin)
	CXX	 = g++
	LINK     = g++
else
	CXX	 = g++ #-4.8
	LINK     = g++ #-4.8
endif

DEBUG    = -g
CXXFLAGS = $(shell fltk-config --cxxflags ) -std=c++0x -I.
LDFLAGS  = $(shell fltk-config --ldflags )
LDSTATIC = $(shell fltk-config --ldstaticflags )
CPPFLAGS = -std=c++0x 
OBJS = stack.o

.SUFFIXES: .o .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEBUG) -c $<

all: calc

stack.o: stack.cpp stack.h
	$(CXX) $(CPPFLAGS) -c stack.cpp

calc: calcInterface.cpp stack.o
	$(CXX) $(CXXFLAGS) calcInterface.cpp $(OBJS) $(LDFLAGS) -o calc

	
clean: 
	rm -f *.o 2> /dev/null
        