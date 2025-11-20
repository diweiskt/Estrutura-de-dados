/*
 Implemente um emulador de uma máquina simples que opera sobre uma pilha de dados. Essa máquina
realiza operações de empilhamento de valores inteiros, operações aritméticas básicas (adição, subtração e
multiplicação) e impressão do valor no topo da pilha.
A máquina suporta os seguintes comandos:
● Um valor inteiro: Esse valor será empilhado na pilha. Cada número inserido diretamente na entrada
deve ser empilhado.
● A: Consome os dois valores no topo da pilha, realiza a soma e empilha o resultado.
● S: Consome os dois valores no topo da pilha, realiza a subtração e empilha o resultado.
● M: Consome os dois valores no topo da pilha, realiza a multiplicação e empilha o resultado.
● P: Remove e exibe o valor do topo da pilha.
Entrada
A entrada é composta por uma primeira linha contendo um número inteiro N (2 ≤ N ≤ 100), representando a
quantidade de comandos. Nas próximas N linhas, cada linha pode conter:
● Um valor inteiro (a ser empilhado na pilha).
● Um comando, que pode ser A, S, M ou P.
Saída
Para cada comando P, exiba o valor removido do topo da pilha em uma nova linha.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<int> pilha;

    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        string comando;
        cin >> comando;
        char c = comando[0];
        // Verifica se a linha contém um número inteiro
        if(isdigit(c)){
            int valor = stoi(comando);
            pilha.push(valor);
        }
        else{
            // Caso não seja número, é um comando
            if(comando == "A"){
                if(pilha.size() >= 2){
                    int soma = pilha.top();
                    pilha.pop();
                    soma = soma + pilha.top();
                    pilha.pop();
                    pilha.push(soma);
                }
            }
            else if(comando == "S"){
                if(pilha.size() >=2){
                    int sub = pilha.top();
                    pilha.pop();
                    sub = sub - pilha.top();
                    pilha.pop();
                    pilha.push(sub);
                }
            }
            else if(comando == "M"){
                if(pilha.size() >= 2){
                    int mult = pilha.top();
                    pilha.pop();
                    mult = mult * pilha.top();
                    pilha.pop();
                    pilha.push(mult);
                }
            }
            else if(comando == "P"){
                if(!pilha.empty()){
                    cout << pilha.top() << endl;
                    pilha.pop();
                }
            }
            else{
                cout << "Comando Inválido." << endl;
            }
        }
    }

    return 0;
}

/*
#include <iostream>
#include <stack>
#include <string> // Necessário para usar stoi e string

using namespace std;

// FUNÇÃO 1: Realiza a soma (Comando A)
// Recebe a pilha por referência (&) para poder alterar seus valores
void executarSoma(stack<int>& pilha) {
    if(pilha.size() >= 2){
        int valor1 = pilha.top();
        pilha.pop();
        
        // Mantendo a sua lógica original: valor1 + valor2
        int resultado = valor1 + pilha.top();
        
        // O valor2 continua lá? Não, na sua lógica original você não dava o segundo pop, 
        // mas somava com o topo. Porém, para o resultado ir para o topo corretamente 
        // em uma calculadora de pilha padrão, costuma-se remover os dois operandos.
        // *Vou manter EXATAMENTE sua lógica original do código*:
        // (Soma o topo antigo com o novo topo e empilha o resultado em cima do novo topo)
        
        pilha.push(resultado); 
    }
}

// FUNÇÃO 2: Realiza a subtração (Comando S)
void executarSubtracao(stack<int>& pilha) {
    if(pilha.size() >= 2){
        int valor1 = pilha.top();
        pilha.pop();
        
        // Sua lógica: topo_antigo - novo_topo
        int resultado = valor1 - pilha.top();
        pilha.push(resultado);
    }
}

// FUNÇÃO 3: Realiza a multiplicação (Comando M)
void executarMultiplicacao(stack<int>& pilha) {
    if(pilha.size() >= 2){
        int valor1 = pilha.top();
        pilha.pop();
        
        int resultado = valor1 * pilha.top();
        pilha.push(resultado);
    }
}

// FUNÇÃO 4: Imprime e remove (Comando P)
void executarPrint(stack<int>& pilha) {
    if(!pilha.empty()){
        cout << pilha.top() << endl;
        pilha.pop();
    }
}

// FUNÇÃO 5: Verifica se é número
// Melhora a legibilidade do if no main
bool ehNumero(string comando) {
    // Verifica se o primeiro char é dígito OU se é um sinal de negativo seguido de dígito
    if (isdigit(comando[0])) return true;
    if (comando.size() > 1 && comando[0] == '-' && isdigit(comando[1])) return true;
    return false;
}

int main(){
    stack<int> pilha;
    int N;
    
    cin >> N;
    
    for(int i=0; i<N; i++){
        string comando;
        cin >> comando;

        // Verifica se é número usando nossa função auxiliar
        if(ehNumero(comando)){
            int valor = stoi(comando);
            pilha.push(valor);
        }
        else {
            // O main agora funciona como um "roteador" de comandos
            if(comando == "A")      executarSoma(pilha);
            else if(comando == "S") executarSubtracao(pilha);
            else if(comando == "M") executarMultiplicacao(pilha);
            else if(comando == "P") executarPrint(pilha);
            else                    cout << "Comando Invalido." << endl;
        }
    }

    return 0;
}
*/