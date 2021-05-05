#include <iostream>

using namespace std;

int main() {
  int im, if0, if1, total, maxim;
  cin >> im >> if0 >> if1;
  total = im - (if0 + if1);
  maxim = max(if0, if1);
  cout << max(maxim, total) << endl;
}