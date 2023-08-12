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
    // ll n;
    // cin >> n;
    // if (n % 2)
    // {
    //     ll l = n / 2;
    //     ll r = l + 1;
    //     assert(n == l + r);
    //     cout << l << " " << r << "\n";
    //     return;
    // }
    // cout << -(n - 1) << " " << n << "\n";

    long long n;
    cin >> n;
    cout << -(n - 1) << " " << n << '\n';
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
