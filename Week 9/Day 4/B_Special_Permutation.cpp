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
    int n, a, b;
    cin >> n >> a >> b;
    bool flag = false;
    int ans[n];
    ans[0] = a, ans[n - 1] = b;
    int l, r;
    if (a < b)
    {
        l = n - a - 1;
        r = b - 2;
    }
    else
    {
        l = n - a;
        r = b - 1;
    }

    int x = n / 2 - 1;
    if (l < x || r < x)
    {
        cout << -1 << endl;
        return;
    }
    int j = n;
    for (int i = 1; i < n - 1; i++)
    {
        if (j == a || j == b)
            j--;
        if (j == a || j == b)
            j--;
        ans[i] = j;
        j--;
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
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
