#include <bits/stdc++.h>
using namespace std;
int timUCLN(int a, int b)
{
    if (b == 0)
        return a;
    return timUCLN(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 1 && b == 1)
        cout << 1 << "/" << 1;
    else
    {
        int c = max(a, b);
        c = 6 - c + 1;
        cout << c / timUCLN(c, 6) << "/" << 6 / timUCLN(c, 6);
        return 0;
    }
}