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
    string s;cin>>s;
    int i=0,j=n-1;
    int ans=0;
    while (i<=j)
    {
        if(s[i]!=s[j])
        {
            ans+=2;
            i++;
            j--;
        }
        else break; 
    }
    cout<<n-ans<<endl;
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
