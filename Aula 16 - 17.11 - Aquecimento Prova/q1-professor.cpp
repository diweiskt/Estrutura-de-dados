#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
int main() {
    list<double> valores;   
    double valor;
    do {
        cin >> valor;
        if (valor != 0.0 && find(valores.begin(), valores.end(), valor) == valores.end()) {
            valores.push_back(valor);
        }

    } while (valor != 0.0);

 
    cout << "Tamanho:" << valores.size() << endl;
    
    list<double> aux =  valores;
    aux.sort([](double a, double b){return a<b;});
     cout << "Maior valor: " << aux.back()<< endl;
    cout <<"Valores: ";
     for(auto n: valores){
        cout << n << " ";
    }
    cout << endl;
    cout <<"Reverso: ";
       for(auto it=valores.rbegin(); it!=valores.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}