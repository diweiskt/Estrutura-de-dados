#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<string> v;
    v.push_back("A");
    v.push_back("B");
    v.push_back("C");
    v.push_back("D");
    v.push_back("E");

    //função find = retorna a primeira ocorrencia
    // enviamos o inicio (begin) e o final (end) e o valor a ser buscado
    // auto deduz automaticamente o tipo de variavel a ser retornada
    auto it = find(v.begin(),v.end(),"C"); //find da lib algorithm
    
    if(it == v.end()){   //Percorre todo o vector e não encontrou
        cout << "Not Found!\n";
    }else{//encontrou
        v.insert(it,"Z");//Inserir o valor Z na posição it- retornada pela função FIND    
    }
    //Função insert não substitui!
    
    for(auto n:v){
        cout << n << endl;
    }

    
    return 0;
}