#include<iostream>
using namespace std;


int main(){
  int n;
  cin >> n;
  int lista[n];
  for(int i = 0; i < n; i++) cin >> lista[i];
  int m;
  cin >> m;
  int desistiram[m];
  for(int i = 0; i < m; i++) cin >> desistiram[i];

  int maxxx = 50000 + 1000;
  int tabela[maxxx];
  for(int i = 0; i < maxxx; i++) tabela[i] = 0;

  for(int i = 0; i < m; i++){
    int pessoa = desistiram[i];
    tabela[pessoa]++;
  }

  for(int i = 0; i < n; i++){
    int pessoa = lista[i];
    if(tabela[pessoa] == 0) cout << pessoa << " ";
  }
  cout << endl;
  

}