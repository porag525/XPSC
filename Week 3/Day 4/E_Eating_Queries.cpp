#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    int candy[n];
    for (int i = 0; i < n; i++)
        cin >> candy[i];
    sort(candy, candy + n);
    reverse(candy, candy + n);
   // for (int i = 0; i < n; i++)
       // cout << candy[i] << " ";
    int query[q];
    for (int i = 0; i < q; i++)
        cin >> query[i];
    int p_sum[n];
    p_sum[0] = candy[0];
    for (int i = 1; i < n; i++)
    {
        p_sum[i] = candy[i] + p_sum[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int x=query[i];
        if (x > p_sum[n - 1])
            cout << -1 << endl;
        else{
            int low=0,high=n-1;  //Binary Search (Linear search gives TLE)
            int idx=-1;
            while (low<=high)
            {
               int mid=low+(high-low)/2;
               if(p_sum[mid]>=x)
               {
                idx=mid;
                high=mid-1;
               }
               else{
                low=mid+1;
               }

            }
            cout<<idx+1<<endl;    
        }
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