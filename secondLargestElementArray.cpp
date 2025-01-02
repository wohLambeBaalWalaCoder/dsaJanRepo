#include <bits/stdc++.h>

using namespace std; 

int main (){

    vector<int> v = {10,30,40,60, 80} ;

    int lar = 0  , secLar = 0  ;

    for(auto it : v ){
        if(it > lar){
            secLar = lar;
            lar = it;
        }
    }

    cout << "Largest Element is : " << lar << endl;
    cout << "Second Largest Element is : " << secLar;




}