#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                c++;
        }
        if (c <= 1)
            cout << "Water filling time" << endl;
        else
            cout << "Not now" << endl;
    }
}