#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    ll x[n];
    vector<pair<ll, ll>> v;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    reverse(x, x + n);
    for (int i = 0; i < n;)
    {
        int j = i;
        while (i < n && x[i] == x[j])
        {
            i++;
        }
        v.push_back({x[j], i - j});
    }
    ans = v[0].second;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first + 1 == v[i - 1].first)
        {
            ans += max((v[i].second - v[i - 1].second), 0ll);
        }
        else
        {
            ans += v[i].second;
        }
    }

    cout << ans << endl;
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