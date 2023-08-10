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
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]%2==0) even++;
        else odd++;
    }
    if(even>=1)
    {
        if(odd%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(odd%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
