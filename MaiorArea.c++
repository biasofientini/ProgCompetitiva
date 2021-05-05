#include <iostream>

using namespace std;

int main(){
  int l1, a1, l2, a2;
  cin >> l1 >> a1 >> l2 >> a2;
  int areaprimeiro, areasegundo;
  areaprimeiro = l1 * a1;
  areasegundo = l2 * a2;
  if(areaprimeiro > areasegundo) cout << "Primeiro" << endl;
  else if(areaprimeiro == areasegundo) cout << "Empate" << endl;
  else cout << "Segundo" << endl;
  return 0;
}