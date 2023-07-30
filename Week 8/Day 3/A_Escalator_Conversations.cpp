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
    ll n,m,k,H;
    cin>>n>>m>>k>>H;
    ll x[n];
    for(int i=0;i<n;i++) cin>>x[i];
    ll count=0;
    for(int i=0;i<n;i++)
    {
        ll cur=x[i];
        bool flag=false;
        if(cur==H) continue;
        for(int j=1;j<=m;j++)
        {
            for(int l=1;l<=m;l++)
            {
                ll x=j*k;
                ll y=l*k;
                ll dif=abs(cur-H);
                ll diff2=abs(x-y);
                if(dif==diff2)
                { count++;
                 flag=true;
                }
            }
            if(flag) break;
        }
    }
    cout<<count<<endl;
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
