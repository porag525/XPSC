#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    int ans=0;
    int element_to_delete=0;
     int c=0;
    for(auto x: mp)
    {
        int a=x.second-1;
        element_to_delete+=a;
        c++; 
    }
    ans=c;
    if(element_to_delete%2!=0)
    ans--;
    cout<<ans<<endl;
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