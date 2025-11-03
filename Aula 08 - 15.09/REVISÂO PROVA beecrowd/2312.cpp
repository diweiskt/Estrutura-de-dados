//Quadro De Medalhas

/*
Alguém deixou o quadro de medalhas das olimpíadas fora de ordem. 
Seu programa deve colocá-lo na ordem correta. A ordem dos países 
no quadro de medalhas é dada pelo número de medalhas de ouro. Se 
há empate em medalhas de ouro, a nação que tiver mais medalhas de 
prata fica a frente. Havendo empate em medalhas de ouro e prata, 
fica mais bem colocado o país com mais medalhas de bronze. Se dois 
ou mais países empatarem nos três tipos de medalhas, seu programa deve mostrá-los em ordem alfabética.

Entrada
A entrada é dada pelo número de países participantes N (0 ≤ N ≤ 500) 
seguido pela lista dos países, com suas medalhas de ouro O (0 ≤ O ≤ 10000), 
prata P (0 ≤ P ≤ 10000) e bronze B (0 ≤ B ≤ 10000).

Saída
A saída deve ser a lista de países, com suas medalhas de ouro, prata e bronze, 
na ordem correta do quadro de medalhas, com as nações mais premiadas aparecendo primeiro.
*/

#include <iostream>
#include <algorithm>

using namespace std;

struct pais{
    int O;
    int P;
    int B;
    string nome;
};


bool ordena(const pais &a1, const pais &a2){
    return (a1.O > a2.O) ||
           (a1.O == a2.O && a1.P > a2.P) ||
           (a1.O == a2.O && a1.P == a2.P && a1.B > a2.B) ||
           (a1.O == a2.O && a1.P == a2.P && a1.B == a2.B && a1.nome < a2.nome);
        }


int main(){
    int N;
    cin >> N;
    pais olimpiadas[N];
    for(int i=0;i<N;i++){
        cin >> olimpiadas[i].nome >> olimpiadas[i].O >> olimpiadas[i].P >> olimpiadas[i].B;
    };

    sort(olimpiadas,olimpiadas+N,ordena);

    for(int i=0;i<N;i++){
        cout << olimpiadas[i].nome << " "
             << olimpiadas[i].O << " "
             << olimpiadas[i].P << " "
             << olimpiadas[i].B << endl;
    }
    return 0;
}