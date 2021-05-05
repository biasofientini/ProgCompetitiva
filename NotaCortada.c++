#include <iostream>

using namespace std;

int main(){
  int b, t;
  cin >> b >> t;

  int metade_area = (160 * 70) / 2;
  int trapezio = ((t + b) * 70) / 2;

  if(trapezio == metade_area) cout << 0 << endl;
  else if(trapezio > metade_area) cout << 1 << endl;
  else cout << 2 << endl;
}