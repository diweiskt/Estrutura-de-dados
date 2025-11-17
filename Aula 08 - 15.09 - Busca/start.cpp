///Exemplo busca sequencial

#include <iostream>
#include <cstdlib>   
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


    /// EXERCÍCIO 1: FAZER UMA BUSCA POR UM NUMERO. SE ELE EXISTIR EXIBIR SEU INDICE NO VETOR, CASO CONTRÁRIO EXIBIR="NÃO EXISTE"  
    
    int numero;
    bool encontrado = false;
    cout << "Digite o valor que deseja buscar: ";
    cin >> numero;
    
    for(int i=0; i<N;i++){
        if(v[i] == numero){
            cout << numero << " encontrado no índice " << i << "." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << numero << " não existe no vetor." << endl;
    }

    return 0;
}