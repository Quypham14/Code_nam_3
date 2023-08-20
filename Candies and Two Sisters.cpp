#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long candies;
        cin >> candies;
        if (candies % 2 == 0)
            cout << candies / 2 - 1 << "\n";
        else
            cout << candies / 2 << "\n";
    }
    return 0;
}