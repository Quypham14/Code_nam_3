#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int main()
{
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            cin >> a[i][j];
    int sum = 0;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            if (a[i][j] == 1)
                sum = sum + abs(3 - i) + abs(3 - j);
    cout << sum;
    return 0;
}