#include <bits/stdc++.h>

using namespace std;



void printArray(int a[], int s)
{

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
}

int findLargestElement(int a[], int n){
    int largest = a[0];

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i]> largest){
            largest =a[i];
        }
    }
    
    return largest;

}

int main()
{

    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << " Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    
    cout << "Your Elements in an array : " ;
    printArray(arr,n);

    int largest = findLargestElement(arr,n) ;
    cout << "The Largest Element is : " << largest ;

}