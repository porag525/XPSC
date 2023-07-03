#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==3) cout<<-1<<endl;
    else if(n==5) cout<<"5 4 1 2 3"<<endl;
    else
    {
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(i);
        }
        reverse(ans.begin(),ans.end());
        if(n%2!=0)
        {
            swap(ans[n/2],ans[n/2+1]);
        }
        for(auto u:ans)
        {
            cout<<u<<" ";
        }
        cout<<endl;
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