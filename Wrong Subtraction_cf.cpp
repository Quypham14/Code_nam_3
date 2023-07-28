#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;
    while (k != 0)
    {
        if (n % 10 != 0)
        {
            n -= 1;
        }
        else if (n % 10 == 0)
            n /= 10;
        k--;
    }
    cout << n;
    return 0;
}