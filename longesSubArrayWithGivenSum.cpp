#include <bits/stdc++.h>
using namespace std;

// O(N^2)


// int main()
// {
//     vector<int> v = {2, 3, 5, 1, 9};
//     int k = 10;
//     int sum = k;

//     int maxi = 1;
//     int result = 1;
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         sum = sum - v[i];
//         for (int j = i + 1; j < v.size(); j++)
//         {
//             sum = sum - v[j];
//             result++;
//             if (sum == 0)
//             {
//                 maxi = max(maxi, result);
//             }
//         }
//     }

//     cout << "Longest Subarray length is : " << maxi;
// }


