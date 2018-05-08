#include "Board.hpp"

using namespace std;

Board::Board(){
    this->len=0;
    this->brd=nullptr;
}
Board::Board(int len){
    this->len=len;
    this->brd=new Sign*[len];
    for(int i=0;i<len;++i){
        this->brd[i]=new Sign[len];
    }
}
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
Sign& Board:: operator[](const vector<int> v){
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
return *this;
}
Board& Board:: operator=(const Board& b){
    this->~Board();
    this->len=b.len;
    this->brd=new Sign*[b.len];
    for(int i=0;i<b.len;++i){
        this->brd[i]=new Sign[b.len];
        for(int j=0;j<b.len;++j){
           this->brd[i][j]=b.brd[i][j];
        }
    }
}
Board::~Board(){
    for(int i=0;i<this->len;++i){
        delete[] brd[i];
    }
    delete[] brd;
}