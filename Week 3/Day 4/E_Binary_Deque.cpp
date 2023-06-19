#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    queue<int> q;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<s)
    {
        cout<<-1<<endl;
    }
    else{
        vector<int>next_one(n+1,n);
        int last=n;
         for(int i=n-1;i>=0;i--)
         {
            next_one[i]=last; //track where the last one.
            if(a[i]==1)
            {
                last=i;
            }
         }
         int ans=INT_MAX; int cur=0,L=0;
         for(int i=0;i<n;i++)
         {
            q.push(a[i]);
            cur+=a[i];  
            while (!q.empty() && cur>s)
            {
                cur-=q.front(); 
                q.pop();
                L++;
            }
            if(cur==s)
            {
                ans=min(ans,L+(n-next_one[i]));
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