//Exemplo de passagem de valor por parametro e por referencia

#include <iostream>

using namespace std;

//Por parametro 'float a ' = Cria uma copia na memoria
//Por referencia: 'float &a'= A variavel da função vai referenciar a variavel passada
 // -- Referenciar o endereço de memoria

void adiciona(float &a, float &b){
    a+=b;  // a = a+b;
    cout << "Na função adiciona: "<< a <<endl;
}

int main(){
    float x=10, y=0.5;
    adiciona(x,y);
    cout <<"Na main: " << x << endl;
    return 0;
}