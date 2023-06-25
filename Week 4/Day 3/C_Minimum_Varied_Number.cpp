#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a;
    cin>>a;
    int x=9;
    vector<int>v;
    while (a)
    {
        if(a>x)
        {
            v.push_back(x);
            a-=x;
            x--;
        }
        else
        {
            v.push_back(a);
            a=0;
        }
    }
   reverse(v.begin(),v.end());
   for(auto u:v)
   {
    cout<<u;
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