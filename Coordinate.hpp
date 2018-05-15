#include <iostream>
using namespace std;

class Coordinate{
    private:
        int r;
        int c;
    public:
        Coordinate(int, int);
        int GetRow() const;
        int GetColumn() const;
        const Coordinate& operator=(const Coordinate&);
};