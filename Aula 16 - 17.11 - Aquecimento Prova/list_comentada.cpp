#include <iostream>
#include <string>

namespace UPF { // Namespace da universidade/projeto

    // ESTRUTURA DO NÓ (O VAGÃO DO TREM)
    struct node {
        std::string value;      // O valor guardado (ex: "Diwei")
        node *previous = nullptr; // Ponteiro para o nodo anterior (quem está atrás)
        node *next = nullptr;     // Ponteiro para o próximo nodo (quem está na frente)
    };

    // ESTRUTURA DA LISTA (O CONTROLE DO TREM)
    struct list {
        node *first = nullptr; // Ponteiro para o primeiro item da lista
        node *last = nullptr;  // Ponteiro para o último item da lista
        int num_nodes = 0;     // Contador de quantos itens existem

        // Retorna o tamanho da lista
        int size() {
            return num_nodes;
        }

        // ADICIONAR NO INÍCIO (Empurrar na frente)
        void push_front(const std::string &s) {
            num_nodes++;
            node *p = new node; // Cria um novo vagão na memória
            p->value = s;       // Coloca a carga (string)
            p->previous = nullptr; // Como é o primeiro, não tem ninguém antes dele
            p->next = first;    // O próximo dele será o antigo primeiro

            if (first != nullptr) // Se a lista não estava vazia...
                first->previous = p; // ...o antigo primeiro agora aponta para trás, para o novo

            first = p; // Atualiza o ponteiro 'first' para o novo nodo

            if (last == nullptr) // Se a lista estava vazia antes...
                last = p; // ...o primeiro também é o último!
        }

        // ADICIONAR NO FINAL (Empurrar atrás)
        void push_back(const std::string &s) {
            num_nodes++;
            node *p = new node; // Cria o novo nodo
            p->value = s;
            p->next = nullptr;  // Como é o último, não tem ninguém depois
            p->previous = last; // O anterior dele é o antigo último

            if (last != nullptr) // Se já existiam itens...
                last->next = p;  // ...o antigo último aponta para frente, para o novo
            
            last = p; // Atualiza o ponteiro 'last'

            if (first == nullptr) // Se a lista estava vazia...
                first = p; // ...o último também é o primeiro
        }

        // IMPRIMIR A LISTA
        void print() {
            node *p = first; // Começa do início
            while (p != nullptr) { // Enquanto tiver vagão...
                std::cout << '"' << p->value << '"' << " "; // Imprime
                p = p->next; // Avança para o próximo
            }
            std::cout << std::endl;
        }

        // CONTAR OCORRÊNCIAS (Quantas vezes 's' aparece?)
        int count(const std::string &s) {
            node *p = first;
            int n = 0;
            while (p != nullptr) {
                if (p->value == s) {
                    n++;
                }
                p = p->next;
            }
            return n;
        }

        // ENCONTRAR UM ELEMENTO (Retorna o ponteiro do nodo)
        UPF::node* find(const std::string &s) {
            node *p = first;
            while (p != nullptr) {
                if (p->value == s) {
                    return p; // Achou! Retorna o endereço dele
                }
                p = p->next;
            }
            return nullptr; // Não achou
        }

        // APAGAR UM NODO ESPECÍFICO (Função perigosa se não cuidar dos ponteiros)
        void erase(UPF::node *p) {
            if (p == nullptr) return; // Segurança básica

            // Se for o primeiro da lista
            if (p == first) {
                first = first->next; // O primeiro passa a ser o próximo
                if (first != nullptr) // CORREÇÃO DE SEGURANÇA: Só acessa previous se first existir
                    first->previous = nullptr;
            }
            // Se for o último da lista
            else if (p == last) { // Usei 'else if' para clareza, mas seu IF separado funcionava também
                last = last->previous; // O último passa a ser o anterior
                if (last != nullptr)
                    last->next = nullptr;
            }
            // Se estiver no meio (tem gente antes e gente depois)
            else {
                // O vizinho de trás pula o 'p' e aponta para o vizinho da frente
                p->previous->next = p->next;
                // O vizinho da frente olha para trás e aponta para o vizinho de trás
                p->next->previous = p->previous;
            }

            delete p; // Libera a memória do computador
            num_nodes--; // Diminui a contagem
        }

        void pop_front() { erase(first); } // Remove o primeiro
        void pop_back() { erase(last); }   // Remove o último

        // REMOVE TODOS OS NODOS COM VALOR 'S'
        void remove(const std::string &s) {
            node *p = first;
            while (p != nullptr) {
                node *proximo = p->next; // SALVA O PRÓXIMO ANTES DE APAGAR!
                if (p->value == s) {
                    erase(p); // Se apagar 'p', você perde o p->next. Por isso salvamos antes.
                }
                p = proximo; // Avança
            }
        }

        // --- SUA TAREFA PRINCIPAL ---
        // Inserir s1 logo após a primeira ocorrência de s2.
        // Se não achar s2, insere s1 no final.
        void insere_apos(const std::string &s1, const std::string &s2) {
            node *p = first; // Cursor para procurar

            // Loop para procurar s2
            while (p != nullptr) {
                if (p->value == s2) { // ACHAMOS O ALVO (s2)!
                    
                    // 1. Criar o novo vagão
                    node *novo = new node;
                    novo->value = s1;

                    // 2. Conectar o NOVO vagão na lista
                    novo->next = p->next; // A frente do novo aponta para quem estava na frente do alvo
                    novo->previous = p;   // A traseira do novo aponta para o alvo

                    // 3. Arrumar os vizinhos existentes
                    if (p->next != nullptr) {
                        // Se tinha alguém na frente, esse alguém agora olha pra trás e vê o novo
                        p->next->previous = novo;
                    } else {
                        // Se p->next era nulo, o 'p' era o último. Agora o 'novo' é o último.
                        last = novo;
                    }

                    // O alvo agora aponta para frente para o novo
                    p->next = novo;
                    
                    num_nodes++;
                    return; // IMPORTANTE: Encerra a função para não continuar procurando ou inserir no final
                }
                p = p->next; // Avança a procura
            }

            // Se o while terminou e não retornou, significa que não achou s2.
            // A regra diz: insira no final.
            push_back(s1);
        }
    };
}