#include "Board.h"

using namespace std;

Board::Board(const int& len){
    this->len=len;
    this->brd=new Sign*[len];
    for(int i=0;i<len;++i){
        this->brd[i]=new Sign[len];
        for(int j=0;j<len;++j){
           this-> brd[i][j]=Sign();
        }
    }
}
Sign& Board:: operator[](const vector<int> v) const{
    if(v[0]>=0 && v[0]<len && v[1]>=0 && v[1]<len)
        return brd[v[0]][v[1]];
    throw IllegalCoordinateException (v[0],v[1]);
}
Board& Board:: operator=(const char& c){
    Sign s(c);
   //this->brd[1][2]=c;
    for(int i=0;i<len;++i){
        for(int j=0;j<len;++j){
            this->brd[i][j]=s;
        }
    }
}

// Board::~Board(){
//     for(int i=0;i<this->len;++i){
//         delete[] brd[i];
//     }
// }
