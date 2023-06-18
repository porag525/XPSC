#define ll long long
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>d;
    ll total=0;
    ll min_change=0;
    for(int i=0;i<n;i++)
    {
        ll L=i;
        ll R=n-i-1;
        if(s[i]=='L')
        {
            if(R>L)
            {
                min_change++;
                total+=R;
                d.push_back(R-L);
            }
            else{
                total+=L;
            }
        }
        else{
            if(L>R)
            {
                min_change++;
                total+=L;
                d.push_back(L-R);
            }
            else{
                total+=R;
            }
        }
      //  cout<<total<<endl;
    }
vector<ll>ans(n+1);
for(int i=min_change;i<=n;i++)
{
    ans[i]=total;
}

sort(d.begin(),d.end(),greater<ll>());
for(int i=min_change-1;i>=1;i--)
{
    total-=d.back();
    d.pop_back();
    ans[i]=total;
}

for(int i=1;i<=n;i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;

     
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