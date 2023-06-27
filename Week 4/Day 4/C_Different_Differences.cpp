#include<bits/stdc++.h>
using namespace  std;
void solve()
{
    int k,n;
    cin>>k>>n;
    int j=1;
    int dif=1;
    for(int i=1;i<=k;i++)
    {
        cout<<j<<" ";
        if(n-(j+dif)>=k-(i+1))
        {
            j+=dif;
            dif++;
        }
        else j++;
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}