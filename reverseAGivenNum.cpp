#include <iostream>
using namespace std;

int reverseNum(int num)
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

int main()
{
    int num;

    cout << " Enter the Num you Want to Reverse: ";
    cin >> num;
    cout << "Before Reversing " << num << endl;

    int ans = reverseNum(num);

    // cout << "Before Reversing " << num << endl;
    cout << "After Reversing " << ans;
}