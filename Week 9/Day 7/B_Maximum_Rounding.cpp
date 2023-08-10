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
    ll n, i, a, b;
    string s;
    cin >> s;
    s = "0" + s;
    a = 0;
    for (i = 1; i < s.size(); i++)
    {
        if (a > 0)
        {
            s[i] = '0';
            continue;
        }
        if (s[i] >= '5')
        {
            ll j = i;
            while (j >= 0 && s[j] >= '5')
            {
                s[j] = '0';
                j--;
                if (j >= 0 && s[j] < '9')
                {
                    s[j]++;
                }
            }
            a++;
        }
    }
    if (s[0] == '0')
    {
        s.erase(s.begin());
    }
    cout << s << endl;
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
