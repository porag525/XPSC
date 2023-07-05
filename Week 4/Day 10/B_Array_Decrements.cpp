#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int x[n],y[n];
     vector<int>d(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(x[i]<y[i])
        {
            cout<<"NO"<<endl;
            flag=false;
            break;
        }
        d[i]=x[i]-y[i];
    }
    bool f=true;
    if(flag)
    {
        int x=*max_element(d.begin(),d.end());
        for(int i=0;i<n;i++)
        {
            if(d[i]==x) continue;
            else if(d[i]<x)
            {
                if(y[i]!=0)
                {
                    f=false;
                    break;
                }
            }
        } 
    }
    if(flag && f) cout<<"YES"<<endl;
    else if(flag && !f) cout<<"NO"<<endl;

}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}