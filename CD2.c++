#include <iostream>

#include <vector>

using namespace std;

int transforma(char c){
  return c - '0';
}

int main(){
  string n;
  cin >> n;
  vector <int> vetor;
  for(int i = 0; i < n.size(); i++){
    vetor.push_back(transforma(n[i]));
  }
  int x = (vetor[n.size() - 2] * 10) + vetor[n.size() - 1];
  if(x % 4 == 0) cout << "S" << endl;
  else cout << "N" << endl;

  int soma = 0;
  for(int i = 0; i < n.size(); i++){
    soma += vetor[i];
  }
  if(soma % 9 == 0) cout << "S" << endl;
  else cout << "N" << endl;

  if(x % 25 == 0) cout << "S" << endl;
  else cout << "N" << endl;
}