#include <bits/stdc++.h>
using namespace std;
int n;
int s1, s2, s3, s4;
int arr[100001];
int main()
{
    cin >> n;
    s1 = s2 = s3 = s4 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 4)
            s4++;
        else if (arr[i] == 3)
            s3++;
        else if (arr[i] == 2)
            s2++;
        else
            s1++;
    }
    int equal;
    equal = s3 + s4;
    s1 = max(0, s1 - s3);
    equal += (s2 + 1) / 2;
    s1 = max(0, s1 - 2 * (s2 % 2));
    equal += (s1 + 3) / 4;
    cout << equal;
    return 0;
}