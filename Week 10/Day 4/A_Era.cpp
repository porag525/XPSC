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

    long long res = 0;
    long long p;
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        long long x;
        cin >> x;
        long long dif = x - i;
        if (res > dif)
            res = res;
        else
            res = dif;
    }
    cout << res << endl;
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
