#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<=1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0||n%(i+2)==0) return false;
    return true;

}
int sumPrime(int left, int right)
{
    if(left>right) return 0;
    if(isPrime(left))
    {
        return left+sumPrime(left+1,right);
    }
    else
    {
        return sumPrime(left+1,right);
    }
}
int t;
int a,b;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<sumPrime(a,b);
        cout<<"\n";
    }
    return 0;

}
