#include <iostream>

using namespace std;

int main(){

    int a = 10; //variavel tipo int
    int *p; //p é um ponteiro para int

    p = &a; //p recebe o endereço de a

    cout << p << endl; //endereço de memoria
    cout << *p << endl;// * o valor apontado por p

    return 0;
}