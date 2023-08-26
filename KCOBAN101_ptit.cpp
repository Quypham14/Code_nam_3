#include <bits/stdc++.h>
using namespace std;
int t;
int num_1, num_2;
void number()
{
    cin >> num_1 >> num_2;
    int maxx = max(num_1, num_2);
    int minx = min(num_1, num_2);
    num_1 = minx;
    num_2 = maxx;
    int nb[100];
    int r;
    memset(nb, 0, sizeof(nb));
    for (int i = num_1; i <= num_2; i++)
    {
        if (i < 10)
        {
            nb[i]++;
        }
        else
        {
            int quick_number = i;
            while (quick_number != 0)
            {
                r = quick_number % 10;
                // cout << r << " ";
                nb[r]++;
                quick_number /= 10;
            }
        }
    }
    for (int j = 0; j <= 9; j++)
        cout << nb[j] << " ";
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {

        number();
    }
    return 0;
}