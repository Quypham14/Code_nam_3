#include <bits/stdc++.h>
using namespace std;
bool check_lucky_number(int x)
{
    int r;
    bool check = true;
    while (x != 0)
    {
        r = x % 10;
        if ((r != 4) && (r != 7))
            check = false;
        x /= 10;
    }
    if (check == true)
        return true;
    return false;
}
int isLuckyNumber(int x)
{
    int j = 4;
    while (j <= x / 2)
    {
        if ((x % j == 0) && (check_lucky_number(j)))
            return 1;
        j++;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    if ((check_lucky_number(n)) || (isLuckyNumber(n)))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}