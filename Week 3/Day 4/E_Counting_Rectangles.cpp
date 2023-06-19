#define ll long long
#include <bits/stdc++.h>
using namespace std;
ll pre[1001][1001];
void solve()
{
    ll n, q, hs, ws, hb, wb, ans;
    cin >> n >> q;
    for (ll i = 0; i <= 1000; i++)
    {
        for (ll j = 0; j <= 1000; j++)
        {
            pre[i][j] = 0;
        }
    }
    for (ll k = 0; k < n; k++)
    {
        ll i, j;
        cin >> i >> j;
        pre[i][j] = pre[i][j] + i * j;
    }
    for (ll i = 1; i <= 1000; i++)
    {
        for (ll j = 2; j <= 1000; j++)
        {
            pre[i][j] = pre[i][j] + pre[i][j - 1];
        }
    }

    for (ll j = 1; j <= 1000; j++)
    {
        for (ll i = 2; i <= 1000; i++)
        {
            pre[i][j] = pre[i][j] + pre[i - 1][j];
        }
    }

    while (q--)
    {
        cin >> hs >> ws >> hb >> wb;
        ans = pre[hb - 1][wb - 1] - pre[hs][wb - 1] - pre[hb - 1][ws] + pre[hs][ws];

        cout << ans << "\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

/*
  ############################
  Brute Force Method....Gives (TLE)
  ############################
    int n,q;
    cin>>n>>q;
   vector<pair<ll,ll>>hw;
   for(int i=0;i<n;i++)
   {
    ll h,w;
    cin>>h>>w;
    pair<ll,ll>x;
    x=make_pair(h,w);
    hw.push_back(x);
   }

   for(int i=0;i<q;i++)
   {
         ll hs,ws,hb,wb;
        cin>>hs>>ws>>hb>>wb;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll l=hw[i].first;
            ll w=hw[i].second;
            if(l>hs && w>ws && l<hb && w<wb)
            {
                 ll x=l*w;
                 ans+=x;
            }
        }
        cout<<ans<<endl;

*/
