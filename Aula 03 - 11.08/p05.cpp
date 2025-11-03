//Exemplo 01 de matrizes
#include <iostream>
using namespace std;

int main(){
    float m[3][3]{
        //0    1    2
        {1.5, 0.4, 9.1},  //0
        {0.6, 1.4, 10.2}, //1
        {8.7, 1.7, 15.3}};//2

        cout << "Antes: " << m[2][0] << endl; //m[linha][coluna] 
        m[2][0] = m[2][0] * 2;
        cout << "Depois: " << m[2][0] << endl; //m[linha][coluna] 

    return 0;
}