#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    int x[n];
    int odd_cout=0;
    int even_count=0;
    long long pre_sum[n];
    for (int i = 0; i < n; i++)
    {
         cin >> x[i];
         if(x[i]%2==0) even_count++;
         else odd_cout++;
    }
    pre_sum[0]=x[0];
    for(int i=1;i<n;i++)
    {
        pre_sum[i]=x[i]+pre_sum[i-1];   
    }
    long long ans=pre_sum[n-1];
    while (q--)
    {
        int s,add;
        cin>>s>>add;
        if(s==0)
        {
            ans+=even_count*add;
            if(add%2!=0)
            {
                odd_cout+=even_count;
                even_count=0;
            } 
        }
        else{
            ans+=odd_cout*add;
            if(add%2!=0)
            {
                even_count+=odd_cout;
                odd_cout=0;
            }
        }

        cout<<ans<<endl;
        
    }
    

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}