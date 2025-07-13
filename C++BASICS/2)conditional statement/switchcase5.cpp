#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;
     
    switch(number % 2) // when you divide any number by 2 it gives either 0 or 1
    {
            case 0:
            {
                cout<<"Its even";
                break;
            }
            case 1:
            {
                cout<<"Its odd";
                break;
            }
            default:
            {
                cout<<"Bye!";
                break;
            }
        }
        return 0;
    }