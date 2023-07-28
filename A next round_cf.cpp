#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[101];
    int k;
    int n;
    int d = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
        if ((arr[i] >=arr[k])&&(arr[i]!=0))
            d++;
    cout << d;
    return 0;
}