//Exemplos de laços de repetição

#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cout << "Laço 'While' \n";
    // Testa e depois executa o laço;

    
    while (n < 10){
        cout << n << endl;
        n++;//Atualiza o contador
        //n = n+1
    }

    // O teste vem ao final do laço;
    // Garante que pelo menos uma vez será executado
    cout << "Laço 'do while' \n";
    do{
        cout << n << endl;
        n--;  //decrementando o contador
        // n = n -1;
    
    } while(n > 0); 

    cout << "Laço infinito \n";
    /* Executa infinitamente até encontrar 
    uma condição de parada. IF com break

    */
    while (true){
        cout << n << endl;
        if (n ==5){
            break;
        }
        n++;
    }

    cout << "Laço de repetição 'for' \n";

    // Laço for:
    // Tem 3 partes.
        /// 1º (Inicialização da variavel de controle)
        /// 2º teste while: vai permanecer neste laço enquanto
            //a condição for verdadeira
        /// 3º Atualização da variavel de controle
    for( int i=0; i<=20; i++){
        cout << i << endl;

    }

    return 0;
}