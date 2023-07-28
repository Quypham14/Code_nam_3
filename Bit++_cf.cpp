#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string bit;
        cin >> bit;
        if (bit[1] == '+')
            sum += 1;
        else
            sum -= 1;

    }
    cout<<sum;
    return 0;
}