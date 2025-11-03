#include <iostream>
#include <algorithm>

using namespace std;

int maior(float indices[], int M){
    double v2;
    for(int i=0;i<M;i++){
        if(indices[i] > indices[i]){
            cin >> v2;
        }
    }
    return v2;
};

int menor(float indices[], int M){
    double v;
    for(int i=0;i<M;i++){
        if(indices[i] < indices[i]){
            cin >> v;
        }
    }
    return v;
};

int main(){

    int M;
    cin >> M;
    int seca, moderadas, intensas;
    float indices[M];
    double v1 = maior(indices, M);
    double v2 = menor(indices, M);

    for(int i=0;i<M;i++){
        cin >> indices[i];
        if(indices[i] >= 50){
            moderadas++;
        }
        else if(indices[i] >= 150){
            intensas++;
        }
        else{
            seca++;
        }
    };

    for(int i=0;i<M;i++){
    cout << "Meses com seca: " << seca << endl;
    cout << "Meses com chuva moderada: " << moderadas << endl;
    cout << "Meses com chuva intensa: " << intensas << endl;
    cout << "Menor índice de chuva: " << v2 << endl;
    cout << "Maior índice de chuva: " << v1 << endl;
    cout << "Média de chuva mensal: " << endl;
    }

    return 0;
}
