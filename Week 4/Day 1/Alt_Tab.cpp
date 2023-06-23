#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    vector<string>x;
    vector<string>y;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        x.push_back(s);
    }
    reverse(x.begin(),x.end());
    for(auto u: x)
    {
        string a=u;
       if(mp[a]==0)
       {
        y.push_back(a);
        mp[u]++;
       }
       else  continue;  
    }
    vector<char>ans;
    for(auto u: y)
    {
        string a=u;
        int len=a.size();
        ans.push_back(a[len-2]);
        ans.push_back(a[len-1]); 
    }
    for(auto u:ans)
    {
        cout<<u;
    }
    
}