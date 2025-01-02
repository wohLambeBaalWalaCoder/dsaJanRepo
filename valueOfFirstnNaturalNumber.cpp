#include <iostream>
using namespace std;


int main (){

    int n  , value =0 ;
    
    cin >> n ;

    while (n > 0)
    {
        value = n + value ;
        n--;
    }

    cout << "The Value of first N natural numbers is :  " << value ;
    

}