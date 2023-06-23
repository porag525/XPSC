#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,s;
    cin>>n>>s;
    long long x[n];
    for(int i=0;i<n;i++) cin>>x[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        //if (c==2) break;
       int  a= x[i] and s;
       cout<<a<<endl;
    }
    // if(c==2) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
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