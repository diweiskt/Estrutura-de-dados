#include <iostream>

using namespace std;

int main(){

    float *v = new float[5]; //aloca um array de 5 float
    float soma;

    for(int i=0; i<5; i++){
        cin >> v[i];
        soma+=v[i];
    };

    cout << "SOMA: " << soma << endl;
    delete[] v; //deleta todo o array por isso 'delete[] v' e nao 'delete v'


    return 0;
}