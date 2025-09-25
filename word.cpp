#include <bits/stdc++.h>
using namespace std;
main ()
{
    string a;
    cin>>a;
    int may=0;
    int minu=0;
    for(int i=0; i<=a.size()-1; i++)
    {
        if(int (a[i])>=65 && int (a[i])<=90)
            may++;
        else
            minu++;
    }
    if(may>minu)
        transform(a.begin(), a.end(), a.begin(), ::toupper);
else {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
     cout<<a;
}
}
