#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;    
    stack<int> pilha;
    for (int i = 0; i < N; ++i) {
        string comando;
        cin >> comando;
        char c = comando[0];
        // Verifica se a linha contém um número inteiro
        if(isdigit(c)){
            int valor = stoi(comando);
            pilha.push(valor);
        }else{
            // Caso não seja número, é um comando
            if (comando == "A") { // Soma
                if (pilha.size() >= 2) {
                    int b = pilha.top(); pilha.pop();
                    int a = pilha.top(); pilha.pop();
                    pilha.push(a + b);
                }
            } 
            else if (comando == "S") { // Subtração
                if (pilha.size() >= 2) {
                    int a = pilha.top(); pilha.pop();
                    int b = pilha.top(); pilha.pop();                    
                    pilha.push(a - b);
                }
            } 
            else if (comando == "M") { // Multiplicação
                if (pilha.size() >= 2) {
                    int b = pilha.top(); pilha.pop();
                    int a = pilha.top(); pilha.pop();
                    pilha.push(a * b);
                }
            }
            else if (comando == "P") { // Impressão
                if (!pilha.empty()) {
                    cout << pilha.top() << endl;
                    pilha.pop();
                }
            }
        }
    }

    return 0;
}
