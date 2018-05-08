#include <iostream>
#include "IllegalCoordinateException.hpp"
using namespace std;

IllegalCoordinateException::IllegalCoordinateException(int r,int c){
    this->r=r;
    this->c=c;
}
string IllegalCoordinateException:: theCoordinate() const{
    return string(to_string(r)+","+to_string(c));
}