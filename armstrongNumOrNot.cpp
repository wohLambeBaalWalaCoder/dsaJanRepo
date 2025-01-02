#include <bits/stdc++.h>

using namespace std ;


int powerOf(int r , int m ){
        int baseR = r;
        int a = r ;

        for(int i = 2 ; i <= m ;i++){
            a = a * baseR ; 
        }

        return a ;


}

int main(){
    int num = 500  , temp = num , rem , ans =0 ;
    string count  = to_string(num);
    int mul = count.size();


    while (temp!=0)
    {
        rem = temp%10;
        ans = ans + powerOf(rem,mul);
        temp = temp/10 ;
    }

    if(ans == num){
        cout  << " Its a armstrong Number";
    }else{
        cout << " Its not a armstrong Number ";
    }

}