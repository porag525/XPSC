#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;
    int len_a=a.size();
    int len_b=b.size();
    if(a[len_a-1]=='L' && b[len_b-1]=='L')
    {
        if(len_a>len_b) cout<<">"<<endl;
        else if(len_a==len_b) cout<<"="<<endl;
        else cout<<"<"<<endl;
    }
    else if(a[len_a-1]=='S' && b[len_b-1]=='S')
    {
        if(len_a<len_b) cout<<">"<<endl;
        else if(len_a==len_b) cout<<"="<<endl;
        else cout<<"<"<<endl;
    }
    else if(a[len_a-1]=='L' || b[len_b-1]=='L' )
    {
        if(a[len_a-1]=='L') cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    else if(a[len_a-1]=='S' || b[len_b-1]=='S')
    {
         if(a[len_a-1]=='S') cout<<"<"<<endl;
        else cout<<">"<<endl;
    }
    else cout<<"="<<endl;

}
int main()
{
    int t; cin>>t;
    while (t--)
    {
       solve();
    }
    
}