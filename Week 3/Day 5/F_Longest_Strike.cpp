#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    map<int,int>x;
    for(int i=0;i<n;i++)
    {
         x[a[i]]++;
    }
     int ans = -1, L, R;
    int l = -1, r = -1;
    int cur = -1;
    for (auto u: x) {
        int num=u.first;
        int cnt=u.second;
      if (cnt < k) {
        cur = -1;
        continue;
      }
      if (cur == -1) {
        l = num;
        cur = num;
      }
      if (num == cur) {
        r = num;
      } else if (num == cur + 1) {
        cur = num;
        r = num;
      } else {
        cur = num;
        l = num, r = num;
      }
      if (r != -1 and r - l > ans) {
        L = l, R = r;
        ans = R - L;
      }
    }
    if (ans == -1) {
      cout << -1 << "\n";
    } else {
      cout << L << " " << R << "\n";
    }
  }
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      solve();
    }
    
}