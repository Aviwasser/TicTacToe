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

Sign& Sign:: operator=(const char& c){
if(c!='X'&&c!='O'&&c!='.')
  throw IllegalCharException(c);
else
  this->a=c;
return *this;
}
Sign& Sign::operator=(const Sign& c)
{
  if(c.GetSign()!='X'&&c.GetSign()!='O'&&c.GetSign()!='.')
    throw IllegalCharException(c.GetSign());
  else
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
