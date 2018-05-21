//#include "Player.h"


using namespace std;

class Champion: public player {
public:
    const string name() const override { return "Idan and Gilad"; }
    const Coordinate play(const Board& board) override;
};