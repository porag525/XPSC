#define ll long long
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    ll n,q;cin>>n>>q;
    ll x[n];
    for(ll i=0;i<n;i++)
    {
        cin>>x[i];
    }
    map<ll,ll>l,r;
    for(ll i=0;i<n;i++)
    {
        if(!l[x[i]])
        {
            l[x[i]]=i+1;
        }
        r[x[i]]=i+1;;
    }
    while (q--)
    {
        int s,e;
        cin>>s>>e;
        if(l[s] && r[e] && l[s]<r[e])
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
      solve();
    }
    
}