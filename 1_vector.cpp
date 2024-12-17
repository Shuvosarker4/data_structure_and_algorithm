#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<type> name;

    vector<int> v11;        // vector initialization O(1)
    vector<int> v12(5);     // vector initialization(garbage) with size O(N)
    vector<int> v13(5, 10); // vector initialization with size(5) and value(10) O(N)

    vector<int> v9(5, 100);
    vector<int> v10(v9); // copy vector v9 to v10 O(N)

    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v1(a, a + 5); // copy array to vector O(N)

    vector<int> v = {1, 2, 3, 4, 5, 6}; // vector initialize one more way O(N)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // print a vector O(N)
    }

    // Capacity

    v.size();          // return the size of vector O(1)
    v.max_size();      // max size of the vector
    v.capacity();      // capacity of the vector
    v11.clear();       // clear the vector(Not from Memory)
    v.empty();         // return true,false
    v12.resize(7);     // change the size of vector O(K)
    v12.resize(7, 10); // resize(7) and fill with value(10)

    // Modifiers

    v12.assign(5, 10); // assign vector if size are different
    v.push_back(10);   // add element to the end
    v.pop_back();      // remove last element

    // insert element on specific position

    vector<int> v22 = {10, 20, 30, 40, 50};
    vector<int> v23 = {100, 200, 300};
    //       where to insert   what to insert
    v.insert(v23.begin() + 2, v22.begin(), v22.end());

    // delete element from a specific position
    v22.erase(v.begin() + 1, v.end() - 1);

    // replace element(not under vector)
    vector<int> v33 = {1, 2, 3, 4, 2, 6};
    replace(v.begin(), v.end(), 2, 10); // replace 2 by 10

    // find element (not under vector)
    auto it = find(v33.begin(), v33.end(), 3);
    // if not found iterator will be indicate in the end (it == v.end())

    // access element

    v[0];      // access the iTH index
    v.at(0);   // access the ith index
    v.front(); // access the first element
    v.back();  // access the last element

    // Iterators
    v.begin(); // pointer to the first element
    v.end();   // pointer to the last element

    for (auto it = v33.begin(); it < v33.end(); it++)
    {
        cout << *it << " ";
    }

    // vector input 1st way
    vector<int> v5;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    // vector input 2nd way
    int n;
    cin >> n;
    vector<int> v6(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v6[i];
    }

    return 0;
}