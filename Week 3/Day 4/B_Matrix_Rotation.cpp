#include<bits/stdc++.h>
using namespace std;
int a[2][2];
bool beauty()
{
      if(a[0][0]<=a[0][1] && a[1][0]<=a[1][1] && a[0][0]<=a[1][0] && a[0][1] <=a[1][1]) 
      return true;
      else
      return false;

}
bool  rotate90Clockwise()
{
    int N=2;
    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
 
            // Swap elements of each cycle
            // in clockwise direction
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
    bool a=beauty();
    return a;

}
void print()
{
    cout<<"90 degree rotaion"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }


}
void solve()
{
   
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
   bool w=beauty();
  // print();
   bool x= rotate90Clockwise();
  // print();
   bool y=rotate90Clockwise();
  // print();
   bool z=rotate90Clockwise();
  // print();
   if(w || x || y || z) cout<<"YES"<<endl;
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