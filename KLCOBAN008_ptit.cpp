#include <bits/stdc++.h>
using namespace std;
string addLargeNumbers(string num1, string num2)
{
    string result = "";
    int carry = 0;

    // Đảm bảo num1 có độ dài lớn hơn hoặc bằng num2 
    if (num1.length() < num2.length())
    {
        swap(num1, num2);
    }

    int len1 = num1.length();
    int len2 = num2.length();

    for (int i = len1 - 1; i >= 0; i--)
    {
        int digit1 = num1[i] - '0';
        int digit2 = i >= len1 - len2 ? num2[i - (len1 - len2)] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result = char(sum % 10 + '0') + result;
    }

    if (carry > 0)
    {
        result = char(carry + '0') + result;
    }

    return result;
}
int t;
string num1, num2;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> num1;
        cin >> num2;
        cout << addLargeNumbers(num1, num2) << "\n";
    }
    return 0;
}