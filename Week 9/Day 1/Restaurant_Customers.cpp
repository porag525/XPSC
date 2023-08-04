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
const int N = 1e5 + 5;
long long arr[N];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    map<int, ll> x;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        x[a]++;
        x[b + 1]--;
    }
    ll sum = 0, ans = 0;
    for (auto u : x)
    {
        ll value=u.second;
        sum += value;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;

    return 0;
}
