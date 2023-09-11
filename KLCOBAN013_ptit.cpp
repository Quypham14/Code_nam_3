#include <bits/stdc++.h>
using namespace std;
int t;
int n;
int a[50000];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        int am = 0;
        bool check = true;
        int duong = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] == 0)
            {
                cout << -1 << "\n";
                check = false;
                break;
            }

            if (a[i] > 0)
                duong++;
            else
                am++;
        }
        if (check)
            cout << min(am, duong) << "\n";
    }
    return 0;
}