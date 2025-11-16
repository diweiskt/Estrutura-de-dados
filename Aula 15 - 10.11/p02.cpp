#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> lista{10,200,208,41,20,150,208,-18};

    //Remove todas as ocorrencias 
    //lista.remove(208);
    //Remove os pares
    //lista.remove_if([](auto n){return n%2=0;});
    //Remove os maiores que 50
    //lista.remove_if([](auto n){return n >50;});     
    //Remove os negativos
    //lista.remove_if([](auto n){return n<0;});

    //Neste exemplo ordenaremos na propria função sort da list
    lista.sort([](int a, int b){return a < b;});  
    
    for( auto n:lista){
        cout << n << " ";
    }


    return 0;
}