#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll a[n];
    vector<pair<ll, ll>> qu;
    ll ans[q];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        qu.push_back({k, i});
    }
    sort(qu.begin(), qu.end());
    ll s = 0;
    ll j = 0;
    for (ll i = 0; i < q; i++)
    {
        while (j < n)
        {
            if (a[j] <= qu[i].first)
            {
                s = s + a[j];
                j++;
            }
            else
            {
                break;
            }
        }
        ans[qu[i].second] = s;
    }
    for (ll i = 0; i < q; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}