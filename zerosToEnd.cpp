#include <bits/stdc++.h>

using namespace std;

// void moveZerosToEnd(vector<int> &v)
// {
//     vector<int> ans;

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] != 0)
//         {
//             ans.push_back(v[i]);
//         }
//     }

//     int n = ans.size();

//     for (int i = 0; i < n; i++)
//     {
//         v[i] = ans[i];
//     }

//     int no = v.size();

//     for (int i = n; i < no; i++)
//     {
//         v[i] = 0;
//     }
// }

// uusing twoPointer approach
void moveZerosToEnd(vector<int> &v)
{
    int j, k;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            j = i;
            break;
        }
    }

    k = j + 1;

    while (k < v.size())
    {
        /* code */
        if (v[k] != 0)
        {
            swap(v[j], v[k]);
            k++;
            j++;
        }
        else{
            k++;
            // j++;
        }
    }
}

int main()
{

    vector<int> ve = { 1,2,0,1,0,4,0,0,0,0,3,3,5,0};

    cout << "Before Printing: ";

    for (auto it : ve)
    {
        cout << it << " ";
    }

    moveZerosToEnd(ve);

    cout << endl;

    cout << "Afer Printing: ";
    for (auto it : ve)
    {
        cout << it << " ";
    }
}