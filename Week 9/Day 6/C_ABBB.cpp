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
    string s;
    cin >> s;
    stack<char> t;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (t.size() == 0)
        {
            t.push(s[i]);
            continue;
        }
        if (s[i] == 'B' && (t.top() == 'A' || t.top() == 'B'))
            t.pop();
        else
        {
            t.push(s[i]);
        }
    }
    cout << (int)t.size() << "\n";
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
