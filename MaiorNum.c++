#include <iostream>

using namespace std;

int main(){
  int numero, maior = 0;
  for(int i = 0; i < 100; i++){
    cin >> numero;
    if(numero > maior) maior = numero;
    if(numero == 0) break;
  }
  cout << maior << endl;
  return 0;
}