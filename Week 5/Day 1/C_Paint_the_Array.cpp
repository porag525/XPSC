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
    ll x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    bool a = false;
    ll ans = 0;
    ll pic;
    for (int i = 0; i < n; i++)
    {
        a = false;
        pic = x[i];

        for (int j = 0; j < n - 1; j++)
        {

            if (x[j] % pic == 0 && x[j + 1] % pic == 0)
            {
                a = true;
                break;
            }
            else if (x[j] % pic != 0 && x[j + 1] % pic != 0)
            {
                a = true;
                break;
            }
        }
        if (!a)
        {
            ans = pic;
            break;
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
