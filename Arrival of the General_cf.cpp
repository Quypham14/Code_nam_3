#include <bits/stdc++.h>
using namespace std;
int n;
int a[101];
void treatment(int a[])
{
    int top_number = a[1];
    int bottom_number = a[1];
    int id_top = 1;
    int id_bottom = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > top_number)
        {
            top_number = a[i];
            id_top = i;
        }
        if (a[i] <= bottom_number)
        {
            bottom_number = a[i];
            id_bottom = i;
        }
    }
    int last_number = id_top + (n - id_bottom);
    if (id_top > id_bottom)
        last_number--;
    cout << last_number-1;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    treatment(a);
    return 0;
}