/*
Problema

O problema consiste em implementar um validador de expressões matemáticas formadas por chaves, parênteses e 
colchetes, utilizando uma pilha. O programa deve ser capaz de verificar se uma expressão está bem formada, 
ou seja, se todos os símbolos de abertura e fechamento correspondem corretamente. A expressão pode ter qualquer 
quantidade de pares de chaves, parênteses e colchetes, desde que respeitadas as seguintes restrições:

Para cada símbolo de abertura deve existir o símbolo de fechamento correspondente e vice-versa: {}, [], ()
Colchetes não podem aparecer dentro de parênteses
Chaves não podem aparecer dentro de colchetes ou parênteses
Outros caracteres podem aparecer na expressão, não interferindo na avaliação.

Entrada
O programa deve ler uma linha de texto contendo uma expressão.

Saída
O programa deve exibir "Bem formada" ou "Mal formada" dependendo do caso

Dica: p02.cpp irá auxiliar na leitura dos dados

            Exemplos

    Entrada	               Saída
()	                    Bem formada
( () () ( () ) )	    Bem formada
[] {}	                Bem formada
{[()][()]}	            Bem formada
{[()]}abc	            Bem formada
{{[(())]}{[()]}}	    Bem formada
)(())	                Mal formada
[)]	                    Mal formada
{(})	                Mal formada
{[()]}(	                Mal formada
{[()]{}	                Mal formada
{[()]}abc(	            Mal formada
([])	                Mal formada
{[([])]} 	            Mal formada
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string linha;

    while (getline(cin, linha)) {
        stack<char> pilha;
        bool malFormada = false;

        for (char t : linha) {
            if (t == '(' || t == '[' || t == '{') {
                pilha.push(t);
            } 
            else if (t == ')' || t == ']' || t == '}') {
                if (pilha.empty()) {
                    malFormada = true;
                    break;
                }
                else if ((t == ')' && pilha.top() == '(') || 
                         (t == ']' && pilha.top() == '[') || 
                         (t == '}' && pilha.top() == '{')) {
                    pilha.pop();
                } else {
                    malFormada = true;
                    break;
                }
            }
        }

        if (!malFormada && pilha.empty())
            cout << "Bem formada" << endl;
        else
            cout << "Mal Formada" << endl;
    }

    return 0;
}
