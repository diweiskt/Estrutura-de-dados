/*
Simulação de Navegador (Voltar e Avançar)
Implemente um programa em C++ que simule o histórico de um navegador web usando duas pilhas:

Uma pilha para o histórico de páginas visitadas (para voltar)

Uma pilha para o histórico de páginas que podem ser avançadas

O programa deve processar comandos:

VISIT <URL> → Visita uma nova página e limpa a pilha de avanço.

BACK → Volta para a página anterior (se houver).

FORWARD → Avança para a próxima página (se houver).

SHOW → Exibe a página atual.

Se não houver página para voltar ou avançar, exiba SEM HISTORICO.


Entrada: 
VISIT google.com
VISIT uol.com
SHOW
BACK
SHOW
FORWARD
SHOW

Saída:
uol.com
google.com
uol.com
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){

    stack<string> atual;
    stack<string> avancar;
    string comando, URL;

    while(true){
        cin >> comando;

        if(comando == "SAIR"){
            break;
        }
        if(comando == "VISIT"){
            cin >> URL;
            atual.push(URL);
            while (!avancar.empty()) {
                avancar.pop();
            }
        }else if(comando == "BACK"){
            if(atual.size() > 1) {
                avancar.push(atual.top());
                atual.pop();
                cout << " ";
                cout << atual.top() << endl;
            }
            else{
                cout << " ";
                cout << "SEM HISTORICO" << endl;
            }
        }else if(comando == "FORWARD"){
            if(!avancar.empty()){
                atual.push(avancar.top());
                avancar.pop();
                cout << " ";
                cout << atual.top() << endl;
            }
            else{
                cout << "SEM HISTORICO" << endl;
            }
        }else if(comando == "SHOW"){
            if(!atual.empty()){
                cout << " ";
                cout << atual.top() << endl;
            }
            else{
                cout << " ";
                cout << "SEM HISTORICO" << endl;
            }
        }
    }

    return 0;
}