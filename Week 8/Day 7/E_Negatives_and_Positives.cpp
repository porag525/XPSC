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
   ll n,s=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i],s+=a[i];
    ll ans=s,c=0,v=0,mx=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        v+=abs(a[i]);
        if(a[i]<0) c++;
        mx=max(mx,abs(a[i])*-1);
 
    }
    if(c%2==0)
    {
        mx=0;
    }
    cout<<max(mx,v+(2*mx))<<endl;
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
