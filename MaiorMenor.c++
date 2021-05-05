#include <iostream>

using namespace std;

int main(){
  int n, menor, maior;
  cin >> n;
  int lista[n];
  for(int i = 0; i < n; i++) cin >> lista[i];
  menor = lista[0];
  for(int i = 0; i < n; i++){
    if(lista[i] < menor) menor = lista[i];
  }
  maior = lista[0];
  for(int i = 0; i < n; i++){
    if(lista[i] > maior) maior = lista[i];
  }
  cout << maior << endl;
  cout << menor << endl;
  return 0;
}