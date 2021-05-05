#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int fib[n];
  fib[0] = 0;
  for(int i = 1; i <= n; i++){
    if(i == 1 or i == 2) fib[i] = 1;
    else fib[i] = fib[i - 1] + fib[i - 2];
  }
  for(int i = 0; i < n; i++) cout << fib[i] << " ";
  cout << endl;
}