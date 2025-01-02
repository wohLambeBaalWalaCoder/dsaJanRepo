#include <iostream>
using namespace std;


int main (){
    int n ;

    cin >> n ;

    int fNum=1 ,sNum=1 ,next ;

    if(n == 1 ){
        cout << fNum ;
    }
    else if(n==2){
        cout << fNum << " " << sNum << endl ;
    }
    else{
        cout << fNum << " " << sNum << " " ;
        for (int  i = 3; i <= n; i++)
        {
            next = sNum+fNum ;
            fNum =sNum;
            sNum = next; 

            cout << next << " " ;
        }
        



    }
}