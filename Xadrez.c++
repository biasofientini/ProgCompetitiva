#include <iostream>

using namespace std;

int main(){
  int l, c;
  cin >> l >> c;
  int matriz[l + 1][c + 1];
  for(int i = 1; i <= l; i++){
    for(int j = 1; j <= c; j++){
      if(i % 2 != 0 and j % 2 != 0) matriz[i][j] = 1;
      else if(i % 2 == 0 and j % 2 == 0) matriz[i][j] = 1;
      else if(i % 2 != 0 and j % 2 == 0) matriz[i][j] = 0;
      else matriz[i][j] = 0;
    }
  }
  cout << matriz[l][c] << endl;
}