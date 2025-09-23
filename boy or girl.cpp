#include <bits/stdc++.h>
using namespace std ;
main () {
string username;
    cin >> username;

    set<char> distinctLetters;
    for (char c : username) {
        distinctLetters.insert(c);
    }

    if (distinctLetters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}
