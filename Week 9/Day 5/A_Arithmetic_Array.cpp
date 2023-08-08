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
    int n;cin>>n;
    int x[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        sum+=x[i];
    }
    if(sum==n) cout<<0<<endl;
    else if(sum<n) cout<<1<<endl;
    else cout<<sum-n<<endl;
   
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
