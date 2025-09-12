#include <bits/stdc++.h>
using namespace std ;
main (){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ls = s[0] + s[1] + s[2];
        int rs = s[3] + s[4] + s[5];
        if (ls == rs)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}
