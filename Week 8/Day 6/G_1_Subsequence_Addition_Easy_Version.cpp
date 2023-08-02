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
     ll n; cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll o=0,s=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==1) o++;
        else 
        {
            if(s+o>=a[i])
            {
                s+=a[i];
            }
            else 
            {
               cout<<"NO"<<endl;
                return;
            }
        }
    }
   cout<<"YES"<<endl;
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
