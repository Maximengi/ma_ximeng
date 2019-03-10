#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Matrix
{
    friend ostream &operator<<(ostream &,const Matrix &);
    friend istream &operator>>(istream &,Matrix &);
private:
    string ss11;
    string ss12;
    string ss21;
    string ss22;
};

#endif // MATRIX_H_INCLUDED
