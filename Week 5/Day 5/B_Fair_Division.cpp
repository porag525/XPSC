#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int ans=0;
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]==1) c1++;
        else c2++;
    }
    if(n%2==0)
    {
        if(c1==0 || c2==0)
        {
           cout<<"YES"<<endl;
        }
       else if(c1%2==0 && c2%2==0 )
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else 
    {
       if(c2%2!=0)
       {
          if(c1==0) cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
       
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