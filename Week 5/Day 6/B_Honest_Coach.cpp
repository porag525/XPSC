#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    int i=0,j=n-1;
    int mn=INT_MAX;
    for(int i=1;i<n;i++)
    {
        int a=abs(x[i-1]-x[i]);
        if(a<mn) mn=a;
    }
    cout<<mn<<endl;
    

}
int main()
{
    int t;cin>>t;
    while (t--)
    {
       solve();
    }
    
}