#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct pessoa{
  string nome;
  int habilidade;
};

struct timee{
  vector <pessoa> lista;
};

bool cmp_h(pessoa p1, pessoa p2){
  return p1.habilidade > p2.habilidade;
}

bool cmp_n(pessoa p3, pessoa p4){
  return p3.nome < p4.nome;
}

int main(){
  int n, t;
  cin >> n >> t;
  pessoa lista_pessoas_disponiveis[n];

  for(int i = 0; i < n; i++){
    pessoa p;
    cin >> p.nome >> p.habilidade;
    lista_pessoas_disponiveis[i] = p;
  }

  sort(lista_pessoas_disponiveis, lista_pessoas_disponiveis+n, cmp_h);

  cout << endl;

  timee lista[t+5]; 
  
  int id_time_atual = 1;

  for(int i = 0; i < n; i++){
    pessoa p = lista_pessoas_disponiveis[i];
    lista[id_time_atual].lista.push_back(p);
    id_time_atual++; 
    if(id_time_atual > t) id_time_atual = 1;  
  }

  for(int i = 1; i <= t; i++){
    cout << "Time " << i << endl;
    timee team = lista[i];
    sort(team.lista.begin(), team.lista.end(), cmp_n);
    for(int j = 0; j < team.lista.size(); j++){
      cout << team.lista[j].nome << endl;
    }
    cout << endl;
  }
}