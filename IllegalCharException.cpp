#include <iostream>
#include "IllegalCharException.hpp"
using namespace std;

IllegalCharException::IllegalCharException(const char& c){
    this->c=c;
}
char IllegalCharException:: theChar() const{
    return c;
}