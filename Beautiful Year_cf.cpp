#include <bits/stdc++.h>
using namespace std;
bool check_number(int x)
{
    bool check = true;
    int a[10];
    int top = 0;
    int r;
    while (x != 0)
    {
        r = x % 10;
        a[++top] = r;
        x /= 10;
    }
    sort(a + 1, a + top + 1);
    for (int i = 1; i <= top; i++)
        if (a[i] == a[i + 1])
            check = false;
    if (check)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    n += 1;
    while (check_number(n) == false)
    {
        n++;
    }
    cout << n;
    return 0;
}