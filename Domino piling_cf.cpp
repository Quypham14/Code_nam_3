#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int q = m * n;
    if (q % 2 == 0)
        cout << q / 2;
    else
    {
        q = q - 1;
        cout << q / 2;
    }
    return 0;
}
