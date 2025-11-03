#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    const int N = 100;
    float A[N];

    for(int i=0; i<N; i++){
        cin >> A[i];
    }

   for(int i=0; i<N; i++){
        if(A[i] <= 10){
            cout <<"A["<< i <<"] = " << fixed << setprecision(1) << A[i] << endl;
        }      
    }
     
    return 0;
}