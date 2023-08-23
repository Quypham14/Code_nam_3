#include <bits/stdc++.h>
// tư tưởng là kiểm tra xem căn của số đã cho có là số nguyên tố hay không, 
//và số đã cho có phải là số chính phương hay không
using namespace std;
bool isPrime(long long num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (long long i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}
bool isTPrime(long long num)
{
    long long sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num && isPrime(sqrtNum);
}

int main()
{
    int n;
    long long arr[100001];
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        if (isTPrime(arr[i]))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}