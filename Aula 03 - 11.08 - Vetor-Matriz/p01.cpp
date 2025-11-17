#include <iostream>
using namespace std;

int main(){
    int vet[6];
    cout << "Informe 6 valores: \n";
    for(int i=0; i<6; i++){
        cin >> vet[i];
    } 

    cout << "Valores:\n";
    //Exibimos somente os valores
    for(int i=0; i<6; i++){
        cout << vet[i] << endl;
    }

    //Exibir o vetor em ordem reversa
    cout << "Ordem reversa:\n";
    for(int i=5; i>=0; i--){
        cout << vet[i] << endl;
    }
    //Exibir os valores e os indices do vetor
    for(int i=0; i<6; i++){
        cout << "Vet[" << i<<"]= " << vet[i] << endl;
    }
    ///Exibir um indice específico
    cout << vet[3];


    return 0;
}