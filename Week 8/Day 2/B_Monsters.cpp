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
    int n, k;
    cin >> n >> k;
   
    vector<pair<ll,int>>x;
    for (int i = 0; i < n; i++)
    {  
        ll a;cin>>a;
       x.push_back({a,i+1});
    }
    sort(x.rbegin(),x.rend());
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        
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
