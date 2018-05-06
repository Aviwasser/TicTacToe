#include <iostream>
#include "Cordinate.hpp"
#include "Sign.hpp"
using namespace std;

class Board{
    int len;
    Sign** brd;
public:
    Board(const int&);
    Sign& operator[](const Cordinate& co) const;
    Sign& operator=(const Sign&);
    friend ostream& operator<< (ostream& out, const Board &b);
    ~Board();
};
inline ostream&  operator<< (ostream& out, const Board &b){
    for(int i=0;i<b.len;++i){
        for(int j=0;j<b.len;++j){
            out <<b.brd[i][j];
        }
        out << "\n";
    }
   
    return out;

}