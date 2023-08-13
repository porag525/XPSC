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
    string s;
    cin>>s;
    char a=s[0];
    int idx=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]<a)
        {
            a=s[i];
            idx=i;
            
        }
    }
    cout<<a<<" ";
    for(int i=0;i<s.size();i++)
    {
        if(i!=idx) cout<<s[i];
    }
    cout<<endl;

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
