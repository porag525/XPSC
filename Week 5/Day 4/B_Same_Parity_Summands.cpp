#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
   vector<int>ans;
   int tmp1=n-k+1;
   int tmp2=n-2*(k-1);
   if(tmp1%2!=0 && tmp1>0)
   {
    cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++)
    {
        ans.push_back(1);
    }
    ans.push_back(tmp1);
    for(auto u:ans) cout<<u<<" ";
    cout<<endl;
   }
   else if(tmp2%2==0 && tmp2>1)
   {
     cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++)
    {
        ans.push_back(2);
    }
    ans.push_back(tmp2);
    for(auto u:ans) cout<<u<<" ";
    cout<<endl;
   }
   else 
   {
    cout<<"NO"<<endl;
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