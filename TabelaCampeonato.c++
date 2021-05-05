#include <iostream>

#include <vector>

using namespace std;

int main(){
  int vetor[5];
  for(int i = 0; i < 5; i++) cin >> vetor[i];
  vector <int> index;
  for(int i = 0; i < 5; i++){
    if(vetor[i] == -1) index.push_back(i);
  }
  if(index.size() == 1){
    int J, P, V, E, D;
    for(int i = 0; i <= 2500; i++){
      vetor[index[0]] = i;
      J = vetor[0];
      P = vetor[1];
      V = vetor[2];
      E = vetor[3];
      D = vetor[4];
      if(J == V + E + D && P == 3 * V + E){
        for(int j = 0; j < 5; j++){
          cout << vetor[j] << " ";
        }
        cout << endl;
        break;
      }
    }
  }
  else{
    int J, P, V, E, D;
    for(int i = 0; i <= 2500; i++){
      vetor[index[0]] = i;
      for(int j = 0; j <= 2500; j++){
        vetor[index[1]] = j;
        J = vetor[0];
        P = vetor[1];
        V = vetor[2];
        E = vetor[3];
        D = vetor[4];
        if(J == V + E + D && P == 3 * V + E){
          for(int k = 0; k < 5; k++){
            cout << vetor[k] << " ";
          }
          cout << endl;
          break;
        }
      }
    }
  }
}