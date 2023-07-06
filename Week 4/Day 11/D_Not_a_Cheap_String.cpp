#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    ll x;
    cin >> x;
    ll sum = 0;
    vector<pair<int , int>> p;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 96;
        sum += x;
        pair<int,int> temp;
        temp = make_pair(x,i);
        p.push_back(temp);
    }
    sort(p.begin(),p.end());
    if (sum < x)
        cout << s << endl;
    else
    {
       while (sum>x)
       {
            pair<int,int>a=p.back();
            int value=a.first;
            int idx=a.second;
            sum-=value;
            s[idx]=0;
            p.pop_back();
       } 
       bool flag =true;
       for(int i=0;i<s.size();i++)
       {
        if(s[i]!=0)
        {
            flag=false;
            cout<<s[i];
        }

       }
       if(flag)
       {
        cout<<" "<<endl;
       }
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}