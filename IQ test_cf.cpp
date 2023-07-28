#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[101];

    int x = 0;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        if (a[i] % 2 == 0)
            x++;
    if (x == 1)
    {
        for (int i = 1; i <= n; i++)
            if (a[i] % 2 == 0)
                cout << i;
    }
    else
    {
        for (int i = 1; i <= n; i++)
            if (a[i] % 2 != 0)
                cout << i;
    }
    return 0;
}