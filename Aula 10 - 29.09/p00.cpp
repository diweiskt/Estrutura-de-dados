#include <iostream>
#include <stack> //container pilha std

using namespace std;

int main(){
    //Criamos uma pilha do tipo string, inicialmente vazia
    stack<string> pilha;

    //Retorna o tamanho da pilha
    cout << "Tamanho: " << pilha.size() << endl;
    cout << endl;

    //push serve para inserir valores no topo da pilha
    pilha.push("A");
    pilha.push("B");
    pilha.push("C");

    //Retorna o tamanho da pilha depois dos valores adicionados
    cout << "Tamanho: " << pilha.size() << endl;
    //Retorna o o valor do topo da pilha(ultimo valor inserido)
    cout << "Topo: " << pilha.top() << endl;
    cout << endl;

    do{
        cout << "Tamanho: " << pilha.size() << endl;
        cout << "Topo: " << pilha.top() << endl;
        pilha.pop(); // Remove o valor que esta no topo
        cout << endl;

    }while(!pilha.empty()); //while(pilha.size() > 0)
        /*Executa enquanto a pilha não estiver vazia, ou seja, ter algum elemento
          ! é a negação da afirmação*/

    return 0;
}