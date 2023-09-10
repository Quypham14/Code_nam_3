#include <iostream>
#include <vector>
#include <string>

using namespace std;
int t, n;
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    vector<int> result(len1 + len2, 0);

    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    string resultStr;
    for (int digit : result)
    {
        if (!(resultStr.empty() && digit == 0))
        {
            resultStr += to_string(digit);
        }
    }

    return resultStr.empty() ? "0" : resultStr;
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        string num1, num2;
        for (int i = 0; i < n; ++i)
        {
            num1 += '1';
            num2 += '1';
        }
        string result = multiply(num1, num2);
        cout << result << endl;
    }
    return 0;
}
