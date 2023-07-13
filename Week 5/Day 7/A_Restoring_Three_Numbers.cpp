#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[4];
    vector<int>ans;
     for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }
    int mx = max({x[0], x[1], x[2], x[3]});
    for (int i = 0; i < 4; i++)
    {
        int a = mx - x[i];
        if(a!=0) ans.push_back(a);
    }
    for(auto u:ans) cout<<u<<" ";
}