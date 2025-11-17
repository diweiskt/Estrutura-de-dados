#include <iostream>

using namespace std;

//Template de função para trocar dois valores de qualquer tipo T
template <typename T>
void swapT(T &a, T &b){
    T aux = a;
    a = b;
    b = aux;
}

int main() {
    
    // Testamos a função usando INTEIROS
    int x = 10, y = 20;
    cout << "" << endl;
    cout << "INTEIROS" << endl;
    cout << "Antes: " << "x: " << x << "  y: " << y << endl;
    
    swapT(x, y);

    cout << "Depois: " << "x: " << x << "  y: " << y << endl;
    cout << "" << endl;

    // Testamos a função usando FLOAT
    float a = 0.6, b = 1.4;
    cout << "FLOAT" << endl;
    cout << "Antes: " << "a: " << a << "  b: " << b << endl;
    
    swapT(a, b);

    cout << "Depois: " << "a: " << a << "  b: " << b << endl;
    cout << "" << endl;

    // Testamos a função usando STRING
    string s1 = "jaca", s2 = "re";
    cout << "STRING" << endl;
    cout << "Antes: " << "s1: " << s1 << "  s2: " << s2 << endl;
    
    swapT(s1, s2);

    cout << "Depois: " << "s1: " << s1 << "  s2: " << s2 << endl;
    cout << "" << endl;
    return 0;
}