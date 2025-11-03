#include <iostream>
#include <algorithm>

using namespace std;

bool compara(double a, double b){
    return (a>b);
}

int main(){

    int N = 6;
    double v[N] = {1.5, 0.6, 3.0, 9.5, 3.1, 2.9};

    //sort(v,v+N); // por padrão ordenação crescente 
    sort(v,v+N,compara);
    
    for(int i=0; i<N; i++){
        cout << v[i] << " ";
    }

    return 0;
}