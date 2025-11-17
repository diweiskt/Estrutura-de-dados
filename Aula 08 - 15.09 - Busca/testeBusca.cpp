#include <iostream>
#include <algorithm>   // sort
#include <cstdlib>     // rand, srand
#include <ctime>       // time
#include <chrono>
#include <iomanip>     // fixed, setprecision

using namespace std;
using namespace chrono;

int buscaSequencial(const int v[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (v[i] == x) return i;
    return -1;
}

int buscaBinaria(const int v[], int n, int x) {
    int ini = 0, fim = n - 1;
    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2;
        if (v[meio] == x) return meio;
        if (v[meio] < x) ini = meio + 1;
        else             fim = meio - 1;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int N = 1'000'000;  // 1 milhão de elementos
    static int v[N];

    srand((unsigned)time(nullptr));

    // Preenche com números aleatórios entre 1 e 10 milhões
    for (int i = 0; i < N; i++)
        v[i] = rand() % 10'000'000 + 1;

    int x = v[N / 2]; // pega um número existente

    cout << "Teste com " << N << " numeros aleatorios\n";
    cout << "Numero buscado: " << x << "\n\n";

    cout << fixed << setprecision(3);

    // --- Busca Sequencial ---
    auto t0 = high_resolution_clock::now();
    int posSeq = buscaSequencial(v, N, x);
    auto t1 = high_resolution_clock::now();
    double tempoSeq_us = duration<double, micro>(t1 - t0).count();

    cout << "Busca Sequencial -> "
         << (posSeq != -1 ? "Encontrado" : "Nao encontrado")
         << " em " << tempoSeq_us << " microssegundos\n";

    // --- Ordenação ---
    auto ts0 = high_resolution_clock::now();
    sort(v, v + N);
    auto ts1 = high_resolution_clock::now();
    double tempoSort_us = duration<double, micro>(ts1 - ts0).count();

    cout << "Tempo de ordenacao: " << tempoSort_us << " microssegundos\n";

    // --- Busca Binária ---
    auto tb0 = high_resolution_clock::now();
    int posBin = buscaBinaria(v, N, x);
    auto tb1 = high_resolution_clock::now();
    double tempoBin_us = duration<double, micro>(tb1 - tb0).count();

    cout << "Busca Binaria    -> "
         << (posBin != -1 ? "Encontrado" : "Nao encontrado")
         << " em " << tempoBin_us << " microssegundos\n";

    // --- Repetição para estabilizar a medição ---
    const int REPS = 100;
    volatile int sink = 0;

    auto r0 = high_resolution_clock::now();
    for (int i = 0; i < REPS; i++) sink += buscaSequencial(v, N, x);
    auto r1 = high_resolution_clock::now();
    double repSeq_us = duration<double, micro>(r1 - r0).count();

    auto r2 = high_resolution_clock::now();
    for (int i = 0; i < REPS; i++) sink += buscaBinaria(v, N, x);
    auto r3 = high_resolution_clock::now();
    double repBin_us = duration<double, micro>(r3 - r2).count();

    cout << "\nRepeticoes (" << REPS << "x):\n";
    cout << "Sequencial -> " << repSeq_us << " us ("
         << repSeq_us / REPS << " us por busca)\n";
    cout << "Binaria    -> " << repBin_us << " us ("
         << repBin_us / REPS << " us por busca)\n";

    if (sink == 123456789) cout << ""; // evita otimizacao do compilador

    return 0;
}
