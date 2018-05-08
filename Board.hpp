#include <iostream>
//#include "Cordinate.hpp"
#include "Sign.hpp"
#include "IllegalCoordinateException.hpp"
#include<vector>
using namespace std;

class Board{
    int len;
    Sign** brd;
public:
    Board(const int&);
    Sign& operator[](vector<int> v) const;
    Board& operator=(const char&);
    friend ostream& operator<< (ostream& out, const Board &b);
  //  ~Board();
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