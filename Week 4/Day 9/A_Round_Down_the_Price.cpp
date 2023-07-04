#include<bits/stdc++.h>
using namespace std;
int digit(int a)
{
    int c=0;
    while (a)
    {
        a/=10;
        c++;
    }
    return c;
    
}
void solve()
{
    int x;
    cin>>x;
    int count=digit(x);
    int temp=1;
    for(int i=1;i<count;i++)
    {
        temp*=10;
    }
    int ans=x-temp;
    cout<<ans<<endl;

}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}