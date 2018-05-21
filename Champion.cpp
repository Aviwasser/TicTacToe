#include "Champion.h"


const Coordinate Champion::play(const Board& board){
   unsigned int i=0,j=board.size()-1,size=j;
    Coordinate c{i,j};
   if(board[c]=='.')
   return c;
     c={j,i};
     if(board[c]=='.')
   return c;
   for(i = 1; i < size; i++){
          c={i,j};
         if(board[c]=='.')
             return c;
    }
    
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            c={i,j};
             if(board[c]=='.')
             return c;
        }
    }
    return {0,0};
}
