#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,s,r;
    cin>>n>>s>>r;
    int s_d=s-r;
    n--;
    int x;
    vector<int>a;
    while(n!=0)
    {
        x=r/n;
        r-=x;
        n--;
        a.push_back(x);
    }
    a.push_back(s_d);
    sort(a.begin(),a.end());
    for(auto u:a)
    {
        cout<<u<<endl;
    }
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