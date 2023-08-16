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
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int count = 1;
    int pre=x[0];
    if(x[0]==1)count++;
    for (int i = 1; i < n; i++)
    {
        pre = x[i - 1];
        if (x[i] == 0)
        {
            if (pre == 0)
            {
                cout << -1 << endl;
                return;
            }
            else
                continue;
        }
        else
        {
            if (pre == 1)
            {
                count += 5;
            }
            else
                count++;
        }
    }

    cout << count << endl;
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
