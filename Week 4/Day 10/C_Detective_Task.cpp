#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int last_zero=n-1;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            last_zero=i;
        }
    }
    int ans=0;
    for(int i=last_zero;i>=0;i--)
    {
        ans++;
        if(s[i]=='1')
        {
            break;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
       solve();
    }
    
}