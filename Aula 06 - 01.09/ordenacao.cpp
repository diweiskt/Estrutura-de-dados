#include <utility>

/*Template serve para criarmos uma função com 
  tipo de dado genérico
*/
template <typename T> // T é o nome do meu template
void bubblesort(T vet[], int n){
    bool trocou;
    do{
        trocou = false;
        for(int i=0; i<n-1;i++){
            if(vet[i] > vet[i + 1]){
                std::swap(vet[i],vet[i + 1]);
                trocou = true;
            }
        }
    }while(trocou);
}
template <typename T>
void selectionsort(T vet[], int n){
    for(int i = 0; i < n-1; i++){
        T menor  = vet[i];
        int pos = i;
        for(int j = i+1; j < n; j++){
            if(vet[j] < menor){
                menor = vet[j];
                pos = j;
            }
        }
        std::swap(vet[i],vet[pos]); 
    }
}
template <typename T>
void insertionsort(T vet[], int n){
    for(int i = 1; i < n; i++){
        T key = vet[i];
        int j = i -1;
        while(j>=0 && vet[j] > key){
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = key;
    }

}
template <typename T>
int partition(T vet[], int start, int end){
    int pivot = start;
    for(int i=start;i<end; i++){
        if(vet[i]<=vet[end]){
            std::swap(vet[pivot++],vet[i]);
        }
    }
    std::swap(vet[pivot],vet[end]);
   return pivot; // pos. do pivot
}
template <typename T>
void quicksort_rec(T vet[],int start, int end){
    if(start>=end) return;
    int pivot = partition(vet,start,end); // pos. pivot
    quicksort_rec(vet,start,pivot-1); // menores que o pivot
    quicksort_rec(vet,pivot+1,end); // maiores que o pivot

}

template <typename T>
void quicksort(T vet[], int n){
    quicksort_rec(vet,0,n-1);
}

template <typename T>
void merge(T vet[],int start, int mid, 
int end, int aux[]){
    int left = start;
    int right = mid;
    for(int i = start; i < end;++i){
        if((left < mid) 
        && ((right>=end) || (vet[left] < vet[right]))){
            aux[i] = vet[left];
            ++left;
        }else{
            aux[i] = vet[right];
            ++right;
        }
    }
    for(int i=start; i<end; ++i){
        vet[i] = aux[i];
    }
  
}

template <typename T>
void rmergesort(T vetor[],int start, int end, int aux[]){
   if((end-start)< 2) return;
   int meio = (start+end)/2;
   rmergesort(vetor,start,meio,aux); //esq ate o meio
   rmergesort(vetor,meio,end,aux); //Dir. do meio
   merge(vetor,start,meio,end,aux);

 
}

template <typename T>
void mergesort(T vetor[], int n){
    T aux[n];
    rmergesort(vetor,0,n,aux);
}




