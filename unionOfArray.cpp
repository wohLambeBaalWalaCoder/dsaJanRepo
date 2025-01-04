#include <bits/stdc++.h>
using namespace std;


//By using set 
set<int> unionArray(int a1[] ,int a2[] , int a1s, int a2s ){
        set<int > s ;


        for (int i = 0; i < a1s; i++)
        {
            /* code */
            s.insert(a1[i]);

        }

         for (int i = 0; i < a2s; i++)
        {
            /* code */
            s.insert(a2[i]);

        }

        return s;
        
}


int main()
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10} ;
    int arr2[] = {2,3,4,4,5,11,12} ;


    int arr1size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2size = sizeof(arr2)/sizeof(arr2[0]);

    set<int> ans  = unionArray(arr1,arr2,arr1size,arr2size);

    for(auto it :ans){
        cout << it << " " ;
    }





}