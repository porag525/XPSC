#define ll long long
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++) cin>>x[i];
    sort(x,x+n);
    int i=0,j=n-1;
    ll ans=0;
    while (i<=j)
    {
        ans+= x[j]-x[i];
        i++;
        j--;
    }
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