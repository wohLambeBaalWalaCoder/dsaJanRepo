#include <iostream>
using namespace std;

int main(){
        int a = 10 ;
        int b = 5 ;

        cout << "Before Swappping a: " << a << ", b : " << b << endl ;

        int temp ;

        temp = b ;
        b = a ;
        a = temp;
        
        cout << "After Swappping a: " << a << ", b : " << b << endl ;

}