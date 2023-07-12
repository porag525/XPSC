#include <bits/stdc++.h>
using namespace std;
void solve()
{
     int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    bool a = true;
    if (n == 1)
        cout << "YES" << endl;
    else
    {

        for (int i = 1; i < n; i++)
        {
            if (abs(x[i] - x[i - 1]) > 1)
            {
                a = false;
                break;
            }
        }
        if (a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
   int t;cin>>t;
   while (t--)
   {
     solve();
   }
   
}