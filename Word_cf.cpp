#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int equal = 0;
    for (char &c : n)
    {
        if ((c >= 65) && (c <= 90))
            equal++;
    }
    if (equal <= n.size() - equal)
    {

        for (char &c : n)
            c = tolower(c);
        cout<<n;
    }
    else
    {
        for (char &c : n)
            c = toupper(c);
        cout<<n;
    }
    return 0;
}