#include <bits/stdc++.h>
using namespace std ;
main () {
    int n;cin>>n;
    int contador=0;
    for(int i=0;i<n;i++)
    {
        string x;cin>>x;
        if(x=="++X" or x=="X++")
            contador++;
        else
            contador--;
    }
    cout<<contador;
}

