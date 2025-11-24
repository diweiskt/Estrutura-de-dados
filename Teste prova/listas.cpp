//LISTA SIMPLES ENCADEADA
#include <iostream>

struct No {
    int valor;
    No* prox;
};

// Função auxiliar para inserir (só para você montar a lista de teste)
void inserir(No*& cabeca, int valor) {
    No* novo = new No{valor, nullptr};
    if (!cabeca) {
        cabeca = novo;
    } else {
        No* temp = cabeca;
        while (temp->prox) temp = temp->prox;
        temp->prox = novo;
    }
}

// Função para imprimir
void imprimir(No* cabeca) {
    while (cabeca) {
        std::cout << cabeca->valor << " -> ";
        cabeca = cabeca->prox;
    }
    std::cout << "NULL\n";
}

// --- SUA MISSÃO É COMPLETAR ESTA FUNÇÃO ---
void removerTodasOcorrencias(No*& cabeca, int valorParaRemover) {
    
    // ETAPA 1: Limpar o início (O caso chato)
    // Se a lista começar com o número (ex: 10 -> 10 -> 5), precisamos 
    // mover a cabeça antes de começar o loop principal.
    while (cabeca != nullptr && cabeca->valor == valorParaRemover) {
        No* temp = cabeca;      // Guarda o nó para deletar
        cabeca = cabeca->prox;  // Atualiza a cabeça oficial
        delete temp;            // Libera a memória
    }

    // Se a lista ficou vazia após remover o início, paramos aqui.
    if (cabeca == nullptr) return;

    // ETAPA 2: Percorrer o meio e fim
    No* anterior = cabeca;       // Começa no primeiro válido
    No* atual = cabeca->prox;    // Começa no segundo

    while (atual != nullptr) {
        if (atual->valor == valorParaRemover) {
            // ACHAMOS! Hora de remover.
            
            // 1. O 'anterior' pula o 'atual' e aponta para o próximo
            anterior->prox = atual->prox; 
            
            // 2. Deletamos o atual
            delete atual; 
            
            // 3. Atualizamos o ponteiro 'atual' para continuar a busca
            // Nota: O 'anterior' NÃO se move aqui, pois o novo vizinho dele 
            // ainda não foi verificado.
            atual = anterior->prox; 
        } else {
            // NÃO É O NÚMERO. Apenas avançamos.
            anterior = atual;
            atual = atual->prox;
        }
    }
}

int main() {
    No* lista = nullptr;
    inserir(lista, 10);
    inserir(lista, 5);
    inserir(lista, 10);
    inserir(lista, 8);
    
    std::cout << "Antes: ";
    imprimir(lista);

    removerTodasOcorrencias(lista, 10); // Deve remover os dois '10'

    std::cout << "Depois: ";
    imprimir(lista); // Esperado: 5 -> 8 -> NULL
    
    return 0;
}

//LISTA DUPLAMENTE ENCADEADA
//REMOVER
struct No {
    int valor;
    No* prox;
    No* ant; // O ponteiro extra que salva sua vida
};

void removerTodasDupla(No*& cabeca, int valorParaRemover) {
    No* atual = cabeca;

    while (atual != nullptr) {
        // 1. SALVAR O PRÓXIMO: Antes de deletar o 'atual', precisamos saber 
        // para onde ir depois. Se deletarmos o 'atual' primeiro, perdemos o fio da meada.
        No* proximoNo = atual->prox; 

        if (atual->valor == valorParaRemover) {
            
            // PASSO A: Arrumar o ponteiro de quem está ATRÁS (se houver)
            if (atual->ant != nullptr) {
                atual->ant->prox = atual->prox; //O PROXIMO do ANTERIOR do ATUAL agora é igual ao PROXIMO do ATUAL
            } else {
                // Se não tem anterior, significa que estamos removendo a CABEÇA.
                cabeca = atual->prox; //O ATUAL agora é IGUAL ao PROXIMO do ATUAL
            }

            // PASSO B: Arrumar o ponteiro de quem está NA FRENTE (se houver)
            if (atual->prox != nullptr) {
                atual->prox->ant = atual->ant; //O ANTERIOR do PROXIMO do ATUAL agora é igual ao ANTERIOR do ATUAL
            }

            // PASSO C: Tchau, nó!
            delete atual;
        }

        // Avança para o próximo nó que salvamos lá no começo
        atual = proximoNo; 
    }
} 