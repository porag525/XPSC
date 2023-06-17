#include <bits/stdc++.h>
using namespace std;
int maze[8][8];
bool safe(int i,int j)
{
    if(maze[i-1][j-1]==1 && maze[i-1][j+1]==1 && maze[i+1][j-1]==1 && maze[i+1][j+1]==1)
    {
        return true;
    }
    else
    return false;


}
void solve()
{

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char x;
            cin >> x;
            if (x == '#')
            {
                maze[i][j] = 1;
            }
            else
            {
                maze[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(safe(i,j))
            {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}