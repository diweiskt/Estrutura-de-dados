#include <iostream>
#include <cassert>
#include "funcoes.cpp"

using namespace std;

int main() {    
    assert(primo(2)==true);
    assert(primo(3)==true);
    assert(primo(41)==true);
    assert(primo(67)==true);
    assert(primo(613)==true);
    assert(primo(997)==true);

    assert(primo(1)==false);
    assert(primo(4)==false);
    assert(primo(10)==false);
    assert(primo(15)==false);
    assert(primo(21)==false);
    assert(primo(99)==false);
    cout << "Ok\n";
    return 0;
}