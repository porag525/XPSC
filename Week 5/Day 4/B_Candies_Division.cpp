#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;cin>>n>>k;
    if(n%k==0)
    {
        cout<<n<<endl; 
    }
    else
    {
        int x=n/k;
        int tmp;
        tmp=k/2;
       // cout<<tmp<<endl;
        int rem=n-x*k;
        int ans;
        if(rem<=tmp)ans=x*k+rem;
        else  ans=x*k+tmp;
        cout<<ans<<endl;

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