#pragma once

#include <iostream>

#include "Board.h"
using namespace std;
 class Player {
    public:
    char myChar;
     virtual const string name()const{return "Player";}
     virtual const Coordinate play(const Board& Board)=0;
     const char getChar() const;
     void setChar(char c);
    //  Player& operator=(const Player& other){
    //      if(other.name().compare("XYPlayer")==0)
    //      *this->name= "XYPlayer";
    //      else *this->name= "YXPlayer";
    //      return *this;
         
    //  }
};
