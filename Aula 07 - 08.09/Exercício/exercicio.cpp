/*
Escrever um programa em C++ que inicialmente irá ler um inteiro (N) com a quantidade de veículos de uma revenda. Após, o seu programa deverá ler três informações sobre cada veículo: Modelo,valor e ano e armazenaná-las em um vetor de tamanho N. Todos os valores serão separados por um espaço. Os veículos deverão ser ordenados em ordem decrescente do valor. Veículos com o mesmo preço, deverão ser ordenados pelo ano e, se possuírem o mesmo valor e ano, deverão ser ordenados por ordem alfabética do modelo. Exibir no mesmo formato de saída, conforme exemplo:

Entrada:

5
GOL 12000.00 2005
UNO 10000.00 2005
CELTA 12000.00 2006
AGILE 12000.00 2005
CORSA 13000.00 2005

Saída:

CORSA 13000.00 2005
CELTA 12000.00 2006
AGILE 12000.00 2005
GOL 12000.00 2005
UNO 10000.00 2005
*/

#include <iostream>
#include <algorithm>

using namespace std;

struct veiculo{
    string modelo;
    float valor;
    int ano;
};

bool comparar(const veiculo &v1, const veiculo &v2){
    return v1.valor > v2.valor ||                                               //primeiro criterio
           v1.valor == v2.valor && v1.ano > v2.ano ||                           //segundo criterio
           v1.valor == v2.valor && v1.ano == v2.ano && v1.modelo < v2.modelo;    //terceito criterio
}

int main(){
    int N;
    cin >> N;
    veiculo veiculos[N];

    for(int i=0; i<N;i++){
        cin >> veiculos[i].modelo
            >> veiculos[i].valor
            >> veiculos[i].ano;
    }
    
    sort(veiculos,veiculos + N,comparar);

    for(int i=0; i<N;i++){
        cout << veiculos[i].modelo << " "
             << veiculos[i].valor << " "
             << veiculos[i].ano << endl;
    }

    return 0;
}