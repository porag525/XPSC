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
    ll a,b,d;
    cin>>a>>b;
    if(a==b)
    {
        cout<<(a+b)/4<<"\n";
    }
    else if(a>b)
    {
        d=a-b;
        a-=d;
        d/=2;
        d=min(a,d);
        a-=d;
        b-=d;
        d+=(a+b)/4;
        cout<<d<<"\n";
    }
    else 
    {
        d=b-a;
        b-=d;
        d/=2;
        d=min(a,d);
        a-=d;
        b-=d;
        d+=(a+b)/4;
        cout<<d<<"\n";
    }
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
