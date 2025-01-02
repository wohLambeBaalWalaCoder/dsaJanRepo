#include <iostream>
using namespace std;

int main (){
    
    char ch ;
     cin >> ch ;


    if(ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout << " The Entered Character is Vowel " ;
    }else{
        cout << " The Entered Character is Consonant " ;
    }

}