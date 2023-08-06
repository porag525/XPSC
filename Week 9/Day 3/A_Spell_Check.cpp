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
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = false;
    int arr[150]={0};
    if (s.size() == 5)
    {
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]]++;
        }
        for(int i=0;i<150;i++)
        {
            if(arr[84]==1 && arr[105]==1 && arr[109]==1 && arr[117]==1 && arr[114]==1)
            flag=true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
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
