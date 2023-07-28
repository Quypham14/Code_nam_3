#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int number_1 = 0;
    int number_2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            number_1++;
        else
            number_2++;
    }
    if (number_1 > number_2)
        cout << "Anton";
    else if (number_1 == number_2)
        cout << "Friendship";
    else
        cout << "Danik";
    return 0;
}