#include  <bits/stdc++.h >
using namespace std;
void juanitooo()
{
    string c;
        cin>>c ;
        if (c.size()<=10)
        {
            cout<<c;
        }
        else
        {
            cout<<c[0]<<c.size ()-2<<c [c.size ()-1] ;
        }
        cout<<endl;
}
main()
{
    int n;
    cin>>n;
    while(n--)
    {
        juanitooo();
    }
}

