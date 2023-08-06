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
    int mx=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
         cin>>x[i];
         if(x[i]>mx) mx=x[i];
         if(x[i]<min) min=x[i];
    }
    cout<<mx-min<<endl;
   
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
