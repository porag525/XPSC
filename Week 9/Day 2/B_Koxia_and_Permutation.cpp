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
    int n, k;
    cin >> n >> k;
    int i, j;
    i = n;
    j = 1;

    while (i >= j)
    {
        cout << i << " ";
        i--;

        if (i >= j)
        {
            cout << j << " ";
            j++;
        }
    }
    cout << "\n";
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
