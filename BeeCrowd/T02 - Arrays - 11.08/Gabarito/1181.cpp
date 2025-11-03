#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int L;
    char T;
    float M[12][12],soma;
    cin >> L >>T;
    for (int i = 0; i<12; i++){
        for (int j = 0; j<12; j++){
            cin >> M[i][j];
        }
    }    
    soma = 0;  
    for (int j = 0; j<12; j++){
        soma = soma + M[L][j];
    }
    if(T=='S')
        cout << fixed << setprecision(1) << soma << endl;
    else
        cout << fixed << setprecision(1) << soma/12 << endl;    
    return 0;
}