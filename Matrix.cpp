#include "matrix.h"
#include <iostream>
using namespace std;

// assigns random values to array
Matrix::Matrix(){
  for(int i =0; i<3;i++){
    for(int j=0;j<3;j++){
     myArray[i][j]=rand()%20;
    }
  }


}

void Matrix::printArray(){
  for(int i = 0; i<3;i++){
    for(int j =0;j<3;j++ ){
     cout <<myArray[i][j]<<" ";
    }
    cout << " "<< endl;
  }
}

Matrix Matrix::operator +(Matrix e){
  Matrix addM;
  for(int i= 0;i<3;i++){
    for(int j =0; j<3;j++){
      addM.myArray[i][j] = this->myArray[i][j]+ e.myArray[i][j];
    }
  }
  return addM;
}

Matrix Matrix::operator *(Matrix e){
Matrix multM;
  for(int i=0;i<3;i++){
    for(int j =0;j<3;j++){
		multM.myArray[i][j] =0;
      for(int k =0; k<3;k++){
        multM.myArray[i][j]+= this->myArray[i][k]*e.myArray[k][j];
      }
    }
  }
  return multM;
}

bool Matrix::operator ==(Matrix e){

for(int i=0;i<3;i++){
  for(int j =0; j<3;j++){
    if(this->myArray[i][j]!=e.myArray[i][j])
    return false;
  }
}
return true;
}
