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
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, long long> prefix;
    for (int i = 1;i <= n;i++)
    {
        int l, r;
        cin >> l >> r;
        prefix[l]++;
        prefix[r + 1]--;
    }
    long long sum = 0;
    bool ok = true;
    for (auto u : prefix)
    {
        int idx=u.first;
        int value=u.second;
        sum += value;
        if (sum > 2)
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
return 0;
}
