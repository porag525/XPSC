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
    int ar[n + 4];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    long long int sum1 = 0, sum2 = 0, ans = 0;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        if (sum1 < sum2)
        {
            sum1 += ar[l];
            l++;
        }
        else
        {
            sum2 += ar[r];
            r--;
        }
        if (sum1 == sum2)
            ans = sum1;
    }
    cout << ans << endl;

    return 0;
}
