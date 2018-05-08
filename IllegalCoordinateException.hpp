#include<iostream>
#include<string>
using namespace std;

class  IllegalCoordinateException{
    int r;
    int c;
public:
    string theCoordinate() const;
    IllegalCoordinateException(int r,int c);
};