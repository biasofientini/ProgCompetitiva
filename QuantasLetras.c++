#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  char c;
  cin >> c;
  int contador = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == c) contador++;
  }
  cout << contador << endl;
}
