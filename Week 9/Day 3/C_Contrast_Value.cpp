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
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll c=0,state=0;
    if(n==1)cout<<1<<endl;
    else{
        for(int i=1;i<n;i++)
        {
            if((v[i-1]>v[i]) && state!=1)
            {
                c++;
                state=1;
            }
            else if((v[i-1]<v[i]) && state!=-1)
            {
                c++;
                state=-1;
            }
        }
        cout<<c+1<<endl;
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
