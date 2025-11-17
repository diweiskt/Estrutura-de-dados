#include <iostream>
#include <list>
#include <string>

using namespace std;

struct ItemCompra {
    string nome;
    int quantidade;
    string marca;
};


// --- Implementação das Funções ---

void adicionarItem(list<ItemCompra>& lista) {
    ItemCompra novoItem;   
    cout << "Nome do Item: ";
    cin.ignore(); // Limpar o buffer de entrada
    getline(cin, novoItem.nome);
    
    cout << "Quantidade: ";
    cin >> novoItem.quantidade;

    cout << "Marca: ";
    cin.ignore(); // Limpar o buffer de entrada
    getline(cin, novoItem.marca);
    
    lista.push_back(novoItem);
    cout << "\nItem \"" << novoItem.nome << "\" adicionado com sucesso!\n";
}

void removerItem(list<ItemCompra>& lista) {
    if (lista.empty()) {
        cout << "\n A lista de compras está vazia. Não há itens para remover.\n";
        return;
    }
    cout << "Digite o nome do item a ser removido: ";
    
    string nomeRemover;
    cin.ignore(); // Limpar o buffer de entrada
    getline(cin, nomeRemover);

    // Itera sobre a lista para encontrar o item
    for (auto it = lista.begin(); it != lista.end(); ++it) {
        if (it->nome == nomeRemover) {
            it = lista.erase(it); // Remove o item e avança o iterador
            cout << "\n Item \"" << nomeRemover << "\" removido com sucesso!\n";
            return;
        }
    }
    
    cout << "\n Item \"" << nomeRemover << "\" não encontrado na lista.\n";
}

void listarItens(const list<ItemCompra>& lista) {
    cout << "\n--- 📋 Lista de Compras ---\n";
    
    if (lista.empty()) {
        cout << "A lista de compras está vazia.\n";
        return;
    }

    for (const auto& item : lista) {
        cout << "Nome: " << item.nome 
             << " | Quantidade: " << item.quantidade
             << " | Marca: " << item.marca << endl;
    }
    cout << "-----------------------------------\n";
}


int main() {
    list<ItemCompra> listaDeCompras;
    int opcao;

    do {
        cout << "\n================================\n";
        cout << "Gerenciador de Lista de Compras\n";
        cout << "================================\n";
        cout << "1. Adicionar Item\n";
        cout << "2. Remover Item\n";
        cout << "3. Listar Itens\n";
        cout << "4. Sair\n";
        cout << "--------------------------------\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarItem(listaDeCompras);
                break;
            case 2:
                removerItem(listaDeCompras);
                break;
            case 3:
                listarItens(listaDeCompras);
                break;
            case 4:
                cout << "\n Programa encerrado. Boas compras!\n";
                break;
            default:
                cout << "\n Opção inválida. Tente novamente.\n";
                break;
        }
    } while (opcao != 4);

    return 0;
}


