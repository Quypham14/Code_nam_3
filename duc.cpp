#include <bits/stdc++.h>
using namespace std;
int isnumber(char x)
{
    return int(x) - 48;
}
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
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int c[501];
        int m = 0;
        for (int i = 0; i < s.size(); ++i)
            if (isPrime(isnumber(s[i])))
            {
                c[m++] = s[i];
            }
        if (isPrime(s.size()) && m + 1 > s.size() - m - 1)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}
