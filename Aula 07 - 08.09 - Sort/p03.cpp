//Primeiro exemplo de struct

#include <iostream>

using namespace std;

// criamos a nossa struct
struct aluno{
    int matricula;
    string nome;
    float nota;
};

int main(){
    //declaração da variável do tipo aluno
    aluno fulano,ciclano;

    //inseriu os valores
    //fulano.matricula = 11111;
    //fulano.nome = "João";
    //fulano.nota = 8.7;
    
    ciclano = {12828, "Maria", 8.9};

    fulano = {11111, "Joao", 8.7};

    //exibir os valores
    cout << "Matricula: " << fulano.matricula << endl;
    cout << "Nome:  " << fulano.nome << endl;
    cout << "Nota: " << fulano.nota << endl;

    return 0;
}