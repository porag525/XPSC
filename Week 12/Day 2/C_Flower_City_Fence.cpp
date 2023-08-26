#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
int fr[10000000];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, f = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (a[0] > n)
        {
            cout << "NO" << endl;
            continue;
        }

        int ps[n], f1[n] = {0};
        for (int i = 0; i < n; i++)
        {
            if (a[i] < n)
                f1[a[i]]--;
        }
        ps[0] = n;
        for (int i = 1; i < n; i++)
        {
            ps[i] = ps[i - 1] + f1[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ps[i] != a[i])
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}