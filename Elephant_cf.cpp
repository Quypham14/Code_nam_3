#include <bits/stdc++.h>
using namespace std;
int n;
int number = 0;
int main()
{
    cin >> n;
    int index = 5;
    while (n != 0)
    {

        if (n >= index)
        {
            n = n - index;
            number += 1;
        }
        else
            index -= 1;
    }
    cout << number;
    return 0;
}