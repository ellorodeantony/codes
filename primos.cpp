#include <bits/stdc++.h>
using namespace std ;
main () {
int a ; cin>>a ;
int contador=0 ;
for(int i=1 ;i<=a ;i++) {
    if(i%a==0)
    contador++;
    if(contador==2)
    cout<<"SI";
    else
    cout<<"NO";
}
}
