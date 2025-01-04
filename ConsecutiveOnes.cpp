#include <bits/stdc++.h>

using namespace std;


int main(){


    vector<int> v = {1, 0, 1, 1, 0, 1};

     int ans = 0 , count = 0 ;   


     for(int i = 0 ; i < v.size() ;i++){
        if(v[i]==1){
            count++;
            if(count> ans){
                ans = count;
            }
        }else{
            count = 0 ; 
        }
     }

    cout << "Most consecutive times one occured is : " << ans ;


}