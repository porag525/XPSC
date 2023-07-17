#define ll long long
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    ll m = 1e9 + 7;
    cin >> n >> k;

    ll ans = 1;
    while (n--)
    {
        ans = (ans * k) % m;
        k--;
        if (k == 0)
            break;
    }

    cout << ans << endl;
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
      solve();
    }
    
}