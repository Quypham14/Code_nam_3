#include <bits/stdc++.h>
using namespace std;
int findNonFibonacci(int n)
{
    int prevPrev = 1, prev = 2, curr = 3;
    while (n > 0)
    {
        prevPrev = prev;
        prev = curr;
        curr = prevPrev + prev;

        n = n - (curr - prev - 1);
    }
    n = n + (curr - prev - 1);

    return prev + n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n; 
        cout << findNonFibonacci(n) << endl;
    }
    return 0;
}
