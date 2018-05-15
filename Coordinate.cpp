#include "Coordinate.hpp"
using namespace std;

Coordinate::Coordinate(uint r,uint c){
    this->r=r;
    this->c=c;
}
uint Coordinate:: GetRow() const {return this->r;}
uint Coordinate:: GetColumn() const {return this->c;}
const Coordinate& Coordinate:: operator=(const Coordinate& other){
    this->r=other.r;
    this->c=other.c;
    return *this;
}