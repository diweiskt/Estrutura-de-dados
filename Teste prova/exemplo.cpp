#include <vector>
#include <iostream>

struct Pilha {
    std::vector<int> dados;
    void push(int v) { dados.push_back(v); }
    bool empty() { return dados.empty(); }
    int top() { return dados.back(); }
    void pop() { if(!empty()) dados.pop_back(); }
};


void removerOcorrencias(Pilha& p, int valor) {
    Pilha aux;

    // 1. Desempilha a original, filtrando o que não queremos
    while (!p.empty()) {
        int topo = p.top();
        p.pop();

        if (topo != valor) {
            aux.push(topo); // Guarda na auxiliar o que é "bom"
        }
        // Se for igual ao valor, a gente só ignora (ele morre aqui)
    }

    // 2. A pilha 'aux' agora está com os elementos invertidos.
    // Precisamos devolver para a 'p' para restaurar a ordem original.
    while (!aux.empty()) {
        p.push(aux.top());
        aux.pop();
    }
}

struct No {
    int valor;
    No* prox;
    No* ant;
};

void moverUltimoParaInicio(No*& inicio, No*& fim) {
    // 1. Casos triviais: Lista vazia ou com 1 elemento (nada a fazer)
    if (inicio == nullptr || inicio == fim) {
        return;
    }

    // Vamos isolar o último nó (vamos chamá-lo de 'antigoFim')
    No* antigoFim = fim;

    // 2. Atualizar o ponteiro 'fim' da lista
    fim = antigoFim->ant; // O penúltimo vira o novo fim
    fim->prox = nullptr;  // O novo fim não aponta para ninguém na frente

    // 3. Ligar o 'antigoFim' no INÍCIO da lista
    antigoFim->prox = inicio; // O próximo do antigo fim é o antigo início
    antigoFim->ant = nullptr; // O antigo fim agora é o primeiro, não tem anterior
    
    inicio->ant = antigoFim;  // O antigo início agora aponta para trás (para o novo primeiro)
    
    // 4. Atualizar a cabeça da lista
    inicio = antigoFim;
}