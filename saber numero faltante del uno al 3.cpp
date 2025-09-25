#include <iostream>
using namespace std;
main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a != 1 && b != 1 && c != 1) {
        cout << "" << endl;
    }
    else if (a != 2 && b != 2 && c != 2) {
        cout << "2" << endl;
    }
        else if (a != 3 && b != 3 && c != 3) {
        cout << "3" << endl;
    }
    else {
        cout << "1 2 3" << endl;
    }
}
