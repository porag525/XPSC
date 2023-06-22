#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
       cin>>x[i];
    }
    string s;
    cin>>s;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        int a=x[i];
        char b=s[i];
        for(int j=0;j<n;j++)
        {
            if(x[j]==a && s[j]!=b)
            {
                 flag=false;
                break;
            }
            else continue;

        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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