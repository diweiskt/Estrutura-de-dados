#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string> v;
    v.push_back("A");
    v.push_back("B");
    v.push_back("C");
    v.push_back("D");
    v.push_back("E");

    cout << "Percorre usando o 'old school' for" << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }

    cout << endl;

    cout << "Percorre utilizando o range for" << endl;
    for(auto n:v){// N pega cada valor de V 
        cout << n << endl;
    }

    cout << endl;

    cout << "Percorre utilizando iterator" << endl;
    for(auto it=v.begin(); it!=v.end(); it++){
        cout << *it << endl;
    }

    cout << endl;

    cout << "Percorre utilizando reverse iterator" << endl;
    for(auto it=v.rbegin(); it!=v.rend(); it++){
        cout << *it << endl;
    }

    return 0;
}