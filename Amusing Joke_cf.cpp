#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest;
    string residence;
    string pile;
    bool check = true;
    cin >> guest >> residence >> pile;
    map<char, int> mymap;
    map<char, int> my_pile;
    for (char &i : guest)
        mymap[i]++;
    for (char &i : residence)
        mymap[i]++;
    for (char &i : pile)
        my_pile[i]++;
    int m = guest.length() + residence.length();
    if (m != pile.length())
        cout << "NO";
    else
    {
        for (int i = 0; i < pile.length(); ++i)
            if (my_pile[pile[i]] != mymap[pile[i]])
                check = false;
        if (check)
            cout << "YES";
        else
            cout << "NO";
    }
}