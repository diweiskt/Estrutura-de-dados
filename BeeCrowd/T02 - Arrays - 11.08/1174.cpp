/*
Seleçao em Vetor I

Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

Entrada
A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Saída
Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", onde i é a posição do vetor e x é o valor armazenado na posição, com uma casa após o ponto decimal.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    const int TAM = 100;
    float A[TAM];

    for (int i=0; i<TAM; i++) {
        cin >> A[i];
    }

    for (int i=0; i<TAM; i++) {
        if (A[i] <= 10) {
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
    
    return 0;
}