#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    if (number % 2 == 0)
        goto printeven;
    else
        goto printodd;

printeven:
    cout << "Even number";
    return 0;

printodd:
    cout << "Odd number";
    return 0;
}