#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int n;
int a[101];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int tong1 = 0;
    int j = 0;
    sort(a + 1, a + n + 1, greater<int>());
    while (tong1 <= sum - tong1)
    {
        j++;
        tong1 += a[j];
    }
    cout << j;

    return 0;
}