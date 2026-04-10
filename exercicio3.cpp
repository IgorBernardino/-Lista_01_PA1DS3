#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float PR, DIgor;

    cout << "Digite o preco do produto: ";
    cin >> PR;

    DIgor = PR * 5 / 100;

    cout << "Valor do desconto: " << DIgor << endl;
    return 0;
}