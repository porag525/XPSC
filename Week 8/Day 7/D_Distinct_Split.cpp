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
    int n;
    cin>>n;
    string s;
    cin >> s;
    int left[n+1],right[n+1];
    int c[26]={0},res=0;
    for(int i=0;i<n;i++)
    {
        if(c[s[i]-'a']==0) res++;
        c[s[i]-'a']++;
        left[i]=res;
    }
    int d[26]={0};
    res=0;
    for(int i=n-1;i>=0;i--)
    {
        if(d[s[i]-'a']==0) res++;
        d[s[i]-'a']++;
        right[i]=res;
    }
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        ans=max(ans,left[i]+right[i+1]);
    }
    cout<<ans<<endl;
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
