#include <iostream>
#include "Board.h"
using namespace std;
 class Player {
    public:
    virtual const string name() const;
    virtual const Coordinate play(const Board&);
};