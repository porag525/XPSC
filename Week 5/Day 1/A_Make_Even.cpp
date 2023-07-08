#include<bits/stdc++.h>
using namespace std;
vector<int>digits;
bool digit(int a)
{
    int d;
    bool even=false;
    while (a)
    {
       d=a%10;
       if(d%2==0)
       {
        even=true;
       }
       digits.push_back(d);
       a/=10;
    }
    return even;
    
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        if(!digit(x)) cout<<-1<<endl;
        else{
            if(x%2==0) cout<<0<<endl;
            else{
                reverse(digits.begin(),digits.end());
                int f=digits.front();
                if(f%2==0) cout<<1<<endl;
                else cout<<2<<endl;
            }
        }
    }

    
}