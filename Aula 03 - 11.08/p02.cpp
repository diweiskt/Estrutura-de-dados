#include <iostream>
using namespace std;

int main(){
    //Definimos a constante
    // boa prática: nome em caixa alta
    const int N = 5;
    int vet[N];

    cout <<"Digite " << N <<" valores\n";
    for(int i=0; i<N;i++){
        cin >> vet[i];
    }
    cout <<"Valores: "<< endl; 
    for(int i=0; i<N;i++){
        cout << vet[i] << endl;
    }

    return 0;
}