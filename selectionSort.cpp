#include <bits/stdc++.h>

using namespace std;


void selectionSort(vector<int> &arr){
    //  cout << " In the function " ;
    //  vector<int> res ;
    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if(arr[j] < arr[i]){
                swap(arr[i],arr[j]);
            }

        }
        // res.push_back(arr[i]);
    }

    // return res;
}

int main()
{
    vector<int> v = {7, 5, 9, 2, 8};


    cout << "Before swapping : " ;

    for(auto it: v){
        cout << it << " " ;
    }


     selectionSort(v); 
    cout << endl ;
    cout << "After swapping : " ;


      for(auto it: v){
        cout << it << " " ;
    }

}