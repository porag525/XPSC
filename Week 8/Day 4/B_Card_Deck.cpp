/*
__________________________
| Author:Md.Moniruzzaman |
--------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define f front
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> x;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    map<int,int> m;
    while (!x.empty())
    {

        int idx = v.back().second;
        int value = v.back().first;
        if (m[value] == 0)
        {

            for (int j = idx; j < x.size(); j++)
            {
                ans.push_back(x[j]);
                m[x[j]]++;
            }
            x.erase(x.begin() + idx, x.begin() + x.size());
            v.pop_back();
        }
        else v.pop_back();
    }
    for (auto u : ans)
        cout << u << " ";
    cout<<endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
    return 0;
}
