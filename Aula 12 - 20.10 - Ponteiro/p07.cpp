#include <iostream>

using namespace std;

void foo(){
    static int n=0; //alocação estatica de memoria
    //como é estatica nao atribui nem o valor 0. usa a ja criada
    n++;
    cout << n << endl;
};

int main(){
    foo();
    foo();
    foo();



    return 0;
}