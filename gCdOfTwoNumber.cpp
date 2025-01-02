#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 20, b = 28;

    int result = min(a, b);

    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }

        result--;
    }

    cout << "The Greatest Common Divisor is : " << result;
}