#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);
#define query int n;cin>>n;while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define par pair<ll,ll>
#define vecpar vector<par>
#define F first
#define S second
#define int ll
#define dbg(v) cout<<#v<<'='<<v<<endl;
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll inf=numeric_limits<ll>::max();
void solve()
{
    int n,k;cin>>n>>k;
    map<ll,ll>mapa2;
    while(n--)
    {
        int a;cin>>a;
        mapa2[a]++;
    }
    vector<ll>val;
    for(auto const&[clave,valor]:mapa2)
        if(valor>=k)
            val.emplace_back(clave);
    if(val.empty())
    {
        cout<<-1<<endl;return;
    }
    ll lmay=val[0],rmay=val[0];
    ll c=val[0];
   for(int i=1;i<val.size();i++)
   {
       if(val[i]!=val[i-1]+1)
       {
           if(val[i-1]-c>rmay-lmay)
               rmay=val[i-1],lmay=c;
           c=val[i];
       }
   }
    if(val.back()-c>rmay-lmay)
            rmay=val.back(),lmay=c;
   cout<<lmay<<" "<<rmay<<endl;
//    for(auto e:mapa)
//        cout<<e.F<<"    "<<e.S<<endl;
//21 2
//1 1 2 2 2 3 3 3 3 4 4 4 4 4 6 6 7 7 7 8 8

//12 2
//1 1 2 2 2 6 6 7 7 7 8 8
}
main()
{
    INI query solve();
}
