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
    for(int i=0;i<n;i++) cin>>x[i];
    int mn=INT_MAX; int mx=INT_MIN;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]<mn)
        {
            mn=x[i];
        } 
    }
    for(int i=0;i<n;i++) if(x[i]==mn) c++;
    cout<<n-c<<endl;
   
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
