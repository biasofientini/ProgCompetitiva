#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int lista[n];
  for(int i = 0; i < n; i++) cin >> lista[i];
  
  int maior1 = lista[0] - 0;
  int index_1 = 0;
  for(int i = 1; i < n; i++){
    if(lista[i]  - i > maior1){
      maior1 = lista[i] - i;
      index_1 = i;
    }
  }
  int maior2 = lista[0] + 0;
  int index_2 = 0;
  for(int i = 0; i < n; i++){
    if(lista[i] + i > maior2){
      maior2 = lista[i] + i;
      index_2 = i;
    }
  }
  cout << maior1 + maior2 << endl;
}