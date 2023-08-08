#include <bits/stdc++.h>
using namespace std;
int n;
int a[100001];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int id = 1;
    int sum = 1;
    int maxx = 0;
    int equal = 1;
    while (id < n)
    {
        if (a[id] <= a[id + 1])
            sum++;
        else
            sum = 1;
        equal = max(equal, sum);
          id++;
    }
    cout<<equal;
    return 0;
}