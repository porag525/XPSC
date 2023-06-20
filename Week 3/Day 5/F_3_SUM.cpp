#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int y=x%10;
        mp[y]++;
        if(mp[y]<=3) v.push_back(y);
    }

    bool ok=false;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
               int x=v[i]+v[j]+v[k];
               if(x%10==3) ok=true;
            }
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   
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

/*
Ashik Bin Aziz
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t; cin>>t; while(t--)
   {
       int n;       cin>>n;
       vector<int>v;
       map<int,int>mp;
       while(n--)
       {
           int x;   cin>>x;
           int y=x%10;  mp[y]++;
           if(mp[y]<=3) v.push_back(y);
       }
       bool ok=false;
       for(int i=0; i<v.size(); i++)
        for(int j=i+1; j<v.size(); j++)
         for(int k=j+1; k<v.size(); k++)
         {
            int sum=v[i]+v[j]+v[k];
            if(sum%10==3) ok=true;
         }

         if(ok) cout<<"YES\n";
         else cout<<"NO\n";
   }
}*/