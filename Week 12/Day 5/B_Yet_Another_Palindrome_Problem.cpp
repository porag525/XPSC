

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N;
        cin>>N;
        
        int A[N],i,j;
        for(i=0;i<N;++i)
        {
            cin>>A[i];
        }
        
        int f=0;
        for(i=0;i<N;++i)
        {
            for(j=i+1;j<N;++j)
            {
                if(A[i]==A[j]&&((j-i)>=2))
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
