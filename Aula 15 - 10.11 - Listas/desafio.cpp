/*
Crie um programa em C++ que permite o gerenciamento de uma lista de compras no
supermercado. Cada item na lista terá um nome, quantidade e a marca. O programa deve
ter as seguintes funcionalidades:
1. Adicionar um item à lista.
2. Remover um item à lista.
3. Listar todos os itens.
4. Sair do programa.

Utilize a estrutura de dados std::list para armazenar as mercadorias.
*/

#include <iostream>
#include <string>
#include <list>

using namespace std;

struct compras{
    string nome, marca;
    int quantidade;
};

int main(){
    list<compras> lista;
    compras aux;
    int opcao;

    while(true){
        cout << endl;
        cout << "---- Menu de opções ----\n"
             << "1. Adicionar item a lista\n"
             << "2. Remover item da lista\n"
             << "3. Listar todos os itens da lista\n"
             << "4. Encerrar programa\n"
             << endl;

        cin >> opcao;

        if(opcao == 4){
            cout << "Programa encerrado!" << endl;
            break;
        }

        if(opcao == 1){
            cout << endl;
            cout << "Informe o nome do item: " << endl;
            cin >> aux.nome;
            cout << "Informe a marca do item: " << endl;
            cin >> aux.marca;
            cout << "Informe a quantidade do item: " << endl;
            cin >> aux.quantidade;
            lista.push_back(aux);
            cout << endl;
            cout << "'" << lista.back().nome << "' Adicionado a lista com sucesso!\n" << endl;
        }

        else if(opcao == 2){
            cout << endl;
            cout << "Informe o nome do item a ser removido: " << endl;
            string nomeRemover;
            cin >> nomeRemover;
            size_t tamanhoAntes = lista.size();
            lista.remove_if([=](const compras& item){
                return item.nome == nomeRemover;
            });
            size_t tamanhoDepois = lista.size();
            if(tamanhoAntes > tamanhoDepois){
                cout << endl;
                cout << "'" << nomeRemover << "' Removido com sucesso!" << endl;
            }
            else{
                cout << endl;
                cout << "'" << nomeRemover << "' Não foi encontrado na lista." << endl;
            }
        }

        else if(opcao == 3){
            cout << endl;
            if(lista.empty()){
                cout << "A lista esta vazia!" << endl;
            }
            else{
                for(const auto &n: lista){
                    cout << "Produto:" << n.nome << "  Marca:" << n.marca << "  Quantidade:" << n.quantidade << endl;
                }
            }
        }

        else{
            cout << endl;
            cout << "Opção Inválida!" << endl;
        }
    }


    return 0;
}