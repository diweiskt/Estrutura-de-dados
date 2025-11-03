/*
Soma de Ímpares Consecutivos II

Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.
*/

#include <iostream>

using namespace std;

int soma_impares(int x, int y) {
    if (x > y) {
        swap(x, y);
    }
    
    int soma = 0;
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {

    int N;

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;
        
        int resultado = soma_impares(X, Y);
        cout << resultado << endl;
    }

    return 0;
}
