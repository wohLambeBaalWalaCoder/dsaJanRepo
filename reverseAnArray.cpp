#include <bits/stdc++.h>

using namespace std;

void reverseArray(int a[], int n)
{
    int l = 0, r = n - 1;

    while (l < r)
    {
        /* code */
        swap(a[l], a[r]);
        l++;
        r--;
    }
}

void printArray(int a[], int s)
{

    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int arr[3] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    // printArray(arr, n);

    cout << " Before Reverse : ";
    printArray(arr, n);
    cout << endl;
    reverseArray(arr, n);

    cout << " After Reverse : ";
    printArray(arr, n);
}