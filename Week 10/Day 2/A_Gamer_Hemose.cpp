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
     long long int n,a,i,h,b;
    cin>>n>>h;
    vector<long long int>v;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    a=v[0]+v[1];
    b=h/a;
    b=b*2;
    h=h%a;
    if(h>v[0])
    {
        b=b+2;
    }
    else if(h>0)
        b++;
    cout<<b<<endl;
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
