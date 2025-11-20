//Biblioteca para lista duplamente encadeada
#include <iostream>
#include <string>

namespace UPF{

struct node{
    std::string  value; // VALOR
    node *previous = nullptr; // Nodo anterior
    node * next = nullptr; //Nodo posterior
};

struct list{
    // VARIAVEIS DE CONTROLE
    node *first = nullptr; // primeiro nodo
    node *last  = nullptr; // ultimo elemento
    int num_nodes = 0; //Quantidade de nodos

    //funções da biblioteca

    int size(){
        return num_nodes;
    }

    void push_front(const std::string &s){
        num_nodes++;
        node *p = new node; //Alocando um espaço de mem. p/ o nodo
        p->value = s;
        p->previous = nullptr;
        p->next = first;
        if(first != nullptr) //Já existem valores inseridos (lista não esta vazia)
            first->previous = p;
        first = p;
        if(last == nullptr) // LISTA VAZIA
            last = p;

    }

    void push_back(const std::string &s){
        num_nodes++;
        node *p = new node; //aloca memoria
        p->value = s;
        p->next = nullptr;
        p->previous = last;
        if(last != nullptr) //Não é nulo, ja existem elementos
            last->next = p;
        
        last = p;

        if(first == nullptr) // Em caso de lista ainda vazia. ALém do ultimo, será também o primeiro
            first = p;
    }

    void print(){
        node *p = first; // pega o valor do primeiro nodo
        while(p!=nullptr){
            std::cout<<'"'
                     <<p->value
                     << '"'
                     << " ";
            p = p->next;
        }
        std::cout<< std::endl;
        
    }

    int count(const std::string &s){ //s é o elemento que eu quero encontrar
        node *p = first; // pega o valor do primeiro nodo
        int n=0; //Contador. Fará a contagem de quantas vezes o S(parametro) apareceu na lists
        while(p!=nullptr){
            if(p->value == s){
                n++;
            }
            p = p->next;  // o P irá receber o proximo nodo     
           
        }      
        return n;      

    }

    UPF::node* find(const std::string &s){
        node *p = first; // pega o valor do primeiro nodo
        while(p!=nullptr){
            if(p->value == s){
                return p;
            }
            p =p->next;
        }
        return nullptr;//so chegará aqui se não encontrar o elemento na lista
    }

    void erase(UPF::node *p){
        if(p == first){ // deletando o 1º
            first = first->next;
            first->previous = nullptr;
        }
        if(p==last){ // deletando o ultimo
            last = last->previous;
            last->next = nullptr;
        }
        if(p->previous != nullptr){ //Existe um anterior
            p->previous->next = p->next;
        }

        if(p->next != nullptr){
            p->next->previous = p->previous; 
        }
        delete p;
        num_nodes--;

    }

    void pop_front(){  //Remover o primeiro
        erase(first);
    }
    void pop_back(){ // Remover o ultimo
        erase(last);
    }

    //Ela recebe uma string s e remove todos os nodos da lista cujo valor é igual a s.
    void remove(const std::string &s){ 
        node *p = first; // pega o valor do primeiro nodo
        while(p!=nullptr){
            if(p->value == s){
                erase(p);
            }
            p =p->next;
        }
    }
    /*
    Implementar na biblioteca "lista.cpp" a seguinte função:
    void insere_apos(const std::string &s1, const std::string &s2)
    Ela recebe duas strings (s1 e s2) e deve inserir na lista o valor passado em s1 após o primeiro nodo que
    contêm o valor s2, se este existir. Caso o valor passado em s2 não esteja contido na lista, a função deve
    inserir s1 no final da lista.
    Exemplo: l.insere_apos("x", "y");
    Neste exemplo, o valor "x" deve ser inserido na lista após "y", se existir "y" nesta lista. Se não existir nenhum
    "y", inserir no final da lista. Se existir mais de um "y", inserir depois da primeira ocorrência. Utilize o arquivo
    teste2.cpp para validar sua implementação
    */
    void insere_apos(const std::string &s1, const std::string &s2){
        node *p = first; //p é o nosso "cursor" que procura s2
        while(p != nullptr){
            if(p->value == s2){ //Achamos o valor s2 (o nó alvo)
                node *novo = new node; //Criamos o NOVO nó
                novo->value = s1;
                //Passo A: Configurar o NOVO nó
                novo->next = p->next; //O próximo do novo é quem estava na frente do p
                novo->previous = p;   //O anterior do novo é o próprio p  
                //Passo B: Avisar o vizinho da FRENTE (se existir)
                if(p->next != nullptr){
                    p->next->previous = novo; //O vizinho da frente agora olha pra trás e vê o 'novo'
                }
                else{
                    //Se p->next era nulo, significa que p era o Último.
                    //Agora o 'novo' passa a ser o último.
                    last = novo; 
                }
                //Passo C: Avisar o vizinho de TRÁS (o p)
                p->next = novo; //O p agora aponta pra frente para o 'novo'
                num_nodes++;
                return; //IMPORTANTE: Se já inseriu, saia da função! Senão ele continua procurando.
            }
            p = p->next; //Continua procurando se não achou ainda
        }
        push_back(s1); //Se não achou o s2, ele insere no final usando a função push_back()
    }

};
} //namespace upf