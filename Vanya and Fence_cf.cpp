#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    int a;
    cin >> n >> h;
    int sum = 0;
    while (n--)
    {
        cin >> a;
        if (a > h)
            sum += 2;
        else
            sum += 1;
    }
    cout<<sum;
    return 0;
}