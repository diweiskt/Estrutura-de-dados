#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int cod, itens;
    float valor;
    cin >> cod >> itens;

    switch(cod){

        case 1:
            valor = 4.0 *itens; 
            break;

        case 2:
            valor = 4.50 *itens;
            break;
        
        case 3:
            valor = 5.0 *itens;
            break;

        case 4: 
            valor = 2.0 *itens;  
            break;

        case 5:
            valor = 1.50 *itens;
            break;
    }

    cout << "Total: R$ " << fixed << setprecision(2) <<valor <<endl;
    return 0;
}