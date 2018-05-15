#include "Coordinate.hpp"
using namespace std;

Coordinate::Coordinate(int r,int c){
    this->r=r;
    this->c=c;
}
int Coordinate:: GetRow() const {return this->r;}
int Coordinate:: GetColumn() const {return this->c;}
const Coordinate& Coordinate:: operator=(const Coordinate& other){
    this->r=other.r;
    this->c=other.c;
    return *this;
}