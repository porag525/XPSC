#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef Porag
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 4e5 +5;
typedef pair<int,int> pii;



void TEST_CASES()
{
    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll>a(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    ll start = 0;
    if(a[0]!=1){
        a.insert(a.begin(),1ll);
        start = 1;
    }
    m = a.size();
    vector<ll>koto(m);
    ll sum = 0;
    for(int i=0;i<m;i++)
    {
        ll nxt = (i+1 < m? a[i+1]-1 : n);
        ll cur = a[i];
        ll dif = nxt - cur;
        koto[i] = 1 + dif/d;
        sum += koto[i];
    }
    debug(koto,sum);
    vector<ll>hobe(m);
    ll mini = 1e18;
    ll cnt = 0;
    for(int i=start;i<m;i++)
    {
        ll tmp = sum - koto[i];
        ll prv;
        if(i-1 < 0)
        {
            hobe[i] = sum;
            mini = min(mini , hobe[i]);
            continue;
        }
        else{
            tmp -= koto[i-1];
            prv = a[i-1];
        }
        ll nxt = (i+1 < m? a[i+1]-1 : n);
        ll dif = nxt - prv;
        tmp += 1 + dif/d;
        hobe[i] = tmp;
        mini = min(mini , hobe[i]);
    }
    for(int i=start;i<m;i++)
        if(hobe[i] == mini)
            cnt++;
    cout<<mini<<" "<<cnt<<"\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}
