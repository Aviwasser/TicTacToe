#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe:: TicTacToe(int len)  {
    Board other(len);
    this->brd=other;
}
Board TicTacToe:: board() const{
    return this->brd;
}   
void TicTacToe:: play() {
    
}