//Exemplo 2 de if e else
#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Informe um valor inteiro: ";
    cin >> n;
    if(10 < n && n < 20){
        cout << "Dentro do range" << endl;
    }else{
        cout << "Fora do range" << endl;
    }
    return 0;
}