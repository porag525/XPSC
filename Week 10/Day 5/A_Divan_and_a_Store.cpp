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
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=l && a[i]<=r)
        {
            v.push_back(a[i]);
        }
    }
    int count=0;
    ll cost=0;
    for(auto u:v)
    {
        cost+=u;
        if(k>=cost)
        {
            count++;
        }
        else
        {
            break;
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
