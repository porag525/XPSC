#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
      vector<int>ans;
      ll x[7];
      for(int i=0;i<7;i++)
      {
        cin>>x[i];
      }
      ll l=x[6];
      ll sum=0;
      for(int i=0;i<4;i++)
      {
        sum+=x[i];
      }
      ll dif=sum-l;
      bool one=true;
      for(int i=0;i<4;i++)
      {
        if(one && x[i]==dif)
        {
            one=false;
           continue;
        }
        else
        ans.push_back(x[i]);
      }
      for(auto u:ans) cout<<u<<" ";
      cout<<endl;

    }
    
}