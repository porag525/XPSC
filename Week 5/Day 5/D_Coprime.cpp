#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
vector<int> cop[1111];
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<int> mxIndx(1111, -1);

    for (int i = 1; i <= n; i++)
    {
        mxIndx[a[i]] = i;
    }

    int ans = 0;

    for (int i = 1; i <= 1000; i++)
    {
        if (mxIndx[i] == -1)
            continue;

        if (i == 1)
        {
            ans = max(ans, 2 * mxIndx[i]);
            continue;
        }
        for (auto p : cop[i])
        {
            if (mxIndx[p] != -1)
            {
                ans = max(ans, mxIndx[i] + mxIndx[p]);
            }
        }
    }
    if (ans == 0)
        ans = -1;
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                cop[i].push_back(j);
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}