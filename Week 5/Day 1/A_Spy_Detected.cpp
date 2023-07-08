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
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[x[i]]++;  
    }
    for(int i=0;i<n;i++)
    {
        if(m[x[i]]==1)
        {
            cout<<i+1<<endl;
            break;
        }
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