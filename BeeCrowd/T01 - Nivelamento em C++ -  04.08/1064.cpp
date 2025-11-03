/*
Positivo e Média

Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a, b, c, d, e, f;
    int positivos = 0;
    double soma = 0;

    cin >> a >> b >> c >> d >> e >> f;

    if (a > 0 || b > 0 || c > 0 || d > 0 || e > 0 || f > 0) {
        if (a > 0) { positivos++; soma += a; }
        if (b > 0) { positivos++; soma += b; }
        if (c > 0) { positivos++; soma += c; }
        if (d > 0) { positivos++; soma += d; }
        if (e > 0) { positivos++; soma += e; }
        if (f > 0) { positivos++; soma += f; }

        cout << positivos << "valores positivos" << endl;

        double media = soma / positivos;
        cout << fixed << setprecision(1);
        cout << media << endl;

    } else {
        exit(0);
    }

    return 0;
}