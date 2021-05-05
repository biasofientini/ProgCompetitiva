#include <iostream>

using namespace std;

bool eh_primo(long long x){
    if(x == 0 or x == 1) return false;
    if(x == 2) return true;
    for(long long i = 2; i*i <= x; i++){
        if(x % i == 0){
         return false;
        }
    }
    return true;
}

int main(){
    long long x;
    
    cin >> x;
    
    if(eh_primo(x)){
        cout << "S" << "\n";
    }
    else{
        cout << "N" << "\n";
    }
}