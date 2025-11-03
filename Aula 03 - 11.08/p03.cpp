//Definir o tamanho do 
//vetor de forma dinamica
#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Digite o tamanho do vetor\n";
    cin >> n;
    int vetor[n];

    cout <<"Digite " << n << " valores\n";
    for(int i=0; i<n;i++){
        cin >> vetor[i];
    }

    cout << "Valores:\n";
    for(int i=0; i<n;i++){
        cout << vetor[i] << endl;
    }
    return 0;

}