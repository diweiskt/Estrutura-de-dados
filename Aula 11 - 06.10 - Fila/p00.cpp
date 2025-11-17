//Exemplo FILA

//FIFO - FIRST IN FIRST OUT
//--Primeiro a entrar é o primeiro a sair

#include <iostream>
#include <queue> //Inclui o container std::queue - Implementa uma fila

using namespace std;

int main(){

    queue<int> fila;

    fila.push(100); // Adiciona valores na fila
    fila.push(200);
    fila.push(300);

    cout << "Tamanho da fila: " << fila.size() << endl;

    while(!fila.empty()){ //fila.size() > 0
        cout << "Size: " << fila.size() << endl;   // Tamanho
        cout << "Front: " << fila.front() << endl; // Primeiro elemento
        cout << "Back: " << fila.back() << endl;   // Ultimo elemento
        cout << endl;
        fila.pop(); //Remove o primeiro elemento da fila
    }



    return 0;
}