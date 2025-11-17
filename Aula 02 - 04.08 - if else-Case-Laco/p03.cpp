// Exemplo de switch case
#include <iostream>

using namespace std;

int main(){
    int dia;
    cout << "Digite um número (1-7) para o dia da semana: ";
    cin >> dia;

    switch(dia){
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda - feira" << endl;
            break;
        case 3:
            cout << "Terça -feira" << endl;
            break;
        case 4:
            cout << "Quarta -feira" << endl;
            break;
        case 5:
            cout << "Quinta -feira" << endl;
            break;
        case 6:
            cout << "Sexta -feira" << endl;
            break;
        case 7:
            cout << "Sábado" << endl;
            break;
        
        default:
            cout << "Número inválido. Por favor, insira um valor entre 1 e 7." << endl;
    }

    return 0;
}