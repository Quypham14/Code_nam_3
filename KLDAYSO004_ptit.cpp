#include <bits/stdc++.h>
using namespace std;
int t;
int binary_search(vector<int> &a, int key)
{
    int left = 0;
    int right = a.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] < key)
        {
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return left;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> check;
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        for (int i = 0; i < n; ++i)
        {
            if (check.empty() || arr[i] > check.back())
                check.push_back(arr[i]);
            else
            {
                int pos = binary_search(check, arr[i]);

                check[pos] = arr[i];
            }
        }
        cout << check.size() << "\n";
    }
    return 0;
}