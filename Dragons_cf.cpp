#include <bits/stdc++.h>
#define for(i, n) for (int i = 0; i <n; i++)
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    int d = 0;
    vector<pair<int, int>> my_vector;
    int x, y;
    for (i, n)
    {
        cin >> x >> y;
        my_vector.push_back(make_pair(x, y));
    }
    sort(my_vector.begin(), my_vector.end());
    // for(i,n)
    // cout<<my_vector[i].first<<" "<<my_vector[i].second<<"\n";
    for (i, n)
    {
        if (s > my_vector[i].first)
        {
            s += my_vector[i].second;
            d++;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    if (d == n)
        cout << "YES";
    return 0;
}