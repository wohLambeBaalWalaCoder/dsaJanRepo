#include <iostream>
using namespace std ;


int main (){

    int divisor , dividend , quotient , remainder ;

    cout << " Enter the divisor and dividend : " ;
    cin >> divisor >> dividend ;

    remainder = dividend%divisor;
    quotient = dividend/divisor;


    cout << "The Remainder is : " << remainder << " and the quotient is : " << quotient ;



}