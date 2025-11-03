#include <iostream>

using namespace std;

void dobrar(int v[], int tamanho){

    // Se quiser ter um backup tem que criar um novo vetor e passar os valores
    int copia[3];
    for(int i=0; i< tamanho; i++){
        copia[i] = v[i];
    }
    copia[2]=0; // Alteração feita na cópia e não na referencia
    
    
    // como estamos mudando o vetor da referencia, altera o original
    for(int i=0; i< tamanho; i++){
        v[i] = v[i] * 2;
    }

}

int main(){
    int vet[3] = {1,2,3};
    dobrar(vet,3); // Vetores são sempre passados por referência!

    for( int i =0;i<3;i++){
        cout << vet[i] << " ";
    }

    return 0;
}