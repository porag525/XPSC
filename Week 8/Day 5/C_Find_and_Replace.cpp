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
    string s;
    cin >> s;
    ll c[256];
    for (ll i = 0; i < 256; i++)
        c[i] = -1;
    for (ll i = 0; i < s.size(); i++)
    {
        if (c[s[i]] == -1)
            c[s[i]] = i;
        else
        {
            if (c[s[i]] % 2 != i % 2)
            {
                cout << "NO" << endl;
                 //cout<<s[i]<<" "<<i<<endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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
