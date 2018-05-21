#pragma once

using namespace std;
#include "DummyPlayers.h"
class TicTacToe  {
  private:
    Board brd;
    Player* win;
    bool check(Coordinate c);
    public:
        TicTacToe(int);
        void print();
        Board board() const;
        void play(Player&,Player&);
        const Player& winner() const;
        //   cout<<"sdffdsfsd";
        //   Player *x;
        //   //x=(YXPlayer*)malloc(sizeof(YXPlayer));
        // return x;
};
