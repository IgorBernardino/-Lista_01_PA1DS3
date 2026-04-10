#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float PRECO, PRECOF, DESCIgor;

    cout << "Digite o preco original: ";
    cin >> PRECO;
    cout << "Digite o preco final: ";
    cin >> PRECOF;

    DESCIgor = (PRECO - PRECOF) * 100 / PRECO;

    cout << "Porcentagem de desconto: "
         << DESCIgor << "%" << endl;
    return 0;
}