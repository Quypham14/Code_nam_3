#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}
int n;
long a[1001];
long b[1001];
long m = 0;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        if (isPrime(a[i]))
            b[++m] = a[i];
    cout << b[1] << " ";
    for (int i = 1; i <= m - 1; i++)
        if (b[i] != b[i + 1])
            cout << b[i + 1] << " ";
    return 0;
}