/*
Lanche

Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. 
A seguir, calcule e mostre o valor da conta a pagar.

    Código      Especificação       Preço
      1        Cachorro Quente     R$ 4.00
      2           X-Salada         R$ 4.50
      3           X-Bacon          R$ 5.00
      4        Torrada Simples     R$ 2.00
      5         Refrigerante       R$ 1.50 

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int cod, quant;
    double valor = 0;

    cin >> cod >> quant;

    if (cod == 1) valor = 4.0;
    else if (cod == 2) valor = 4.5;
    else if (cod == 3) valor = 5.0;
    else if (cod == 4) valor = 2.0;
    else if (cod == 5) valor = 1.5;
    else {
        cout << "Código Inválido";
        exit(0);
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << (quant * valor) << endl;

    return 0;
}