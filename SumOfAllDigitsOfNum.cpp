#include <iostream>
using namespace std;

int main(){

    int n , sum = 0   ,rem; 
    cin >> n ;

    if (n == 0)
    {
        return 0 ;
    }
    else if ((n%10)==n)
    {
        sum = n ;
        cout << sum;
    }
    else {

        while (n != 0)
        {
            /* code */
            rem  = n %10;
            sum = sum + rem;
            n = n/10;

        }
        

        cout << "The Sum is : " << sum ;

    }

    
    

}
