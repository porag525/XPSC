#include<bits/stdc++.h>
using namespace std;
void solve()
{
    char s[3];
    for(int i=0;i<3;i++)
    {
        cin>>s[i];
    }
    strlwr(s);
  //  puts(s);
    if(s[0]=='y' && s[1]=='e' && s[2]=='s')
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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