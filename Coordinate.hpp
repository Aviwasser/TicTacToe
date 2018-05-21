#include <iostream>
using namespace std;

class Coordinate{
    private:
        uint r;
        uint c;
    public:
        Coordinate();
        Coordinate(uint, uint);
        uint GetRow() const;
        uint GetColumn() const;
        const Coordinate& operator=(const Coordinate&);
};