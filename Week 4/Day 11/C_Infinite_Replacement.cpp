#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s, t;
    cin >> s >> t;
    bool x = false;
    if(t.size()==1)
    {
        if(t[0]=='a')
        {
            cout<<1<<endl;
        }
        else{
           ll ans=pow(2,s.size());
            cout<<ans<<endl;
        }
    }
    else if(t.size()>1)
    {
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='a')
            {
                x=true;
            }
        }
        if(x)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll ans=pow(2,s.size());
            cout<<ans<<endl;
        } 
        
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