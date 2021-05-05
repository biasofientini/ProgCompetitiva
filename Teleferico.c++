#include <iostream>

using namespace std;

int main() {
  int c, a, capacidade, viagens = 0;
  cin >> c >> a;
  if(a + 1 < c) cout << 1 << endl;
  else{
    capacidade = c - 1;
    while(a > capacidade){
      a -= capacidade;
      viagens++;
    }
    viagens++;
    cout << viagens << endl;
  }
}