//primeiro exemplo com TDD
//assert - Verificar se a condição satisfaz o resultado esperado.

#include <iostream>
#include "funcoes.cpp"
#include <cassert>

using namespace std;

int main(){

    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(2) == 2);
    assert(fatorial(3) == 6);
    assert(fatorial(4) == 24);
    assert(fatorial(5) == 120);
    assert(fatorial(6) == 720);

    cout << "Funcionou!!!\n";

    return 0;
}
