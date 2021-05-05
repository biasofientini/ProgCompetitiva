#include <iostream>

using namespace std;

bool esta_na_lista_comprados(int comprados[], int m, int carta){
  for(int i = 0; i < m; i++){
    if(carta == comprados[i]) return true;
  }
  return false;
}

int main(){
  int n, c, m;
  cin >> n >> c >> m;
  int raros[c];
  for(int i = 0; i < c; i++) cin >> raros[i];
  int comprados[m];
  for(int i = 0; i < m; i++) cin >> comprados[i];

  // comparar raros e comprados, se for igual, adiciono ++ em uma variável e subtraio o total do númo de raros que tenho.

  int quantidade = 0;
  for(int i = 0; i < c; i++){
    if(esta_na_lista_comprados(comprados, m, raros[i])) quantidade++;
  }
  cout << c - quantidade << endl;
}