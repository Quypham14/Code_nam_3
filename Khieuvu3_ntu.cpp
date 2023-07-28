#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    int a[100001];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int check_number;
    check_number = n;
    int d = 0;
    if (check_number % 2 != 0)
        check_number = (check_number - 1) / 2;
    else
        check_number = check_number / 2;
    int b[100001];
    for (int i = 1; i <= n; i++)
        b[i] = 0;
    for (int i = 1; i <= check_number; i++)
        b[a[i]] = a[i] + k;
    for (int i = 1; i <= check_number; i++)
    {
        for (int j = check_number; j <= n; j++)
            if (b[a[i]] == a[j])
                d++;
    }
    cout << d;
    return 0;
}