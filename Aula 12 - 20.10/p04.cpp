// Ponteiro para struct
#include <iostream>

using namespace std;

struct aluno{
    int matricula;
    string nome;
};

int main(){

    aluno fulano = {909090, "Linux Trovalds"};
    aluno *p = &fulano;

    cout << fulano.nome << endl; //acesso direto na memoria
    cout << p << " " << p->nome << endl; //acesso indireto
    //quando usamos ponteiros para acessar a variavel da struct utilizamos '->' e não '.'  ACESSO INDIRETO

    p->nome = "Bill Gates";
    cout << p << " " << p->nome << endl; // acesso indireto


    return 0;
}