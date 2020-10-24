#include "matrix.h"
#include <iostream>
#include<string>

int main(){

Matrix a;
Matrix b;


std::cout << "Array #1: " << endl;
a.printArray();
std::cout << "Array 2: " << endl;
b.printArray();
if(a == b){
  std::cout << "They are equal" << endl;
}
else{
  std::cout << "They are not equal" << endl;
}
std::cout << "The sum of the array: " << endl;
Matrix n = a+b;
n.printArray();

Matrix k= a*b;
std::cout << "Product of the array:" << endl;
k.printArray();


return 0;
}
