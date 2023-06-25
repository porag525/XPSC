#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  int ans = 0;
  map<char,int>m;
  for (int i = 0; i < s.size(); i++)
  {
    m[s[i]]++;
    if(m.size()==4)
    {
      ans++;
      m.clear();
      i--;
    }

  }
  cout<<ans+1<<endl;
  
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