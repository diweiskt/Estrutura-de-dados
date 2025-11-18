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