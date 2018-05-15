using namespace std;
#include "DummyPlayers.h"
//#include "Board.h"
class TicTacToe  {
  Board brd;

    public:
        TicTacToe(int);
        Board board() const;
        void play();
        
};