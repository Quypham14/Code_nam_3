#include<bits/stdc++.h>
using namespace std;
void treatment(string s)
{
    queue<char>myQueue;
    for(int i=s.size()-1;i>=0;i--)
        myQueue.push(s[i]);
    while(!myQueue.empty())
    {
        cout<<myQueue.front();
        myQueue.pop();
    }
    cout<<"\n";
}
int t;
string a;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,a);
        treatment(a);
    }
    return 0;
}
