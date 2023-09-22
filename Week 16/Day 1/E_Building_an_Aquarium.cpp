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
    ll n, i, k, a, b, j;
    cin >> n >> k;
    ll ar[n];
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll l = 1, r = 2e9, ans;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        a = 0;
        for (i = 0; i < n; i++)
        {
            if (ar[i] < mid)
            {
                a += mid - ar[i];
            }
        }
        if (a <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
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
