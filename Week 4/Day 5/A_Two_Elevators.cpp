#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1) cout<<a<<endl;
    else{
        if(b>c)
        {
            a--;
            int x=b-1;
            if(a>x) cout<<2<<endl;
            else if(a==x) cout<<3<<endl;
            else cout<<1<<endl;
        }
        else{
            a--;
            int x=c-b;
            x+=c-1;
            if(a>x) cout<<2<<endl;
            else if(a==x) cout<<3<<endl;
            else cout<<1<<endl;
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