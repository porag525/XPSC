#include<bits/stdc++.h>
using namespace std;
int digit(int x)
{
    int a=0;
    while (x!=0)
    {
        x/=10;
        a++;
    }
    return a;
    
}
void solve()
{
    int a;
    cin>>a;
    int p=digit(a);
    p--;
    int x=1;
   for(int i=0;i<p;i++)
   {
     x*=10; 
   }
    int ans=a-x;
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