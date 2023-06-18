#define ll long long
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<string>a(n);
    map<char,ll>f_occ;
    map<char,ll>s_occ;
    map<string,ll>occ;
    ll c=0;
     for(int i=0;i<n;i++)
    {
       cin>>a[i];
       f_occ[a[i][0]]++;
       s_occ[a[i][1]]++;
       occ[a[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        ll x=max((ll)0,f_occ[a[i][0]]-occ[a[i]]);
        c+=x;
        x=max((ll)0,s_occ[a[i][1]]-occ[a[i]]);
        c+=x;
        if(f_occ[a[i][0]]>0) f_occ[a[i][0]]--;
        if(s_occ[a[i][1]]>0) s_occ[a[i][1]]--;
        if(occ[a[i]]>0) occ[a[i]]--;
    }
    cout<<c<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}