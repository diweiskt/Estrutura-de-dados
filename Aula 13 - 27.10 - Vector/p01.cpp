//Capacidade de tamanho são caracteristicas diferente
//Capacity() - É a capacidade momentanea do vector
//Size() - É a quantidade de elementos do vector

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double> v;
    cout << "Digit 0.0 p/sair\n" << endl;
    double x;
    cout << "Tamanho: " << v.size() << " Capacidade: " << v.capacity() << endl;

    while(cin >> x && x!=0){//encerra quando o x for 0
        v.push_back(x);
        cout << endl;
        cout << "Tamanho: " << v.size() << " Capacidade: " << v.capacity() << endl;
    }

    for (int i=v.size()-1;i>=0;i--){
        cout << v[i] << endl;
    }
    return 0;
}