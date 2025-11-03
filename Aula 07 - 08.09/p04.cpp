#include <iostream>
#include <algorithm>
#include <iomanip>   //fixed, setprecision, setw,setfill

using namespace std;

// Criamos a nossa struct ALUNO
struct aluno{
    int matricula;
    string nome;
    float nota;
};

const int N=5; //tamanho do vetor;


//Nossa função de ordenação que será utilizada como critério na função SORT

//Criamos os filtros de ordenação, primeiro por nota, depois por nome em ordem alfabético e por último por matricula em ordem crescente
bool ordena(const aluno &a1, const aluno &a2){
     return (a1.nota > a2.nota) ||                                 /// Se a nota for maior ja retorna
            (a1.nota == a2.nota && a1.nome < a2.nome) ||           ///Se a nota for igual, testa o nome em ordem alfabética
            (a1.nota == a2.nota && a1.nome == a2.nome && a1.matricula < a2.matricula); /// Se a nota e os nomes forem iguais, faz a compartação pela matricula
       
}

int main(){
    aluno turma[N] ={
        {909090,"João",8.1},
        {808080,"Maria",8.1},
        {707070,"Luan", 10},
        {505050,"Maria", 8.1},
        {303090,"Cláudia", 9.4}
    };

    sort(turma,turma+N,ordena);


    //setw, setfill, right  servem apenas para melhorar a visualização da saida
    for(int i=0; i<N; i++){
        cout << setw(8)  << setfill('0') << turma[i].matricula <<  " "
             << setw(10) << setfill(' ') << left << turma[i].nome << " "
             << setw(4)  << right << fixed << setprecision(1) << turma[i].nota
             << endl;
    }


    return 0 ;
}