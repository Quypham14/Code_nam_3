#include <iostream>
using namespace std;

int findLargestPower(int n, int p)
{
    int x = 0;
    while (n > 0)
    {
        n /= p;
        x += n;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        int result = findLargestPower(n, p);
        cout << result << endl;
    }
    return 0;
}