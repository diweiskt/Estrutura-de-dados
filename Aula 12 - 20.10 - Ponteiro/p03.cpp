#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int *p = &a; // P aponta para o end. de A

    int **pp; // declarou um ponteiro para ponteiro

    pp = &p; //atribui o end. do ponteiro P ao ponteiro de ponteiro PP

    cout << pp << " "     //imprime o endereço de 'p' por meio do ponteiro PP
         << *pp << " "    //imprime o valor apontado por 'pp' que é o end. da variavel A (Valor de 'P')  
         << **pp << endl; //o valor apontado duas vezes por 'pp', ou seja o valor de 'A'

    return 0;
}