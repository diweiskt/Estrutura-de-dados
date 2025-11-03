//ponteiros com vetores
#include <iostream>
using namespace std;

int main(){
    int v[3]={10,20,30};
    // o nome de um array é o end. do seu primeiro elemento
    cout << v << endl;     
    int *p;
    p = v; // p =&v[0];
    cout << p << " "<< *p << endl;
    p++;
    
    cout << p << " "<< *p << endl;

    return 0;
}