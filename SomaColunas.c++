#include <iostream>
using namespace std;

int main() {
  int matriz[3][3], somac0=0, somac1=0, somac2=0;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin >> matriz[i][j];
    }
    somac0+=matriz[i][0];
    somac1+=matriz[i][1];
    somac2+=matriz[i][2];
  }
  cout << "Coluna 0: " << somac0 << endl;
  cout << "Coluna 1: " << somac1 << endl;
  cout << "Coluna 2: " << somac2 << endl;
}