/*
Escrever um programa q1.cpp que lê uma quantidade indeterminada de valores double, inserindo-os em
um container, sem aceitar duplicados (isto é, se o valor já foi inserido anteriormente, não inserir de novo).
Encerrar a entrada quando o valor digitado for 0.0 (zero), o qual não deve ser inserido. Após finalizar a
entrada, o programa deve, exibir o tamanho e o maior valor contido, exibir os dados em ordem normal e
ordem reversa.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> lista;
    double vl;

    cout << "Digite valores (0.0 para parar):\n";

    while(true){
        cin >> vl;

        if(vl == 0.0){
            cout << "Programa Encerrado!\n" << endl;
            break;
        }
        auto it = find(lista.begin(), lista.end(), vl);
        
        if(it == lista.end()){
            lista.push_back(vl);
        }
        else{
            cout << vl << " Já está contido!.\n";
        }
    }

    if(lista.empty()){
        cout << "Nenhum valor foi inserido." << endl;
    }
    else{
        auto itMaior = max_element(lista.begin(), lista.end());
        double maiorValor = *itMaior;
        cout << "Tamanho: " << lista.size() << endl;
        cout << "Maior: " << maiorValor << endl;

        cout << "Ordem Normal: ";
        for(double valor : lista){
            cout << valor << " ";
        }
        cout << "\nOrdem Reversa: ";
        for(auto it = lista.rbegin(); it != lista.rend(); ++it){
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// FUNÇÃO 1: Verifica se um valor já existe no vetor
// Retorna true se existir, false se não.
bool valorExiste(const vector<double>& lista, double valor) {
    auto it = find(lista.begin(), lista.end(), valor);
    return it != lista.end();
}

// FUNÇÃO 2: Lê os valores do usuário
// Recebe 'lista' por referência (&) para poder modificá-la
void lerValores(vector<double>& lista) {
    double vl;
    cout << "Digite valores (0.0 para parar):\n";

    while(true){
        cin >> vl;

        if(vl == 0.0){
            cout << "Entrada de dados finalizada!\n" << endl;
            break;
        }

        // Reutilizamos a função pequena criada acima
        if (valorExiste(lista, vl)) {
            cout << vl << " Já está contido!.\n";
        } else {
            lista.push_back(vl);
        }
    }
}

// FUNÇÃO 3: Imprime o vetor
// Recebe como const reference pois só vamos ler
void imprimirVetor(const vector<double>& lista) {
    cout << "Ordem Normal: ";
    for(double valor : lista){
        cout << valor << " ";
    }
    cout << endl;
}

// FUNÇÃO 4: Imprime reverso
void imprimirReverso(const vector<double>& lista) {
    cout << "Ordem Reversa: ";
    // Usando iteradores reversos
    for(auto it = lista.rbegin(); it != lista.rend(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

// FUNÇÃO 5: Encontra e imprime o maior valor
void processarMaiorValor(const vector<double>& lista) {
    if (lista.empty()) return; // Segurança

    auto itMaior = max_element(lista.begin(), lista.end());
    cout << "Maior valor: " << *itMaior << endl;
}

int main() {
    vector<double> lista;

    // 1. Chamada da função de leitura
    lerValores(lista);

    if(lista.empty()){
        cout << "Nenhum valor foi inserido." << endl;
    }
    else{
        // 2. Chamadas das funções de processamento e saída
        cout << "Tamanho: " << lista.size() << endl;
        
        processarMaiorValor(lista);
        imprimirVetor(lista);
        imprimirReverso(lista);
    }

    return 0;
}
*/