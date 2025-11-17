#include <iostream>

using namespace std;

//  stack overflow
void foo(int n){
    double d;
    cout << n << " " << &d << endl;
    foo(n+1);
};
int main(){

    foo(0);


    return 0;
}