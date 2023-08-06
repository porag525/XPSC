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
    if (n == 1)
        cout << 1 << endl;
    else if (n % 2 != 0)
        cout << -1 << endl;
    else
    {
      int j=1;
      for(int i=n;i>0;i--)
      {
        if(i%2){
            cout<<j<<" ";
            j+=2;
        }
        else cout<<i<<" ";
      }
      cout<<endl;
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
