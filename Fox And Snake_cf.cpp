#include <bits/stdc++.h>
#define for(i, n) for (int i = 0; i < n; i++)
using namespace std;
int n;
int m;
int main()
{
    cin >> n >> m;
    int check = 1;
    while (n != 0)
    {
        if (check == 1)
        {
            for (i, m)
                cout << "#";
            cout << "\n";
            check++;
        }
        else if (check == 2)
        {
            for (i, m - 1)
                cout << ".";
            cout << "#"
                 << "\n";
            check++;
        }
        else if (check == 3)
        {
            for (i, m)
                cout << "#";
            cout << "\n";
            check++;
        }
        else
        {
            cout << "#";
            for (i, m - 1)
                cout << ".";
            cout << "\n";
            check=1;
        }
        n--;
    }
}