#include <bits/stdc++.h>

using namespace std;


int main(){

    vector<int> v = {1,1,1,2,2,2,3,3,3};

    cout << "Before Removing Duplicate : " ;
    
    for(auto it : v){
        cout << it << " " ;
    }

    set<int> s ;

    for(int i = 0 ; i < v.size() ; i++){
        s.insert(v[i]);
    }

    int k  = s.size();
    int j = 0 ;

    for(int x : s){
        v[j] = x ;
        j++;
    } 


    cout<< endl;
    cout << "After Removing Duplicate : " ;

    for (int i = 0; i < k; i++)
    {
        /* code */
        cout << v[i]  << " " ;
    }
    


}