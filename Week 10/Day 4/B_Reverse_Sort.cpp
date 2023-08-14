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
    string s;
    string s_sorted;
    vector<int> index;
    index.clear();
    cin >> n;
    cin >> s;
    s_sorted = s;
    sort(s_sorted.begin(), s_sorted.end());

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s_sorted[i])
        {
            index.push_back(i + 1);
        }
    }
    if (index.size() == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1 << '\n'
             << index.size() << " ";
        for (auto k : index)
            cout << k << " ";
    }
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
