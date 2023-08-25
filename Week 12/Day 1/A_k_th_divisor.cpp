#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

int main()
{
    ll n, k, x;
    cin >> n >> k;
    vector<ll> v;
    unordered_map<ll, int> mp;
    for (ll i = 1; i <= sqrt(n) + 1; i++)
    {
        if (n % i == 0)
        {
            if (mp[i] == 0)
            {
                mp[i]++;
                v.push_back(i);
            }
            if (mp[n / i] == 0)
            {
                mp[n / i]++;
                v.push_back(n / i);
            }
        }
    }
    sort(all(v));
    if (v.size() < k)
        cout << -1 << endl;
    else
        cout << v[k - 1] << endl;

    return 0;
}