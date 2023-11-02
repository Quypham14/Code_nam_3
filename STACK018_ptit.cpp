#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> calculateFinalPrice(vector<int> &prices)
{
    int n = prices.size();
    vector<int> finalPrices(n, 0);

    for (int i = 0; i < n; i++)
    {
        finalPrices[i] = prices[i];
        for (int j = i + 1; j < n; j++)
        {
            if (prices[j] <= prices[i])
            {
                finalPrices[i] -= prices[j];
                break;
            }
        }
    }

    return finalPrices;
}

vector<int> strToVector(string input)
{
    vector<int> result;
    istringstream iss(input);
    string token;

    while (getline(iss, token, ','))
    {
        result.push_back(stoi(token));
    }

    return result;
}

string vectorToString(vector<int> input)
{
    string result;
    for (int i = 0; i < input.size(); i++)
    {
        result += to_string(input[i]);
        if (i < input.size() - 1)
        {
            result += ",";
        }
    }
    return result;
}

int main()
{
    int t; // Số lượng testcase
    cin >> t;
    cin.ignore(); // Đọc bỏ ký tự '\n' sau dòng số testcase

    while (t--)
    {
        string input;
        getline(cin, input);
        vector<int> prices = strToVector(input);
        vector<int> finalPrices = calculateFinalPrice(prices);
        string result = vectorToString(finalPrices);
        cout << result << endl;
    }

    return 0;
}
