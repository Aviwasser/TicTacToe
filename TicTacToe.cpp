#include "TicTacToe.h"

#include <iostream>
using namespace std;

TicTacToe:: TicTacToe(int len)  {
    Board other(len);
    this->brd=other;
    }
   
void TicTacToe:: print()  {
    cout<<this->brd<<endl;
}
// YXPlayer& TicTacToe:: winner() {
//    //  if(this->win.compare("XYPlayer")==0)
//    // return XYPlayer{};
//    cout<<this->win;
//    YXPlayer *x;
//     return *x;
// }
Board TicTacToe:: board() const{
    return brd;
}
void TicTacToe:: play(Player& x, Player& o) {
    int count=0;
   
    while(count<this->brd.size()){
        Coordinate c=x.play(this->brd);
      this->brd[c]='X';
       c=o.play(this->brd);
       if(check(c)){
           *win=x;
           break;
       }
      this->brd[c]='O';
      if(check(c)){
           *win=o;
           break;
       }
        count++;
    }
    if(count>=this->brd.size())
        *win=o;
    cout<<this->win;
}
bool TicTacToe:: check(Coordinate c){
    bool flag=true;
    for(uint i=0;i<brd.size();++i){
        if(brd[{c.GetRow(),i}]!=brd[{c.GetRow(),c.GetColumn()}]){
            flag =false;
            break;
        }
    }
    if(flag)
        return true;
    flag=true;
    for(uint i=0;i<brd.size();++i){
        if(brd[{i,c.GetColumn()}]!=brd[{c.GetRow(),c.GetColumn()}]){
            flag =false;
            break;
        }
    }
    if(flag)
        return true;
    flag=true;
    if(c.GetRow()==c.GetColumn()){
        for(uint i=0;i<brd.size();++i){
            if(brd[{i,i}]!=brd[{c.GetRow(),c.GetColumn()}]){
                flag=false;
                break;
            }
        }
        if(flag)
            return true;
        flag=true;
    }
    if(c.GetRow()==brd.size()-1-c.GetColumn()){
        for(uint i=0;i<brd.size();++i){
            if(brd[{i,brd.size()-1-i}]!=brd[{c.GetRow(),c.GetColumn()}]){
                flag=false;
                break;
            }
        }
        if(flag)
            return true;
    }
    return false;
}
const Player& TicTacToe:: winner() const{
    return *win;
}