#include <iostream>
#include <cstring>

using namespace std;

int main(){

    string nome;

    cout << "Digite o seu nome completo: ";
    //cin >> nome;  ENTRADA ATÉ O ESPAÇO EM BRANCO
    getline(cin,nome); // Obtem toda a linha

    cout << "Meu nome é: " << nome << endl;

    return 0;
}