#include <iostream>
using namespace std;


int main(){ 
  long long n;
  cin >> n;
  bool flag=false;
  
  for(long long i = 2; i*i <= n-1; i++){
    if(n % i == 0) flag = true;
  }
  
  if(flag) cout << "S" << endl;
  else cout << "N" << endl;
}