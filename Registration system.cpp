#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> mymap;
    while (n--)
    {
        string str;
        cin >> str;
        if (mymap.find(str) == mymap.end())
        {
            mymap[str] = 0;
            cout << "OK"
                 << "\n";
        }
        else
        {
            if (mymap.find(str) != mymap.end())
            {
                mymap[str]++;
            }
            cout << str << mymap[str] << "\n";
        }
    }

    return 0;
}