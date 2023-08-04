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
long long arr[100005];
long long q[100005];
long long p[100005];
void solve()
{
    int n,m,k;cin>>n>>m>>k;
   
    for(int i=1;i<=n;i++) cin>>arr[i];

    vector<pair<int,int>>range(m+1);
    vector<ll>value(m+1);

    for(int i=1;i<=m;i++)
    {
        int l,r,d;
        cin>>l>>r>>d;
        range[i]={l,r};
        value[i]=d;
    }

    for(int i=1;i<=k;i++)
    {
        int x,y;cin>>x>>y;
        q[x]++;
        q[y+1]--;
    }

    for(int i=1;i<=m;i++) q[i]+=q[i-1];

    for(int i=1;i<=m;i++)
    {
        value[i]=value[i]*q[i];
    }

    for(int i=1;i<=m;i++)
    {
        int l=range[i].first;
        int r=range[i].second;

        p[l]+=(value[i]);
        p[r+1]-=(value[i]);
    }
    for(int i=1;i<=n;i++) p[i]+=p[i-1];
    for(int i=1;i<=n;i++) cout<<p[i]+arr[i]<<" ";
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   solve();
return 0;
}
