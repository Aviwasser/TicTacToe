#include <iostream>
#include "IllegalCharException.hpp"
using namespace std;
class Sign{
    char a;
    public:
    Sign(const char&);
    Sign();
    
       operator char();

    char GetSign() const;
   char& operator=(const char&);
   Sign&  operator=(const Sign& );
   friend bool  operator==(const Sign& s,const char& );
   friend ostream& operator<<(ostream& os, Sign const& );
};

inline bool  operator==(const Sign& s,const char& c){

  return s.GetSign()==c;
   
}