int fatorial(int num){
    int aux = 1;
    for(int i=2; i<=num; i++){
        aux*=i;  // aux = aux *i;
    }
    return aux;

}

// true se é primo
//false se não é primo
bool primo(int num){
    int cont = 0;
    for(int i =1; i<=num; i++){
        if(num%i == 0){
            cont++;
        }
       
    }

    return cont==2; // mesma coisa que if(cont==)

}