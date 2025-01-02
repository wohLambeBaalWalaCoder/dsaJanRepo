#include <bits/stdc++.h>

using namespace std;


bool isSortedArray(int arr[] , int n){
    for(int i = 0 ; i < n-2 ; i++){
        cout << "arr[i+1] " << arr[i+1] << endl ;

        if(arr[i+1] > arr[i] ){
            continue;
        }else{
            return false;
        }
    }

    return true;
}

int main (){

    int arr[5] = {70 , 20 , 40 , 60};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool ans = isSortedArray(arr, n);

    if(ans){
        cout << " The Array is Sorted" ;
    }else{
        cout << " The Array is not sorted " ;
    }
    


}