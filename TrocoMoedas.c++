#include <iostream>

using namespace std;

int main() {
  //Moedas: 1, 0,50, 0,25, 0,1, 0,05 e 0,01.
  int c, total_50 = 0, total_25 = 0, total_10 = 0, total_5 = 0, total_1 = 0;
  cin >> c;
  float centavos, reais;
  centavos = c % 100;
  reais = (c - centavos) / 100;
  while(centavos >= 50){
    centavos = centavos - 50;
    total_50 += 1;
  }
  while(centavos >= 25){
    centavos = centavos - 25;
    total_25 += 1;
  }
  while(centavos >= 10){
    centavos = centavos - 10;
    total_10 += 1;
  }
  while(centavos >= 5){
    centavos = centavos - 5;
    total_5 += 1;
  }
  while(centavos >= 1){
    centavos = centavos - 1;
    total_1 += 1;
  }
  int total = total_50 + total_25 + total_10 + total_5 + total_1 + reais;
  cout << total << endl;
  cout << reais << endl;
  cout << total_50 << endl;
  cout << total_25 << endl;
  cout << total_10 << endl;
  cout << total_5 << endl;
  cout << total_1 << endl;
}