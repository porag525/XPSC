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
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R') a++;
        else if(s[i]=='L')a--;
        else if(s[i]=='U') b++;
        else b--;
        if(a==1 && b==1)
        { cout<<"YES"<<endl;
          return;
        }
    }
    cout<<"NO"<<endl;
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
