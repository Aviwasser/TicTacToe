#include "TicTacToe.hpp"
#include <iostream>
using namespace std;

TicTacToe:: TicTacToe(int len)  {
    Board other(len);
    this->brd=other;
    }
   
void TicTacToe:: print()  {
    cout<<this->brd<<endl;
}
void TicTacToe:: game() {
    
}