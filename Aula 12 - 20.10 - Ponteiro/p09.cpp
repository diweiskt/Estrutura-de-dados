#include <iostream>

using namespace std;

int main(){

  /*Declara o ponteiro para o espaço de mamoria que caberá um int.
    Neste caso a unica forma de acessar esse end. será pelo ponteiro, 
    pois não temos um nome no nosso programa atrelado aquele endereço*/
    int *p = new int;
    *p = 0;
    cout << p << " " << *p << endl;
    delete p;

    //CUIDADO!!!

    //Exemplo de vazamento de memoria
    int a= 5;
    int *p1;
    p1 = &a;

    int *p2 = new int;
    *p2 = 35;
    p2 = p1;

    cout << a << " " << *p1 << " " << *p2 << endl;

    return 0;
}