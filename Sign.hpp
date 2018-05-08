#include <iostream>
#include "IllegalCharException.hpp"
using namespace std;
class Sign{
    char a;
    public:
    Sign(const char&);
    Sign();
    
       operator char();
    bool  operator==(const char& );
    char GetSign() const;
   char& operator=(const char&);
   Sign&  operator=(const Sign& );
   friend ostream& operator<<(ostream& os, Sign const& );
};
