#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float PR, D, PAGIgor;

    cout << "Digite o preco do produto: ";
    cin >> PR;
    cout << "Digite o valor do desconto: ";
    cin >> D;

    PAGIgor = PR - D;

    cout << "Valor a pagar: " << PAGIgor << endl;
    return 0;
}