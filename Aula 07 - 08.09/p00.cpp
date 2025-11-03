// Exemplo 1 usando std::sort

#include <iostream>
#include <algorithm> // para utilizar o sort
#include "vetor.cpp"


int main(){

    const int N = 100000;
    //Ordenação
    std::sort(vet,vet+N);

    for(int i=0; i<N; i++){
        std::cout << vet[i] << std::endl;
    }


    return 0;
}