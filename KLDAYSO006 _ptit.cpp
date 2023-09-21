// Tim so lon nhat tao boi 1 mang cho truoc
#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b)
{
    return (a + b) > (b + a);
}
void find_max_number(vector<int> &nums)
{
    vector<string> nums_string;
    for (const int &num : nums)
    {
        nums_string.push_back(to_string(num));
    }
    sort(nums_string.begin(), nums_string.end(), compare);
    for (int i = 0; i < nums_string.size(); ++i)
        cout << nums_string[i];
    cout << "\n";
    nums_string.clear();
}
int t;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
            cin >> nums[i];
        find_max_number(nums);
        nums.clear();
    }
    return 0;
}