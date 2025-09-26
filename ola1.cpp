#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int a ;
    int contador=0 ;
    cin>>a;
    for(int i=1; i<=a; i++)
        if(a%i==0)
            contador++;
    if(contador==2)
        cout<<"Si";
    else
        cout<<"NO";
}
