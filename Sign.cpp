#include <iostream>
#include "Sign.hpp"
using namespace std;
Sign::Sign(const char& n){
  this->a=n;
}
Sign::Sign(){
  this->a='.';
}

char Sign::GetSign() const{
 return this->a;
}
 char& Sign:: operator=(const char& c){
   this->a=c;
   
}
Sign& Sign::operator=(const Sign& c)
{
  this->a=c.GetSign();
  return *this;
}
ostream& operator<<(ostream& os, Sign const& b)
{
    os << b.a;
    return os;
}
Sign::operator char()
{
 
    return a;
}