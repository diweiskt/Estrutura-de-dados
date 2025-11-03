// Altera o valor da variavel N por meio do ponteiro P
#include <iostream>

using namespace std;

int main(){

    float n = 1.5;
    float *p = &n;

    cout << n << " " << *p << endl;

    *p = 9.1;
    cout << n << " " << *p << endl;

    return 0;
}