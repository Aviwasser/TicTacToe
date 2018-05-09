#include "Board.h"

using namespace std;
/*
*Default Constructor
*/
Board::Board(int len){
    this->len=len;
    this->brd=new Sign*[len];
    for(int i=0;i<len;++i){
        this->brd[i]=new Sign[len];
    }
}
/*
*Copy Constructor
*/
Board::Board(const Board& other){
    this->len=other.len;
    this->brd=new Sign*[other.len];
    for(int i=0;i<other.len;++i){
        this->brd[i]=new Sign[other.len];
        for(int j=0;j<other.len;++j){
           this->brd[i][j]=other.brd[i][j];
        }
    }
}
/*
*Opreator to return Sign in Some Cooridnate
*/
Sign& Board:: operator[](const vector<int> v){
    if(v[0]>=0 && v[0]<len && v[1]>=0 && v[1]<len)
        return brd[v[0]][v[1]];
    throw IllegalCoordinateException (v[0],v[1]);
}
/*
*Opreator input to Change Sign in the Board
*/
Board& Board:: operator=(const char& c){
    if(c!='.'&&c!='X'&&c!='O')
        throw IllegalCharException(c);
    else{
        for(int i=0;i<len;++i){
            for(int j=0;j<len;++j){
                this->brd[i][j]=c;
            }
        }
    }
return *this;
}
/*
*Operator input to change the Board to other
*/
Board& Board:: operator=(const Board& b){
    this->~Board();
    this->len=b.len;
    this->brd=new Sign*[len];
    for(int i=0;i<len;++i){
        this->brd[i]=new Sign[len];
        for(int j=0;j<len;++j){
           this->brd[i][j]=b.brd[i][j];
        }
    }
    return *this;
}
/*
*Destractor
*/
Board::~Board(){
    for(int i=0;i<this->len;++i){
        delete[] brd[i];
    }
    delete[] brd;
}
