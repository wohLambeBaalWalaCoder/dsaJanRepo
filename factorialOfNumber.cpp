#include <iostream>
using namespace std;


int main (){
    int n ,fact = 1;
        cin >> n ;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        fact = fact * i;
    }

    cout  <<  "fact of given num is : " << fact  ;
    

}