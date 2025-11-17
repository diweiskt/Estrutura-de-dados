#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

float media(float soma,int tam){
    return soma/tam;
}

int main(){
    int M,seco,moderado,intenso;
    seco = moderado = intenso = 0;
    cin >> M;
    float meses[M];  
    
    float soma =0;
    //Leitura dos dados
    for(int i=0;i<M;i++){
        cin >> meses[i];
    }
    for(int i=0;i<M;i++){
       if(meses[i]<50){
            seco++; //seco = seco +1;
       }else if(meses[i] >=50 && meses[i]<=150){
            moderado++;
       }else{
            intenso++;
       }
       soma=soma+meses[i];
    }
    sort(meses, meses+M);

    cout << "Meses com seca: " << seco << endl;     
    cout << "Meses com chuva moderada: " << moderado << endl;
    cout << "Meses com chuva intensa: " << intenso << endl;
    cout << "Menor índice de chuva: " << meses[0] << endl;
    cout << "Menor índice de chuva: " << meses[M-1] << endl;
    cout << "Média de chuva mensal: " << fixed << setprecision(1) << media(soma,M);
   
    return 0 ;
}