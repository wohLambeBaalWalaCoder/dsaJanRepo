#include <iostream>

using namespace std ;


int reverseAns(int num)
{

    if (num % 10 == num)
    {
        return num;
    }
    int n = num, ans, remainder;
    remainder = n % 10;
    ans = remainder;
    n = n / 10;

    while (n > 0)
    {
        /* code */
        remainder = n % 10;
        ans = (ans * 10) + remainder;
        n = n / 10;

        // cout << "Insise loop : " << remainder << endl;
    }

    return ans;
}


bool palindromeOrNot(int num ){

    int revAns = reverseAns(num);
    

    if(revAns == num){
        return true;
    }

    return false;



}


int main(){
    int n = 121 ;
    bool ans = palindromeOrNot(n);
    if (ans)
    {
        cout << "The Number is Palindrome " ;
    }else{
        cout << "The Number is Not a Palindrome " ;
    }
    


}