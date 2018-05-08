#include "Cordinate.hpp"
using namespace std;

Cordinate::Cordinate(int r,int c){
    this->r=r;
    this->c=c;
}
int Cordinate:: GetRow() const {return this->r;}
int Cordinate:: GetColumn() const {return this->c;}
const Cordinate& Cordinate:: operator=(const Cordinate& other){
    this->r=other.r;
    this->c=other.c;
    return *this;
}