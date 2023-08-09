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

    int i, j;
    int n, x;
    ll k;

    scanf("%d%I64d", &n, &k);

    deque<int> q;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        q.push_back(x);
    }

    if (k >= n)
    {
        printf("%d", n);
        return 0;
    }

    int cnt = 0;
    while (true)
    {
        deque<int>::iterator p = q.begin();

        x = q.front();
        p++;

        while (p != q.end())
        {
            if (x > *p)
                cnt++, p++;
            else
                break;
        }

        if (cnt >= k)
        {
            printf("%d", x);
            return 0;
        }

        cnt = 1;
        q.pop_front();
        q.push_back(x);
    }
}
