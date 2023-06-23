#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,m,h;
	    cin>>n>>m>>h;
	    int a[n];
	    int b[m];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    long long ans=0;
	    sort(a,a+n,greater<int>());
	    sort(b,b+m,greater<int>());
        int y=min(n,m);
        //cout<<y<<endl;;
	    for(int i=0;i<y;i++){
            //cout<<a[i]<<" "<<b[i]<<endl;
	        if(b[i]*h>=a[i]){
                
	            ans+=a[i];
	        }
	        else ans+=(b[i]*h);
	    }
	    cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}