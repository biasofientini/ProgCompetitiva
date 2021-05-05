#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int lista[n];
  for(int i = 0; i < n; i++) cin >> lista[i];
  
  int num = lista[0], quantidade = 1;
  for(int i = 0; i < n; i++){
    if(lista[i] != num){
      num = lista[i];
      quantidade++;
    }
  }
  cout << quantidade << endl;
}