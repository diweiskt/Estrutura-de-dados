#include <iostream>

using namespace std;

int main(){
    
    int n;
    int x, y, aux;
    int soma;
    
    cin >> n;
    
    while(n>0){
        cin >> x >> y;
                
        //Se o X for maior que o Y, inverte os valores
        if(x > y){
            aux = x;
            x = y;
            y = aux;
        }
        //Realiza a soma dos impares
        soma = 0;
        for(int i = x+1; i < y; i++){
            if(i%2 != 0) {
                soma += i;
            }
                       
        }
            cout << soma << endl;
            n--;
    }
    return 0;
}