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
    ll n, i, a, b, j, k;
    cin >> n;
    ll ans = 0;
    for (i = 1; i <= n + 1; i++)
    {
        ll ar[n + 1];
        a = 1;
        for (j = 1; j < i; j++)
        {
            ar[a++] = j;
        }
        for (j = n; j >= i; j--)
        {
            ar[a++] = j;
        }
        a = 0;
        ll val = 0;
        for (j = 1; j <= n; j++)
        {
            val += (j * ar[j]);
            a = max(a, j * ar[j]);
        }
        val -= a;
        ans = max(ans, val);
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
