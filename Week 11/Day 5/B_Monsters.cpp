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
    int n, k;
    cin >> n >> k;
    int x[n];
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % k)
            p.push_back({-(x % k), i});
        else
            p.push_back({-k, i});
    }
    sort(p.begin(),p.end());
    for (auto u:p)
    {
       cout<<u.second+1<<" ";
    }
    cout << "\n";
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
