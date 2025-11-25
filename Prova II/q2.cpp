// nome
// matricula

#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<float> pilha;
    float entrada;
    
    while(true){
        cin >> entrada;
        if(entrada == -1){
            cout << "Fim com tamanho da pilha = " << pilha.size() << endl;
            break;
        }
        if(entrada <= 100){
            cout << "Transação R$ " << entrada << " registrada." << endl;
            pilha.push(entrada);
        }
        if(entrada > 100){
            float soma;
            soma = pilha.top() + entrada;
            pilha.pop();
            pilha.push(soma);
            cout << "Valor R$ " << soma << " inserido na pilha" << endl;
        }
    }

    return 0;
}