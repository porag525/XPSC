#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    map<char,int>temp;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(temp.size()<=3)
        temp[s[i]]++;
        if(temp.size()>3)
        {
            i--;
            temp.clear();
            ans++;
        }
    }
    cout<<ans+1<<endl;
    
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}