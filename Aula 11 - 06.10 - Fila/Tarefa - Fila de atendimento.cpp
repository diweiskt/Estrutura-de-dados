/*
Ao chegarem à Central de Atendimento ao Cliente de uma empresa, as pessoas informam seu nome 
para um funcionário e ficam aguardando até serem chamados. Existem dois tipos de atendimento: 
o  Atendimento Prioritário, reservado para idosos, gestantes e portadores de necessidades especiais 
e o Atendimento Normal,  para demais usuários.

Sempre que um atendente fica disponível, é chamado o próximo cliente, de acordo com o seguinte critério: 
Se houver alguma pessoa aguardando o Atendimento Prioritário, a próxima é chamada, respeitando-se a ordem 
de chegada. Caso contrário é chamado o próximo cliente aguardando Atendimento Normal (se houver), também 
conforme ordem de chegada.

Tarefa
Você deve implementar um programa para esta empresa, o qual deve disponibilizar as seguintes opções:
Entrada: Lê o nome do cliente e o tipo de atendimento (Prioritário ou Normal) e armazenar colocar na 
fila de atendimento.
Atendimento: Se houver cliente aguardando, exibir o nome da próxima pessoa para ser chamada e retira 
ela da fila de espera. Caso nenhuma pessoa estiver aguardando, mostrar mensagem informativa.
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<string> Prioritaria;
    queue<string> Normal;
    string nome;
    int opcao;

    while(true){
        cout << "\n-------------------------------------\n";
        if(Prioritaria.empty() && Normal.empty()){
            cout << "Nenhum cliente esperando no momento.\n";
        }
        else{
            cout << "Clientes aguardando:\n";
            cout << "  Prioritários: " << Prioritaria.size() << endl;
            cout << "  Normais: " << Normal.size() << endl;
        }
        cout << "-------------------------------------\n";
        cout << "Menu de Opções:\n0. Encerrar\n1. Fila Prioritária\n2. Fila Normal\n3. Proximo da fila" << endl;
        cout << "-------------------------------------";
        cin >> opcao;
        if(opcao == 0){
            break;
        }
        if(opcao == 1){
            cout << endl;
            cout << "Digite o nome do cliente (Prioritário): " << endl;
            cin.ignore();
            getline(cin,nome);
            Prioritaria.push(nome);
        }else if(opcao == 2){
            cout << endl;
            cout << "Digite o nome do cliente (Normal): " << endl;
            cin.ignore();
            getline(cin,nome);
            Normal.push(nome);
        }else if(opcao == 3){
            if(!Prioritaria.empty()){
                cout << "Atendimento Prioritário: " << Prioritaria.front() << endl;
                cout << endl;
                Prioritaria.pop();
            }
            else if(!Normal.empty()){
                cout << "Atendimento Normal: " << Normal.front() << endl;
                cout << endl;
                Normal.pop();
            }
            else{
                cout << "-------------------------------------" << endl;
                cout << "Nenhum cliente esperando no momento." << endl;
                cout << "-------------------------------------" << endl;
            }
        }
    }

    return 0;
}