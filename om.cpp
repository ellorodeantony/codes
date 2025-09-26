#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int a ;
    cin>>a;
    for (int i=a; i>=1; i--)
    {
        for(int j=1; j<=i-1; j++)
        {
            cout<<"*";
        }
        for(int j=1; j<=a-i+1; j++)
        {
            cout<<char(i+64);
        }
        cout<<endl ;
    }


}
