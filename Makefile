CXX=clang++-5.0
CXXFLAGS=-std=c++17
all: Sign.o Cordinate.o IllegalCoordinateException.o IllegalCharException.o Board.o
Board.o: Board.cpp Board.hpp Sign.hpp Cordinate.hpp IllegalCoordinateException.hpp
	$(CXX) $(CXXFLAGS) -c  Board.cpp -o Board.o
	
Sign.o: Sign.cpp Sign.hpp Board.hpp IllegalCharException.hpp
	$(CXX) $(CXXFLAGS) -c  Sign.cpp -o Sign.o
	
IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.hpp Board.hpp
	$(CXX) $(CXXFLAGS) -c  IllegalCoordinateException.cpp -o IllegalCoordinateException.o
	
IllegalCharException.o: IllegalCharException.cpp IllegalCharException.hpp
	$(CXX) $(CXXFLAGS) -c  IllegalCharException.cpp -o IllegalCharException.o

Cordinate.o: Cordinate.cpp Cordinate.hpp Board.hpp
	$(CXX) $(CXXFLAGS) -c  Cordinate.cpp -o Cordinate.o

clean:
	rm *.o 
