#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float VAL_DOLAR, COT, VAL_REALIgor;

    cout << "Quantidade de dolares: ";
    cin >> VAL_DOLAR;
    cout << "Cotacao do dolar: ";
    cin >> COT;

    VAL_REALIgor = VAL_DOLAR * COT;

    cout << "Valor em reais: R$ "
         << VAL_REALIgor << endl;
    return 0;
}