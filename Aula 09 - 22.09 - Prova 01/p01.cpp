#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct equipe{
    string E;
    int P;
    int SG;
    int SP;
    int saldo;
};

bool ordena(const equipe &a1, const equipe &a2){
    return(a1.P > a2.P && a1.saldo > a2.saldo && a1.SG > a2.SG && a1.E < a2.E);
}


int main(){

    int N;
    cin >> N;
    vector<equipe> times(N);

    for(int i=0;i<N;i++){
        cin >> times[i].E >> times[i].P >> times[i].SG >> times[i].SP;
    };

    sort(times.begin(), times.end(), ordena);

    for(int i=0;i<N;i++){
        cout << times[i].E << " " << times[i].P << " " << times[i].saldo << " " << times[i].SG << " " << endl;
    }


    return 0;
}
