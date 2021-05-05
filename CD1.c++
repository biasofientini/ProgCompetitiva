#include <iostream>

using namespace std;

int transforma(char c){
  return c - '0';
}

int main(){
  string n;
  cin >> n;
  
  if(transforma(n[n.size() - 1]) % 2 == 0) cout << "S" << endl; 
  else cout << "N" << endl;

  int x[n.size()];
  for(int i = 0; i < n.size(); i++){
    x[i] = transforma(n[i]);
  }
  int soma = 0;
  for(int i = 0; i < n.size(); i++){
    soma += x[i];
  }
  if(soma % 3 == 0) cout << "S" << endl;
  else cout << "N" << endl;

  if(transforma(n[n.size() - 1]) == 0 or transforma(n[n.size() - 1]) == 5) cout << "S" << endl;
  else cout << "N" << endl;
}