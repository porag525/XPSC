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
    ll n,x;
    cin>>n>>x;
    vector<ll>child(n);
    for(int i=0;i<n;i++)
    {
        cin>>child[i];
    }
    sort(child.begin(),child.end());
    int i=0;
    int j=n-1;
    int gondola=0;
    while (i<=j)
    {
        if(child[i]+child[j]<=x)
        {
            gondola++;
            i++;
            j--;
        }
        else{
            gondola++;
            j--;
        }
    }
    cout<<gondola<<endl;
    
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
