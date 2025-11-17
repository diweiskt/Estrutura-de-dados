#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> vet(n); // (tamanho minimo)
    //Ao criar a capacidade e o tamanho serão iguais ao N

    cout << "Tamanho: " << vet.size() << " Capacidade: " << vet.capacity() << endl;

    for(int i=0;i<n;i++){
        cin >> vet[i];
        cout << "Tamanho: " << vet.size() << " Capacidade: " << vet.capacity() << endl;
    }

    vet.push_back("teste");
    vet.push_back("outro teste");

    cout << "Tamanho: " << vet.size() << " Capacidade: " << vet.capacity() << endl;

    return 0;
}