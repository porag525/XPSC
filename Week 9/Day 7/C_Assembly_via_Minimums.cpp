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
    ll n, i, a, b, j;
    cin >> n;
    map<ll, ll> mp;
    for (i = 0; i < (n * (n - 1)) / 2; i++)
    {
        cin >> a;
        mp[a]++;
    }
    auto it = mp.begin();
    for (i = 1; i <= n; i++)
    {
        if ((*it).second < n - i)
        {
            it++;
        }
        cout << (*it).first << " ";
        (*it).second -= (n - i);
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
