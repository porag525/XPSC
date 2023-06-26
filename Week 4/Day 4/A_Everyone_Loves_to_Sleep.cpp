#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,H,M;
    cin>>n>>H>>M;
    int h,m;
    pair<int,int>t;
    vector<pair<int,int>>p;
    while (n--)
    {
        int hi,mi;
        cin>>hi>>mi;
        if(hi>=H)
        {
            if(hi==H)
            {
                if(M>mi)
                {
                    h=24-H+hi-1;
                    m=60-M+mi;
                }
                else
                {
                    h=0;
                    m=mi-M;
                }
            }
            else if(M!=0)
            {
            h=hi-H-1;
            m=60-M+mi;
            }
            else{
                h=hi-H;
                m=mi;
            }
        }
        else{
            if(M!=0)
            {
                h=24-H-1+hi;
                m=60-M+mi;
            }
            else{
                h=24-H+hi;
                m=mi;
            }
        }
        if(m>=60)
        {
            m-=60;
            h++;
        } 
        t=make_pair(h,m);
        p.push_back(t);

    }
    sort(p.begin(),p.end());
    for(auto u:p)
    {
        cout<<u.first<<" "<<u.second<<endl;
        break;
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
