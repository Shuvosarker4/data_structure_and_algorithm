#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s); // store string
    }

    // vector string input with space
    int s;
    cin >> s;
    cin.ignore();
    vector<string> VV(s);

    for (int i = 0; i < s; i++)
    {
        getline(cin, VV[i]); // with space/full line
    }
    for (int i = 0; i < s; i++)
    {
        cout << VV[i] << endl;
    }
    return 0;
}