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
    int ar[n+2];
    bool inc=true;
 
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i)
        {
            if(ar[i]<=ar[i-1])inc=false;
        }
    }
 
    if(n%2==0)cout<<"YES\n";
    else if(!inc)cout<<"YES\n";
    else cout<<"NO\n";
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
