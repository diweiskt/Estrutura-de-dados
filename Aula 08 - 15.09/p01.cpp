//Exemplo 1 busca binária

#include <iostream>
#include <algorithm> 
using namespace std;

int main(){

    const int N = 50;
    int v[N] = {
        5832, 10293, 4532, 112, 9283, 3412, 7712, 1299, 9812, 44,
        6333, 231, 543, 8999, 2345, 7543, 222, 4501, 345, 1201,
        8123, 909, 6600, 321, 4789, 902, 1187, 745, 1999, 3100,
        8890, 781, 4432, 212, 9034, 777, 6981, 134, 9754, 64,
        8023, 120, 501, 3201, 889, 4444, 9099, 623, 7812, 234
    };


    sort(v,v+N);
     
    int numero;
    cout << "Digite o valor que deseja buscar: ";
    cin >> numero;

    int inicio = 0;
    int fim = N - 1;
    bool encontrado = false;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (v[meio] == numero) {
            cout << "Valor encontrado na posicao " << meio << endl;
            encontrado = true;
            break;
        }
        else if (v[meio] < numero) {
            inicio = meio + 1; // procura na metade direita
        }
        else {
            fim = meio - 1; // procura na metade esquerda
        }
    }

    if (!encontrado)
        cout << "Valor nao encontrado!" << endl;

    

    return 0;
}