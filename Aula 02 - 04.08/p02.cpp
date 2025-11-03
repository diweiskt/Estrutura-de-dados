//Exemplo de operador ternário
#include <iostream>

using namespace std;

int main(){
    double a,b;
    cout << "Informe 2 valores: ";
    cin >> a >> b;

    //Condição  ? valorse for verdadeiro  : o valor se for falso
    double maior = (a > b ? a : b);
    
    cout << "Maior: " << maior << endl;

    /*
    if(a > b){
        maior = a
    }else{
        maior = b;
    }
    */

    
    return 0;
}