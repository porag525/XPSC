#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int x[n];
    map<int,int>m;
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(m[x[i]]==0)
        {
            st.push(x[i]);
            m[x[i]]++;
        }
        else break;
    }
    
    cout<<n-st.size()<<endl;

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