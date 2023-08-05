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
    int n,ans,i,j;
    cin >> n;

    i = 2;
    j = 3 * n;
    ans = 0;

    vector<pair<ll, ll>> a1;

    while (i < j)
    {
        a1.push_back({i, j});
        i += 3;
        j -= 3;
        ans++;
    }

    cout << (n + 1) / 2 << "\n";

    for (i = 0; i < ans; i++)
    {
        cout << a1[i].first << " " << a1[i].second << "\n";
    }
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