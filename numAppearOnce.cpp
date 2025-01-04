#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     vector<int> v = {2, 2, 1};

//     int ans;

//     for (int i = 0; i < v.size(); i++)
//     {
//         int num = v[i]; // selected element
//         int count = 0;
//         for (int j = 0; j < v.size(); j++)
//         {
//             if (v[j] == num)
//             {
//                 count++;
//             }
//         }

//         if (count == 1)
//         {
//             ans = num;
//         }
//     }

//     cout << " The Non repeating Element is : " << ans;
// }

// Using HashMap

// int getSingleElement(vector<int> &arr) {

//     //size of the array:
//     int n = arr.size();

//     // Find the maximum element:
//     int maxi = arr[0];
//     for (int i = 0; i < n; i++) {
//         maxi = max(maxi, arr[i]);
//     }

//     // Declare hash array of size maxi+1
//     // And hash the given array:
//     vector<int> hash(maxi + 1, 0);

//     for(auto it : hash){
//         cout << "Value : " << it  << endl;
//     }

//     for (int i = 0; i < n; i++) {
//         hash[arr[i]]++;
//     }

//     cout << endl ;
//     cout << "After Filling the hash vector" ;

//     for(auto it : hash){
//         cout << "Value : " << it  << endl;
//     }

//     //Find the single element and return the answer:
//     for (int i = 0; i < n; i++) {
//         if (hash[arr[i]] == 1)
//             return arr[i];
//     }

//     //This line will never execute
//     //if the array contains a single element.
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {4, 1, 2, 1, 2};
//     int ans = getSingleElement(arr);
//     cout << "The single element is: " << ans << endl;
//     return 0;
// }

// USING UNORDERED MAP

// int main()
// {
//     vector<int> v = {4, 1, 2, 1, 2};

//     unordered_map<int, int> m;

//     for (int i = 0; i < v.size(); i++)
//     {
//         m[v[i]]++;
//     }

//     // cout << "Printing Map : " << endl ;

//     // for(auto it : m){
//     //     cout << " Key : " << it.first << " , " << " Value : " << it.second << endl;
//     // }

//     for (auto it : m)
//     {
//         if (it.second == 1)
//         {
//             cout << "The Single Element is : " << it.first;
//             break;
//         }
//     }
// }

// Using XOR

int getSingleElement(vector<int> &arr)
{
    // size of the array:
    int n = arr.size();

    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {   
        // cout << "Before XOR : "  << xorr << endl ;
        // cout << "Before Performing operation " << xorr <<  " = " << xorr << " ^ " << arr[i] << endl ;
        xorr = xorr ^ arr[i];
        // cout << xorr <<  " = " << xorr << " ^ " << arr[i] << endl ;
    }
    return xorr;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
