#include <iostream>
using namespace std;

unsigned long long max_1(unsigned long long N)
{
    int max_value = 0;
    if (N == 0)
        return 1;
    if (N < 10)
        return N;
    return max(max_1(N / 10) * (N % 10), max_1(N / 10 - 1) * 9);
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
        unsigned long long n;
        cin >> n;
        cout << max_1(n) << endl;
    }
    return 0;
}
