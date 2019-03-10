#include <iostream>
#include <iomanip>
#include "Matrix.h"
#include <string>
using namespace std;
ostream &operator<<(ostream &output, const Matrix &line)
{
    output<<line.ss11<<" "<<line.ss12<<"\n"<<line.ss21<<" "<<line.ss22��
return output;
}
istream &operator>>(istream &input,Matrix &line)
{
    input>>setw(1)>>line.ss11;
    input.ignore();
    input>>setw(1)>>line.ss12;
    input.ignore(110,'\n');
    input>>setw(1)>>line.ss21;
    input.ignore();
    input>>setw(1)>>line.ss22;
    input.ignore(110,'\n');
    return input;
}
