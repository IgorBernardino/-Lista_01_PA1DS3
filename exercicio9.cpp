#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int A, B, AUXIgor;

    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;

    AUXIgor = A;
    A = B;
    B = AUXIgor;

    cout << "Novo valor de A: " << A << endl;
    cout << "Novo valor de B: " << B << endl;
    return 0;
}