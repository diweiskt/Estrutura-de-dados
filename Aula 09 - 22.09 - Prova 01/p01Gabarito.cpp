#include <iostream>
#include <algorithm>

using namespace std;

struct equipe{
    string nome;
    int P; // pontos
    int SG; // sets ganhos
    int SP;  // sets perdidos
    int saldo;
};

bool compara(const equipe &e1, const equipe &e2){
    return(e1.P > e2.P) || // primeiro critério
          (e1.P == e2.P && e1.saldo > e2.saldo) || //segundo critério
          (e1.P == e2.P && e1.saldo == e2.saldo && e1.SG > e2.SG) || //terceiro 
          (e1.P == e2.P && e1.saldo == e2.saldo && e1.SG == e2.SG && e1.nome < e2.nome); // quarto critérios
}

int main(){
    int N;
    cin >> N;
    equipe equipes[N];
    //LEITURA DOS DADOS DE ENTRADA
    for(int i=0; i<N;i++){
        cin >> equipes[i].nome;
        cin >> equipes[i].P;
        cin >> equipes[i].SG;
        cin >> equipes[i].SP;
        equipes[i].saldo = equipes[i].SG - equipes[i].SP;
    }
    sort(equipes,equipes+N,compara);
    //Exibir 
     for(int i=0; i<N;i++){
        cout << equipes[i].nome << " " 
             << equipes[i].P << " "
            << equipes[i].saldo << " "
            << equipes[i].SG << endl;
    }

    return 0;
}