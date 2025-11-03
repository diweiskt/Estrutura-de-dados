#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char operacao;
    double M[12][12];
    double valor = 0.0;
    
    cin >> operacao;    
     
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }
    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                // j > i acima da diagonal principalç 
                // i+j = abaixo da diagonal secundária
                if(j < i && i+j < 11)                   
                     valor = valor + M[i][j];            
            }
    }
   
   if(operacao == 'S')
        cout << fixed << setprecision(1) << valor << endl;
    else
        cout << fixed << setprecision(1) << valor/12 << endl;

    return 0;
}