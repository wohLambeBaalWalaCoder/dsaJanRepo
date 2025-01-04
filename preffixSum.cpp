#include <bits/stdc++.h>
using namespace std ;


int main(){
    vector<int> v = {1,2,3,4,5};

    //to calculate prefix 
     for(auto it : v ){
        cout << it  << " " ;
    }

    for(int i = 1 ; i < v.size() ; i++){
            v[i] = v[i-1]+v[i];
    }

    cout <<endl;
    for(auto it : v ){
        cout << it  << " " ;
    }
}
