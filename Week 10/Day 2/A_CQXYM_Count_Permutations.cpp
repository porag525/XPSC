/*
__________________________
| Author:Md.Moniruzzaman |
--------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define f front
#define mod  1000000007
using namespace std;
void solve()
{
     ll nt,f=1,llll,jjj;
       cin>>nt;
       for(ll i=2*nt;i>=3;i--)
       {
           f=(f*i)%mod;
       }
       cout<<f%mod<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
return 0;
}
