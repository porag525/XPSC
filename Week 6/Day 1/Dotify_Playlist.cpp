#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, l;
    cin >> n >> k >> l;
    vector<int> ans;
    int c = 0;
    while (n--)
    {
        int mi, li;
        cin >> mi >> li;
        if (li == l)
            ans.push_back(mi);
    }
    if (ans.size()<k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(ans.begin(),ans.end());
        reverse(ans.begin(), ans.end());
       // for(auto u:ans) cout<<u<<endl;
        if (k == 1)
            cout << ans.front() << endl;
        else
        {
            int sum = 0;
            for (auto u : ans)
            {
                if (c == k)
                    break;
                else
                {
                     sum += u;
                     c++;
                }
                   
            }
            cout<<sum<<endl;
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