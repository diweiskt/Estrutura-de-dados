#include <iostream>
#include <queue>

using namespace std;

struct Cliente {
    string nome;
    char tipo;
};

int main() {
   
    queue<Cliente> prioritaria, normal;
    int opcao;
    while (true) {    
        cout << "1. Entrada" << endl;
        cout << "2. Atendimento" << endl;
        cout << "3. Sair" << endl;   
        cin >> opcao;
        switch (opcao){
            case 1:
                {
                    Cliente cliente;          
                    cout << "Nome do cliente: ";
                    cin.ignore();
                    getline(cin,cliente.nome);
                    cout << "Tipo de atendimento (P ou N): ";
                    cin >> cliente.tipo;

                    if (cliente.tipo == 'P') {
                        prioritaria.push(cliente);
                    } else {
                        normal.push(cliente);
                    }
                }      
                break;
            case 2:
                {
                    if (!prioritaria.empty()) {
                        Cliente cliente_atender = prioritaria.front();
                        prioritaria.pop();
                        cout << "Proximo cliente (Prioritario): " << cliente_atender.nome << endl;
                    } else if (!normal.empty()) {
                        Cliente cliente_atender = normal.front();
                        normal.pop();
                        cout << "Proximo cliente (Normal): " << cliente_atender.nome << endl;
                    } else {
                        cout << "Nao ha nenhum cliente na fila aguardando para ser atendido" << endl;
                    }       
                    break;
                }
            case 3:
                {
                    cout << "Thats all, folks!!!" << endl;
                    return 0;
                }
            default:
                cout << "Opcao invalida. Tente novamente." << endl;      

        }
    }

    return 0;
}