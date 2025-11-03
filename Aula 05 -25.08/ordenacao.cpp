#include <utility>

template <typename T>
// n terá o tamanho do vetor
void bubblesort(T vet[], int n){
    bool trocou;
    do{
        trocou = false;
        for(int i=0; i<n -1; i++){
            if(vet[i] > vet[i+1]){
                std::swap(vet[i],vet[i+1]); //troca os valores
                trocou = true;
            }
        }

    }while(trocou); //trocou == true 

}

template <typename T>
void selectionsort(T vet[], int n) {
    for(int i=0; i<n-1;i++){
        T menor = vet[i];
        int pos = i;
        for(int j=i+1; j<n;j++){
            if(vet[j] < menor){
                menor = vet[j];
                pos = j;
            }
        }
        std::swap(vet[i],vet[pos]);
        //Troco a posição de analise com o menor a direita encontrando
    }
}