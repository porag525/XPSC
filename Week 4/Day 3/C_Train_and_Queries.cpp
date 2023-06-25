#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll>v(n);
    map<ll,ll>lhs,rhs;
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
   for(int i=0;i<n;i++)
   {
    if(!lhs[v[i]])
    {
        lhs[v[i]]=i+1;
    }
    rhs[v[i]]=i+1;
   }

   while (q--)
   {
     ll l,r;
     cin>>l>>r;
     if(lhs[l] && rhs[r] && lhs[l]<rhs[r])
     {
        cout<<"YES"<<endl;
     }
     else 
     cout<<"NO"<<endl;
   }
   
   
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}