#include <bits/stdc++.h>
using namespace std;
int main()
{
    // binary search
    // --> sorted the array
    // --> find mid
    // --> move left or right
    // --> always check mid

    int n, q;
    cin >> n >> q;
    int a[n]; // array of n size
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // take input
    }
    // sort the array
    sort(a, a + n);

    while (q--)
    {
        int val;
        cin >> val;
        bool flag = false;

        // initialize left and right boundary
        int l = 0, r = n - 1;

        // binary search
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == val)
            {
                flag = true;
                break;
            }
            if (val > a[mid])
            {
                // move right
                l = mid + 1;
            }
            else
            {
                // move left
                r = mid - 1;
            }
        }
        if (flag)
        {
            cout << "Found" << endl;
        }
        else
        {
            cout << "Not Found" << endl;
        }
    }

    return 0;
}