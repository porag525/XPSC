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
    ll a, b, c;
    cin >> a >> b >> c;
    ll ani = 0;
    ll ban = 0;
    if (c % 2 == 0)
    {
        ani = c / 2;
        ban = c / 2;
    }
    else
    {
        ani = c / 2 + 1;
        ban = c - ani;
    }

    ani += a;
    ban += b;
    if (ani > ban)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
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
