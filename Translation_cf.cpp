#include <bits/stdc++.h>
using namespace std;
string a;
string b;
int check = 0;
int main()
{

    cin >> a >> b;
    string c = "";
    for (int i = a.length() - 1; i >= 0; i--)
        c = c + a[i];
    for (int i = 0; i < a.length(); i++)
        if (c[i] != b[i])
            check = 1;
    if (check == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}