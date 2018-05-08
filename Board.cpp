#include "Board.hpp"

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
Sign& Board:: operator[](const Cordinate& co) const{
    if(co.GetRow()>=0&&co.GetRow()<len&&co.GetColumn()>=0&&co.GetColumn()<len)
        return brd[co.GetRow()][co.GetColumn()];
    throw IllegalCoordinateException (co.GetRow(),co.GetColumn());
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
Board::~Board(){
    for(int i=0;i<this->len;++i){
        delete[] brd[i];
    }
}
