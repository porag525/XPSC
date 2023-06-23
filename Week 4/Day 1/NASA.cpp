#include<bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define vll vector<ll>
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique(All(X)),(X).end())
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define pi pair<ll,ll>
#define MAX 100000
using namespace std;
ll cs=1;
vector<ll>v;
void solve()
{
    ll n; cin>>n;
    ll a[n];
    ll freq[35000]={0};
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<v.size();j++)
        {
            ll k=a[i] ^ v[j];
            if(k > (1<<15))
            {
                continue;
            }
            ll x=freq[k];
            ans+=freq[k];
        }
    }
    cout<<(ans+n)/2<<endl;
}
bool isPalindrome(ll val)
{
    string ans=to_string(val);
    string ans2=ans;
    reverse(ans2.begin(),ans2.end());
    return ans==ans2;
}
int main()
{
    fast;
    // palindrome
    for(ll i=0;i<(1<<15);i++)
    {
        if(isPalindrome(i))
        {
            v.push_back(i);
        }
    }

    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}