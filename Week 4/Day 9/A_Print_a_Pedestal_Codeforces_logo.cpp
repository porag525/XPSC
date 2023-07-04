#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int f,s,t;
    if(n%3!=0)
    {
        int x=n%3;
        n-=x;
        int ans=n/3;
        s=ans;
        f=ans+x;
        t=ans;
        if(x>1)
        {
            s++;
            t--;
        }
        else if(x==1)
        {
            f++;
            t--;
        }
    }
    else{
        int ans=n/3;
        f=ans+1;
        s=ans;
        t=ans-1;

    }
    cout<<s<<" "<<f<<" "<<t<<endl;
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
      solve();
    }
    

}