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
    int b, c, h;
    cin >> b >> c >> h;
    int l = 0;
    int x = h + c;
    if(b<=x)
    {
        l=b*2-1;
    }
    else{
        l=x*2+1;
    }

    cout<<l<<endl;
    
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
