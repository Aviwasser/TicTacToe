#include <iostream>
#include "Sign.hpp"
#include "IllegalCoordinateException.hpp"
#include<vector>
using namespace std;

class Board{
    int len;
    Sign** brd;
public:
    Board(int);
    Board(const Board& other);
    Sign& operator[](const vector<int> v);
    Board& operator=(const char& c);
    Board& operator=(const Board&);
    friend ostream& operator<< (ostream& out, const Board &b);
    ~Board();
};
inline ostream&  operator<< (ostream& out, const Board &b){
    for(int i=0;i<b.len;++i){
        for(int j=0;j<b.len;++j){
            out <<b.brd[i][j];
        }
        out << '\n';
    }
   
    return out;

}