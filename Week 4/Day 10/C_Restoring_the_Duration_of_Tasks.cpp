#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>b[i];
  }
  vector<int>ans;
  int x=b[0]-a[0];
  ans.push_back(x);
  for(int i=1;i<n;i++)
  {
    if(a[i]<b[i-1])
    {
      int y=b[i]-b[i-1];
      ans.push_back(y);
    }
    else 
    {
       int x=b[i]-a[i];
       ans.push_back(x);
    }

  }
  for(auto u:ans)
  {
    cout<<u<<" ";
  }
  cout<<endl;
   
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