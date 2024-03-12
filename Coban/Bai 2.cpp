#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[100];
    int b[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int alice = 0;
    int bob = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            alice++;
        }
        else if (a[i] < b[i])
        {
            bob++;
        }
    }
    cout << "[" << alice << ", " << bob << "]";
    return 0;
}