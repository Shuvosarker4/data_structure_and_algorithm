#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q; // n = size and q = queries
    cin >> n >> q;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // array input
    }
    // store prefix sum in different array
    long long pre[n];
    pre[0] = a[0]; // put first value in prefix sum manually

    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1]; // store prefix sum
    }
    // queries
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum = 0;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}