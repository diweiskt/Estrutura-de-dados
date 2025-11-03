#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float num;
    float sum = 0;// A soma do todos os valores positivos
    int count = 0;  // quantidade de valores positivos
    for(int i = 0; i < 6; i++){
        cin >> num;
        if (num >= 0){
            sum += num;  // sum = sum + num;
            count += 1;  // count = count = 1;
        }
    }
    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum / count << endl;
    return 0;
}