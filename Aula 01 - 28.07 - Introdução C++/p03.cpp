#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float  a,b;

    cin >> a >> b;
    cout << "O resultado é:" 
         << fixed // Garantir que que seja em ponto flutuante
         << setprecision(2) //Define a precisão, casas decimais
         << a / b << endl;

    return 1;
}