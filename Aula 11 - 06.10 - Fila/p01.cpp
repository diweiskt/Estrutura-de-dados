#include <iostream>
#include <queue>

using namespace std;

struct pessoa{
    string nome;
    string email;
};

int main(){

    queue<pessoa> fila;
    pessoa aux; 
    /* A variavel AUX servirá para coletar as informações lidas e posteriormente inserir na fila
    IMPORTANTE: Todo novo valor irá sobreescrever a variavel AUX*/

    while(true){
        cout << "Digite o nome ou FIM para sair\n";
        getline(cin,aux.nome);  //lê o nome do teclado
        if(aux.nome == "FIM")
            break;
        cout << "Email: " << endl;
        getline(cin,aux.email); //lê o email do teclado
        fila.push(aux);
        cout << "T: " << fila.size() << endl;
    }

    while(!fila.empty()){
        cout << fila.front().nome << " " << fila.front().email << endl;
        fila.pop();
    }



    return 0;
}