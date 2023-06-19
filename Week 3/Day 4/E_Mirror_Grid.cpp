#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char a;
            cin >> a;
            x[i][j] = (a - '0');
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int s = x[i][j] + x[j][n - 1 - i] + x[n - 1 - i][n - 1 - j] + x[n - 1 - j][i];
            /*     normal           90 flip              180 flop               270 flip  */

            ans += min(s, 4 - s);
        }
    }
    cout << ans / 4 << endl;
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