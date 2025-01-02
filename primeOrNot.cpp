#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n = 4 ;
    int count = 1 ;
    
    for (int i = 2; i <= n; i++)
    {
        /* code */
        if((n % i) == 0){
            count++;
        }
    }

    if(count  == 2){
        cout << "Its a Prime Number " ;
    }else{
        cout << "Its Not a Prime Number ";
    }

    
    
}