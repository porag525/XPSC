#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count_w = 0;
    int ans=INT_MAX;
    for (int i = 0; i <= n - k; i++)
    {
        int j = i;
        for(int x=0;x<k;x++)
        {
            if(s[j]=='W')
            {
                count_w++;
            } 
            j++;
        }
        ans=min(ans,count_w);
        count_w=0;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
 //   cout<<t<<endl;
    while (t--)
    {
        solve();
    }
}