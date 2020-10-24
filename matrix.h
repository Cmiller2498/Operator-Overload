#ifndef _Matrix_
#define _Matrix_
#include <iostream>
using namespace std;

class Matrix{
public:
  int myArray[3][3];
  Matrix();
  void printArray();
  Matrix operator +(Matrix e);
  Matrix operator *(Matrix e);
  bool operator==(Matrix e);
};
#endif
