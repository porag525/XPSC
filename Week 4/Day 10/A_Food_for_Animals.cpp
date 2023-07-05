#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
    if(a>=x && b>=y) cout<<"YES"<<endl;
    else{
       if(a>=x && b<y)
       {
           if(c+b<y) cout<<"NO"<<endl;
           else cout<<"YES"<<endl;
       }
      else if(b>=y &&  a<x)
       {
        if(a+c<x) cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
       }
       else if(a<x && b<y)
       {
          int t1=x-a;
          int t2=y-b;
          int t3=t1+t2;
          if(c<t3)cout<<"NO"<<endl;
          else cout<<"YES"<<endl;

       }

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