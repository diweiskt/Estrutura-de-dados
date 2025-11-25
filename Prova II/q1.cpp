// Diwei V Nicolay
// 193014

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;


bool cresc(int a, int b){
    return(a > b);
};

bool decre(int a, int b){
    return(a < b);
}


int main(){

    vector<int> pares, impares;
    int entrada;
    float somaI = 0;
    float somaP = 0;

    while(true){
        cin >> entrada;
        if(entrada == 0){
            cout << "Tamanho do container de pares: " << pares.size() << endl;

            cout << "Tamanho do container de impares: " << impares.size() << endl;

            cout << "Valores pares em ordem decrescente: ";
            sort(pares.begin(), pares.end(), cresc);
            for(auto n:pares){
                cout << n << " ";
            }
            cout << endl;

            cout << "Valores impares em ordem crescente: ";
            sort(impares.begin(), impares.end(), decre);
            for(auto n:impares){
                cout << n << " ";
            }
            cout << endl;

            for(auto n:impares){
                somaI=somaI+n;
            }
            cout << "Media dos valores impares: " << fixed << setprecision(2) << somaI/impares.size() << endl;

            for(auto n:pares){
                somaP=somaP+n;
            }
            cout << "Media dos valores pares: " << fixed << setprecision(2) << somaP/pares.size() << endl;
            break;
        }

        if(entrada < 0){
            cout << "Somente Entradas Positivas!" << endl;
            break;
        }

        if(entrada% 2 == 0){
            pares.push_back(entrada);
        }
        else{
            impares.push_back(entrada);
        }
    }

    return 0;
}
