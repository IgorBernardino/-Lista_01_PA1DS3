#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float CT, LT, CP, LP, QTDIgor;

    cout << "Comprimento do tijolo (CT): ";
    cin >> CT;
    cout << "Largura do tijolo (LT): ";
    cin >> LT;
    cout << "Comprimento da parede (CP): ";
    cin >> CP;
    cout << "Largura da parede (LP): ";
    cin >> LP;

    QTDIgor = (CP * LP) / (CT * LT);

    cout << "Qtd de tijolos: " << QTDIgor << endl;
    return 0;
}