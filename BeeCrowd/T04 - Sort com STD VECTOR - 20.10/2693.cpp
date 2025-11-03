/*
Van

Depois de um belo dia de aula é função das vans levarem os estudantes para suas respectivas casas. 
Mas o que muitos não sabem é que além dos gastos e manutenção da van o motorista precisa ter uma 
rota para entregar os passageiros em suas casas. Como você é o menino(a) da informática, ele pediu 
sua ajuda para desenvolver essa rota ordenando os alunos pela distância(da menor para a maior), pela 
região (em ordem alfabética) e por último pelo nome. 

Entrada
Ele te dá a quantidade Q de alunos que não faltaram, o nome do aluno A e uma sigla para a região onde 
ele mora S ("L" Leste, "N" Norte, "O" Oeste, "S" Sul), e C que representa o custo da entrada da cidade 
até sua casa. A saída dos casos será (EOF).

Saída
A saída será uma lista das pessoas na ordem em que devem ser entregadas.

Exemplo de Entrada	        Exemplo de Saída
        5                        Fabricio      
    Samuel O 1                   Samuel
    Fabricio L 1                 Emanuel
    Emanuel S 3                  Kaio
    Kaio S 20                    Hugo
    Hugo N 90
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct aluno{
    string A;
    char S;
    int C;
};

bool ordena(const aluno &a1, const aluno &a2){
     return(a1.C < a2.C) ||
           (a1.C == a2.C && a1.S < a2.S) ||
           (a1.C == a2.C && a1.S == a2.S && a1.A < a2.A);
};


int main(){
    int Q;
    while(cin >> Q){
        vector<aluno> alunos;
        alunos.resize(Q);
        for(int i=0;i<Q;i++){
            cin >> alunos[i].A >> alunos[i].S >> alunos[i].C;
        }
        sort(alunos.begin(), alunos.end(), ordena);
        for(int i=0;i<Q;i++){
            cout << alunos[i].A << endl;
            cout << endl;
        }
    }

    return 0;
}