CXX=clang++-5.0
CXXFLAGS=-std=c++17
all: Board.o Sign.o IllegalCoordinateException.o IllegalCharException.o 
Board.o: Board.cpp Board.h Sign.hpp
	$(CXX) $(CXXFLAGS) -c  Board.cpp -o Board.o
	
Sign.o: Sign.cpp Sign.hpp Board.h IllegalCharException.hpp
	$(CXX) $(CXXFLAGS) -c  Sign.cpp -o Sign.o
	
	
IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.hpp Board.h
	$(CXX) $(CXXFLAGS) -c  IllegalCoordinateException.cpp -o IllegalCoordinateException.o
	
IllegalCharException.o: IllegalCharException.cpp IllegalCharException.hpp
	$(CXX) $(CXXFLAGS) -c  IllegalCharException.cpp -o IllegalCharException.o


clean:
	rm *.o 
	
	
