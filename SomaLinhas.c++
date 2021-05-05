#include <iostream>
using namespace std;

int main() {
  int matriz[3][3], somac0=0, somac1=0, somac2=0;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin >> matriz[i][j];
    }
  }
  for(int j=0; j<3; j++){
    somac0+=matriz[0][j];
    somac1+=matriz[1][j];
    somac2+=matriz[2][j];
  }
  cout << "Linha 0: " << somac0 << endl;
  cout << "Linha 1: " << somac1 << endl;
  cout << "Linha 2: " << somac2 << endl;
}