#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int ans;
    int x=s[0]-97;
    int y=s[1]-97;
    if(x<y)
      ans=25*x + y; 
    else{
        ans=25*x +y+1;
    }
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