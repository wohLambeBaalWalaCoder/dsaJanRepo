#include <bits/stdc++.h>

using namespace std;

vector<int> findDuplicate(vector<int> &arr)
{
    vector<int> res;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                auto it = find(res.begin(), res.end(), arr[i]);

                if (it == res.end())
                {
                    res.push_back(arr[i]);
                }
                break;
            }

        }
    }

    return res;
}

int main()
{

    vector<int> v = {10, 10, 20, 20, 30, 40};

    vector<int> result = findDuplicate(v);

    //pRiting vector elements

    for(auto it : result){
        cout << it << " " ;
    }


    return 0 ;
}