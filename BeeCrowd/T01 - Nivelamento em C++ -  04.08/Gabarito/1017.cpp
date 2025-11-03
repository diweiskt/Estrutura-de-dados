#include <iostream> 
#include <iomanip>

using namespace std;

int main(){

    float tempo, velocidade,distancia, gasolina;

    cin >> tempo;
    cin >> velocidade;

    distancia = tempo *  velocidade;

    gasolina = distancia / 12;

    cout  << fixed << setprecision(3) << gasolina<<endl;



    return 0; 
}