//Q)Find the numbers totally divisible by 6 and partially

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;

    switch(number % 6)
    {
        case 0:
        cout<<"It is completely divisible by 6";
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        cout<<"It is partially divisible by 6";
        break;
    }
    return 0;
}