#include <iostream>

using namespace std;

int main(){
  int h, f, p, sentido, resposta;
  cin >> h >> p >> f >> sentido;
  
  
  if(h < f && f < p) resposta = -1; 
  else if(p < f && f < h) resposta = 1; 
  else if(f < p && p < h) resposta = -1; 
  else if(p < h && h < f) resposta = -1; 
  else if(f < h && h < p) resposta = 1;
  else if(h < p && p < f) resposta = 1; 
  
  if(sentido == resposta) cout << "S" << endl;
  else cout << "N" << endl;
}