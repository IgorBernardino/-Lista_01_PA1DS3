#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int HE, ME, HS, MS;
    float TEMPO_MIN, PAGIgor;

    cout << "Hora de entrada: ";   cin >> HE;
    cout << "Minuto de entrada: "; cin >> ME;
    cout << "Hora de saida: ";     cin >> HS;
    cout << "Minuto de saida: ";   cin >> MS;

    TEMPO_MIN = (HS * 60 + MS) - (HE * 60 + ME);
    PAGIgor = TEMPO_MIN * 4 / 60;

    cout << "Valor a pagar: R$ " << PAGIgor << endl;
    return 0;
}