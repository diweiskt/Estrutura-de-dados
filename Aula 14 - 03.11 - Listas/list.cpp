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

        int count(const std::string &s){ //s é o elemento que eu quero encontrar
            node *p = first; //pega o valor do primeiro nodo
            int n=0; //contador. Fara a contagem de quantas vezes o S(parametro) apareceu na lista
            while(p!=nullptr){
                if(p->value == s){
                    n++;
                }
                p = p->next; //o p irá receber o proximo nodo
            }
            return n;
        }

        UPF::node *find(const std::string &s){
            node *p = first; //pega o valor do primeiro nodo
            while(p!=nullptr){
                if(p->value == s){
                    return p;
                }
                p = p->next;
            }
            return nullptr; //só chegara aqui se não encontrar o elemento na lista
        }

        void erase(UPF::node *p){
            if(p == first){ //deletando o Primeiro
                first = first->next;
                first->previous = nullptr;
            }
            if(p == last){  //deletando o ultimo
                last = last->previous;
                last->next = nullptr;
            }

            if(p->previous != nullptr){ //Existe um anterior
                p->previous->next = p->next;
            }
            if(p->next != nullptr){ //Existe um depois
                p->next->previous = p->previous;
            }
            delete p;
            num_nodes--;
        }

        void pop_front(){
            erase(first);
        }

        void pop_back(){
            erase(last);
        }

        void remove(const std::string &s){
            node *p = first; //pega o valor do primeiro nodo
            while(p!=nullptr){
                if(p->value == s){
                    erase(p);
                }
                p = p->next;
            }
        }
        //Outra opção de remove:
        void remove2(const std::string &s){
            node *p = find(s);
            while(p!=nullptr){
                erase(p);
                node *p = find(s);
            }
        }
        
    };
} //namespace upf