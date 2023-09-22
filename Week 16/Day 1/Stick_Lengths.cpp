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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll median = arr[n / 2];
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        result += abs(arr[i] - median);
    }
    cout << result << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
