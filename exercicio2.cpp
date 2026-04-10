#include <iostream>
using namespace std;

int main() {
    float L, C, AREA, PIgor;

    cout << "Digite o comprimento L: ";
    cin >> L;
    cout << "Digite o comprimento C: ";
    cin >> C;

    AREA = L * C;
    PIgor = 2 * (L + C);

    cout << "Area da sala: " << AREA << endl;
    cout << "Perimetro: " << PIgor << endl;
    return 0;
}