#include <iostream>
#include <algorithm> // binary_search
using namespace std;

int main() {
    const int N = 50;
    int v[N] = {
        5832, 10293, 4532, 112, 9283, 3412, 7712, 1299, 9812, 44,
        6333, 231, 543, 8999, 2345, 7543, 222, 4501, 345, 1201,
        8123, 909, 6600, 321, 4789, 902, 1187, 745, 1999, 3100,
        8890, 781, 4432, 212, 9034, 777, 6981, 134, 9754, 64,
        8023, 120, 501, 3201, 889, 4444, 9099, 623, 7812, 234
    };



    sort(v,v+N); // Primeiro temos que ordenar!! A busca binária apenas funciona se os dados estiverem ordenados
    
    int x = -321;

    if (binary_search(v, v+N, x))   ///Retorna verdadeiro se foi encontrado e falso se não foi
        cout << "Valor encontrado!" << endl;
    else
        cout << "Valor nao encontrado!" << endl;

    return 0;
}
