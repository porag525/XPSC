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
#define lli long long int
#define inf 1000000000
#define mod 1000000007
#define rep(i,n) for(lli i=0; i<n; i++)
using namespace std;
void solve()
{
    lli n; cin>>n;
		lli a[n]; rep(i,n) cin>>a[i];
		lli bit[30]; rep(i,30) bit[i]=0;
		for(lli i=0; i<30; i++){
			lli num=(1ll<<i);
			for(lli j=0; j<n; j++){
				if((a[j]&num)!=0) bit[i]++; 
			}
//			cout<<i<<" "<<bit[i]<<"\n";
		}
		for(lli k=1; k<=n; k++){
			bool flag=0;
			for(lli i=0; i<30; i++){
				if((bit[i]%k)!=0){
					flag=1;
					break;
				}
			}
			if(flag==0) cout<<k<<" ";
		}
		cout<<"\n";
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
