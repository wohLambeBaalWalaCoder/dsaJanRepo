#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int temp = v[0];

    cout << "Before : ";
    for (auto it : v)
    {
        cout << it << " ";
    }

    for (int i = 0; i < v.size(); i++)
    {
        v[i] = v[i + 1];
    }

    v[v.size() - 1] = temp;

    cout << endl;
    cout << "After : ";

    for (auto it : v)
    {
        cout << it << " ";
    }
}
