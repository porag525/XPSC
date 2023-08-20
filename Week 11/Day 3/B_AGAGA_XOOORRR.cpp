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
    int x = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x ^= a[i];
    }

    if (x == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        int k = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            k ^= a[i];
            if (k == x)
            {
                k = 0;
                count++;
            }
        }
        if (count >= 2)
        {
            cout << "YES" << endl;
        }

        else
            cout << "NO" << endl;
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
