#include <iostream>
using namespace std;
main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Verificamos si falta el 1
    if (a != 1 && b != 1 && c != 1) {
        cout << "Falta el n�mero: 1" << endl;
    }
    // Verificamos si falta el 2
    else if (a != 2 && b != 2 && c != 2) {
        cout << "Falta el n�mero: 2" << endl;
    }
    // Verificamos si falta el 3
    else if (a != 3 && b != 3 && c != 3) {
        cout << "Falta el n�mero: 3" << endl;
    }
    else {
        cout << "No falta ning�n n�mero del 1 al 3" << endl;
    }
}
