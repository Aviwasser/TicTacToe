#include <iostream>
//#include "Coordinate.hpp"
#include "Board.h"
using namespace std;
 class Player {
    public:
     const string name();
     virtual const Coordinate play(const Board&);
};