#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
        {
            ans.push_back(s[i] + 48);
        }
        else
        {
            if (s[i + 1] != '0')
            {
                int x = s[i - 2] - 48;
                int y = s[i - 1] - 48;
                int temp = x * 10 + y;
                ans.pop_back();
                ans.pop_back();
                ans.push_back(96 + temp);
            }
            else{
                  int x = s[i - 2] - 48;
                  x*=10;
                  ans.push_back(x+96);
                 
            }
        }
    }
    for (auto u : ans)
    {
        cout << u;
    }
    cout << endl;
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