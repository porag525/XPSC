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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> u(n);
    ll mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for (int j = 0; j < x; j++)
        {
            ll y;
            cin >> y;
            pq.push(y);
        }
        if (pq.size() > 0)
        {
            u[i].first = pq.top();
            mn = min(mn, pq.top());
            pq.pop();
        }
        if (pq.size() > 0)
        {
            u[i].second = pq.top();
            mn = min(mn, pq.top());
            pq.pop();
        }
    }
    ll mx = 0;
    ll l = 0;
    for (int i = 0; i < n; i++)
        l += u[i].second;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, (l - u[i].second) + mn);
    }
    cout << mx << endl;
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
