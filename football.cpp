#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int contador= 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            contador++;
            if (contador >= 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            contador = 1;
        }
    }

    cout << "NO" << endl;

}

