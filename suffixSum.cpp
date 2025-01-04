#include <bits/stdc++.h>
using namespace std ;


int main(){
    vector<int> v = {1,2,3,4,5};

    int n = v.size();
    //to calculate prefix 
     for(auto it : v ){
        cout << it  << " " ;
    }

    for(int i = n-2 ; i >=0  ; i--){
            v[i] = v[i+1]+v[i];
    }

    cout <<endl;
    for(auto it : v ){
        cout << it  << " " ;
    }
}
