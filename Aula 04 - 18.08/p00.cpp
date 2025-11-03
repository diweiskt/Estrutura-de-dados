//Primeiro exemplo de funções
#include <iostream>

using namespace std;


// função void não retorna nenhum valor para quem chamou
void imprimir(string texto){
    cout << texto << endl;
}

int adiciona(int x, int y){
    int t = x + y;
    return t;
    // return x + y;
}
int main(){
    int t = 500;
    int x = 10, y = 2;
    int soma = adiciona(y,x);
    cout << "Soma: " << soma <<endl;
    imprimir("Exemplo de função'void'.");

    /* Serve apenas para mostrar  que a variavel T da main
    não é a mesma da variavel T da função 'adiciona'
    
    Isso é o conceito de variável local
    */
    cout << "Valor da variavel T: " << t << endl;
    return 0;

}