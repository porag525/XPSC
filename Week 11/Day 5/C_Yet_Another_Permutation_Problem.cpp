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
    int n;
    cin >> n;
    vector<bool> vis(n + 1);
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        int now = i;
        while (now <= n)
        {
            if (vis[now])
            {
                now *= 2;
                continue;
            }
            a.push_back(now);
            vis[now] = 1;
            now *= 2;
        }
    }
    for (int i : a)
        cout << i << " ";
    cout << "\n";
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
