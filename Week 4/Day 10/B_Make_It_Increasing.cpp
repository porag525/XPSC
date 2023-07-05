#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int c=0;
    bool flag=false;
    for(int i=n-2;i>=0;i--)
    {
        if(x[i]>=x[i+1])
        {
            // cout<<"x[i]="<<x[i]<<endl;
            // cout<<"x[i+1]="<<x[i+1]<<endl;
            while (true)
            {
                if(x[i]<x[i+1])
                {
                    break;
                }
                x[i]/=2;
                if(x[i]==0 && x[i+1]==0)
                {
                    flag=true; 
                    break; 
                }
                c++;
            } 
        }
    }
    if(flag) cout<<-1<<endl;
    else
    cout<<c<<endl;
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
       solve();
    }
    
}