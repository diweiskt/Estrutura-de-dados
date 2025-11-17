//ponteiro para vetores
#include <iostream>

using namespace std;

int main(){

    int V[3]={10,20,30};
    cout << V << endl;
    //o nome do array é o end. do seu primeiro elemento
    int *p;
    p = V; //igual fazer isso: p = &V[0]
    cout << p << endl;
    p++;
    cout << p << endl;


    return 0;
}