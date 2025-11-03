#include <iostream>
#include <stack>

using namespace std;
int main(){

    //Cria uma pilha de strings
    // inicialmente vazia
    stack<string> pilha;
    cout << "Tamanho: " << pilha.size() << endl;

    pilha.push("A");
    pilha.push("B");
    pilha.push("C");
    
    cout << "Tamanho: " << pilha.size() << endl;
    cout << "Topo: " << pilha.top() << endl;

    do{
        cout << "Tamanho: " << pilha.size() << endl;
        cout << "Topo: " << pilha.top() << endl;
        pilha.pop(); // Remover o valor que esta no topo

    }while(!pilha.empty());
    //while(pilha.size()>0);

    /*Executa enquanto a pilha 
    NÃO estiver vazia, ou seja, ter algum 
    elemento;
    ! é a negação da afirmação
    */

   
 
    return 0;
}