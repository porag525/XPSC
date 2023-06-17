#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    int x=a[0];
    sort(a,a+4);
    reverse(a,a+4);
    for(int i=0;i<4;i++)
    {
        if(a[i]==x)
        {
            cout<<i<<endl;
            break;
        }
    }
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