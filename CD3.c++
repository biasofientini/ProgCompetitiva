#include <iostream>

using namespace std;

int transforma(char numero){
  return numero - '0';
}

int main() {
  string x;
  cin >> x;
  int pares = 0, impares = 0;
  for(int i = 0; i < x.size(); i++){
    if(i % 2 == 0) pares += transforma(x[i]);
    else impares += transforma(x[i]);
  }
  if((impares - pares) % 11 == 0) cout << "S" << endl;
  else if((impares - pares) == 0) cout << "S" << endl;
  else cout << "N" << endl;
  return 0;
}