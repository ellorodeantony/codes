#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a ;
        cin>>a ;
        int contador=0;
        for (int i=1; i<=a; i++)
        {
            if(a%i==0)
                contador++;
        }
        if(contador==2)
        {
            cout<<"SI";
        }
        else
            cout<<"NO" ;
    }
}
