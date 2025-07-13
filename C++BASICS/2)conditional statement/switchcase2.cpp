#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 23;
    int operation;
    cout<<"Enter the operation you like to perform : ";
    cin>>operation;

    switch (operation)
    {
        case 1:
        {
            cout<<"Addition would be : "<<a+b;
            break; // if we don't put the break statment then it will execute each thing after the operation we have entered including it
        }
        case 2:
        {
            cout<<"Substraction would be :"<<a-b;
            break;
        }
        case 3:
        {
            cout<<"multiplication would be :"<<a*b;
            break;
        }
        case 4:
        {
            cout<<"division would be :"<<a/b;
            break;
        }
        default:
        {
            cout<<"Enter the values between 1-4 ";
            break;
        }
    }
    return 0;
}