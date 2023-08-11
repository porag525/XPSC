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
    ll n,c;
    ll a[n];
    cin >> n >> c;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int low = 0, high = a[n - 1], mid, best = 0;
    while (low <= high)
    {
        mid = (low + high + 1) / 2;
        int cnt = 1, left = 0;
        for (int i = 1; i < n && cnt < c; i++)
        {
            if (a[i] - a[left] >= mid)
                left = i, cnt++;
        }
        if (cnt >= c)
        {
            best = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << best << endl;
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
