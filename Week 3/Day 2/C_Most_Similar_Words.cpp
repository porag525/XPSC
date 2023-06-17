#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    char s[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> s[i][j];
        }
    }

    int mn = INT_MAX;
    for (int i = 0; i < a; i++)
    {

        for (int j = i + 1; j < a; j++)
        {
            int ans = 0;

            int x = 0;
            for (x = 0; x < b; x++)
            {
                ans += abs(s[i][x] - s[j][x]);
            }
            if (ans < mn)
            {
                mn = ans;
            }

        }
    }
    cout << mn << endl;
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