#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int x=9;
    vector<int>ans;
    while(n)
    {
        if(n>x)
        {
            ans.push_back(x);
            n-=x;
            x--;
        }
        else{
            ans.push_back(n);
            n=0;
        }
    }
    reverse(ans.begin(),ans.end());
    for(auto u:ans)
    {
        cout<<u;
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