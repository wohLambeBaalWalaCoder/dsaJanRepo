#include <bits/stdc++.h>

using namespace std;

// using Factorial
// int factorial(int n)
// {
//     int ans = 0;

//     while (n != 0)
//     {
//         /* code */
//         ans = ans + n;
//         n--;
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> v = {1, 3};
//     int n = 3;

//     int ans = factorial(n);

//     for (auto it : v)
//     {
//         ans = ans - it;
//     }

//     cout << " The Missing number is : " << ans;
// }






// using flag

int answer(int arr[] , int n )
{   

    for(int i = 1 ; i <= n ; i++){
        int flag = 0 ;
        for (int j = 0; i < n; i++)
        {
            /* code */
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }

        if(flag==0) return i ; 
         
    }
    // return -1;
}

int main()
{

    int a[] = {1, 3};
    int s  = sizeof(a)/sizeof(a[0]);

    int ans = answer(a , s);

    cout << " The Answer is : "<< ans ; 
}