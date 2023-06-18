#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<string>a(n);
    map<string,bool>mp;//for check if the substring is in the input.
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]=true;
    }
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=1;j<a[i].size();j++)
        {
            string s1=a[i].substr(0,j);   // divide the given string in two string.
            string s2=a[i].substr(j,a[i].size()-1);

            if(mp[s1] && mp[s2]) // check if the both divided string  are available in the given strings.
            {
                flag=true;
                break;
            }
        }
        if(flag) cout<<'1';
        else cout<<'0';
       
       
    }
    cout<<endl;
    
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