#include <bits/stdc++.h>
using namespace std;
int main()
{
    // it will give us TLE but this is one of way to solve the problem

    int n, q; // n = size and q = number of queries
    cin >> n >> q;

    int a[n]; // array of n size
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // take input the array
    }

    while (q--)
    {
        int l, r; // l and r index number
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += a[i]; // store total sum from l to r index
        }
        cout << sum << endl;
    }

    return 0;
}