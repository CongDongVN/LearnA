#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long a[1000000000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long bigSum = 0;
    for (int i = 0; i < n; i++)
    {
        bigSum += a[i];
    }

    cout << bigSum;
    return 0;
}