#include <iostream>

using namespace std;

int main()
{
    int realBase = 5, pow = 2, base = realBase;

    for (int i = 1; i < pow; i++)
    {

        base = base * realBase;
    }

    cout << "Final Answer : " << base;
}