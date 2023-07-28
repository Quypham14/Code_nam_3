#include <bits/stdc++.h>
using namespace std;
int n;
long a[101][101];
bool check;
int main()
{
    check = 1;
    cin >> n;
    for (long i = 1; i <= n; i++)
        for (long j = 1; j <= 3; j++)
            cin >> a[i][j];
    int j = 1;
    while (j <= 3)
    {
        long sum = 0;
        for (long i = 1; i <= n; i++)
            sum += a[i][j];
        if (sum != 0)
            check = 0;
        j++;
       
    }
    if (check == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}