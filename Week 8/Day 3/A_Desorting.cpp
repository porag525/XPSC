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
    int n;cin>>n;
    vector<ll>x(n);
    for(int i=0;i<n;i++) cin>>x[i];
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(i+1==n)break;
        ll a=x[i];
        ll b=x[i+1];
        if(x[i+1]<x[i])
        {
            ans=0;
            break;
        }
        else
        {
            ll tmp=abs(a-b)/2+1;
            if(tmp<ans) ans=tmp;
        }
    }
    cout<<ans<<endl;

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
