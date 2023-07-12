#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s="abcdefghijklmnopqrstuvwxyz";
    int k=0;
    string x;
    for(int i=0;i<n;i++)
    {
        x.push_back(s[k]);
        k++;
        if(k==b)k=0;
    }
    
    cout<<x<<endl;

}
int main()
{
    int t;cin>>t;
    while (t--)
    {
       solve();
    }
    
}