#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    map<int,int>m;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int a=x[i]+x[j];
            cout<<x[i]<<"+"<<x[j]<<"="<<a<<endl;
            m[a]++;
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