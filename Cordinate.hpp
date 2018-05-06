#include <iostream>
using namespace std;

class Cordinate{
    private:
        int r;
        int c;
    public:
        Cordinate(int r, int c);
        int GetRow() const;
        int GetColumn() const;
        const Cordinate& operator=(const Cordinate&);
      //  ~Cordinate();
};