#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float R, VOLIgor;

    cout << "Digite o raio da esfera: ";
    cin >> R;

    VOLIgor = 4 * 3.14 * R * R * R / 3;

    cout << "Volume da esfera: " << VOLIgor << endl;
    return 0;
}