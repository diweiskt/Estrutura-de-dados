//Primeiro exemplo utilizando vector

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v; //Vector de int inicialmente vazio
    cout << "size: " << v.size() << endl;
    v.push_back(10);  //Insere no final
    v.push_back(20);
    v.push_back(5);
    cout << "size: " << v.size() << endl;

    for(int i=0;i<v.size();i++){
        cout << i << ": " << v[i] << endl;
    }
    v.pop_back(); //Remove o valor final do vector

    return 0;
}