#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        string x="3141592653589793238462643383279";
        cin>>s;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==x[i]) c++;
            else break;
        }
        cout<<c<<endl;
    }
}