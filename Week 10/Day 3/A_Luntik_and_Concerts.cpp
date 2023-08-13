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
using namespace std;
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum= a+2*b +3*c;
    if(sum%2==0)
    {
        cout<<0<<endl;
        return ;
    }
//     int c1=0,c2=0;
//    if(a%2==0 && b%2==0 && c%2==0) cout<<0<<endl;
//    else if(a%2!=0 && b%2!=0 && c%2!=0) cout<<0<<endl;
//    else cout<<1<<endl;
     cout<<1<<endl;
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
