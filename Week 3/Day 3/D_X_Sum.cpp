#include <bits/stdc++.h>
using namespace std;
const int N = 200;
int maze[N][N];
int r, c;
bool is_safe(int i, int j)
{
    if (i >= 0 && i < r && j >= 0 && j < c)
    {
        return true;
    }
    else
        return false;
}

void solve()
{

    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> maze[i][j];
        }
    }

    int ans;
    int ans_1;
    int ans_2;
    int ans_3;
    int ans_4;
    int mx = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ans = 0;
            ans_1=0;
            ans_2 = 0;
            ans_3 = 0;
            ans_4 = 0;

            int x = i;
            int y = j;
            while (true)
            {

                if (is_safe(x - 1, y - 1))
                {
                    ans_1 += maze[x - 1][y - 1];
                    x--;
                    y--;
                }
                else
                    break;
            }
            x = i;
            y = j;
            while (true)
            {

                if (is_safe(x - 1, y + 1))
                {
                    ans_2 += maze[x - 1][y + 1];
                    x--;
                    y++;
                }
                else
                    break;
            }
            x = i;
            y = j;
            while (true)
            {

                if (is_safe(x + 1, y - 1))
                {
                    ans_3 += maze[x + 1][y - 1];
                    x++;
                    y--;
                }
                else
                    break;
            }
            x = i;
            y = j;
            while (true)
            {

                if (is_safe(x + 1, y + 1))
                {
                    ans_4 += maze[x + 1][y + 1];
                    x++;
                    y++;
                }
                else
                    break;
            }

            ans = ans_1 + ans_2 + ans_3 + ans_4 + maze[i][j];
            if (ans > mx)
            {
                mx = ans;
            }
        }
    }
    cout << mx << endl;
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