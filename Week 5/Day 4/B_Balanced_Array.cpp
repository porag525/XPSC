#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int tmp=n/2;
    vector<int>x;
    vector<int>y;
    vector<int>ans;
    if(tmp%2!=0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=2;i<=n;i+=2)
        {
            x.push_back(i);
        }
        int j=1;
        tmp--;
        while (tmp--)
        {
            y.push_back(j);
            j+=2;
        }
        int a=n+(n/2-1);
        y.push_back(a);
        for(auto u:x)ans.push_back(u);
        for(auto u:y) ans.push_back(u);
        for(auto u:ans) cout<<u<<" ";
        cout<<endl;
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