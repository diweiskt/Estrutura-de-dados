//Biblioteca para lista duplamente encadeada
#include <iostream>
#include <string>

namespace UPF{

struct node{
    std::string value; //VALOR
    node *previous = nullptr; //Nodo anterior
    node *next = nullptr; //Nodo posterior
};

struct list{
    //Variaveis de controle
    node *first = nullptr; //primeiro nodo
    node *last = nullptr; //ultimo elemento
    int num_nodes = 0; //tamanho de nodosl

    //funções da biblioteca
    int size(){
        return num_nodes;
    }

    void push_front(const std::string &s){
        num_nodes++;
        node *p = new node; //Alocando um espeço de mem. p/ o nodo
        p->value = s;
        p->previous = nullptr;
        p->next = first;
        if(first != nullptr) //Já existem valores inseridos (lista não esta vazia)
            first->previous = p;
        first = p;
        if(last == nullptr) //Lista vazia
            last = p;
    }

    void push_back(const std::string &s){
        num_nodes++;
        node *p = new node; //aloca memoria 
        p->value = s;
        p->next = nullptr;
        p->previous = last;
        if(last != nullptr) //Não é nulo, já existe elementos
            last->next = p;
        last = p;
        if(first == nullptr) //Em caso de lista ainda vazia. Alé, do ultimo, será também o primeiro
            first = p;
    }

    void print(){
        node *p = first; //Pega o valor do primeiro nodo
        while(p!=nullptr){
            std::cout << '"' << p->value << '"' << " ";
            p = p->next;
            std::cout << std::endl;
        }
    }
};

} //namespace upf