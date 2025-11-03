/*
Área Esquerda

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na 
área esquerda da matriz, conforme ilustrado abaixo (área verde).




Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação 
(Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char O;
    double M[12][12];
    double soma = 0.0;
    int cont = 0;

    cin >> O;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (j < i && j < 11 - i) {
                soma += M[i][j];
                cont++;
            }
        }
    }

    if (O == 'M') soma /= cont;

    cout << fixed << setprecision(1) << soma << endl;

    return 0;
}