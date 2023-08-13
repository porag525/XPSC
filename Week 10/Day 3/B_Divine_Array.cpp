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

int N, Q;
vector<int> A;
vector<vector<int>> V;
void solve()
{
    cin >> N;
    A.resize(N);
    V.clear();
    for (auto &i : A)
        cin >> i;
    V.push_back(A);
    for (int i = 1;; i++)
    {
        vector<int> cnt(N + 1, 0), res;
        for (auto j : V.back())
            cnt[j]++;
        for (auto j : V.back())
            res.push_back(cnt[j]);
        if (res == V.back())
            break;
        V.push_back(res);
    }
    cin >> Q;
    while (Q--)
    {
        int a, b;
        cin >> a >> b;
        cout << V[min(b, (int)V.size() - 1)][a - 1] << "\n";
    }
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
