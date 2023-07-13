#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        m[x[i]]++;
    }
    int a = 0;
    for (auto u : m)
    {
        if (u.second == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (x[i] == u.first)
                {
                    cout << i+1 << endl;
                    a = 1;
                    break;
                }
            }
        }
        if (a == 1)
            break;
    }
    if (a == 0)
        cout << -1 << endl;
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