#include <iostream>
#include <algorithm>
#include "vetor.cpp"



const int N = 100000;

int main()
{
    // Ordenação
    std::sort(vet, vet + N);

    //  Saída
    for (int i = 0; i < N; i++)
         std::cout << vet[i] << '\n';

    return 0;
}
