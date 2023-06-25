#define ll long long
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    ll ans = 0;
    ll c = 0;
    long long sum = 0;
    bool flag = true;
    int i = 0;
    while (i < n)
    {
        sum += abs(x[i]);
        if (x[i] < 0)
        {
            c++;
            i++;
        }
        else if (x[i] > 0)
        {
            if (c > 0)
            {
                ans++;
                c = 0;
            }

            i++;
        }
        else if(x[i]==0)
        {
            i++;
        }
    }
    if (c > 0)
        ans++;
    cout << sum << " " << ans << endl;
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