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

    int a[n];
    int ma = 0;
    int zeros = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
        {
            zeros++;
        }
        ma = max(ma, a[i]);
    }

    if (zeros <= n - zeros + 1)
    {
        cout << "0\n";
    }
    else
    {
        if (ma == 0)
        {
            cout << "1\n";
        }
        else if (ma == 1)
        {
            cout << "2\n";
        }
        else
        {
            cout << "1\n";
        }
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
