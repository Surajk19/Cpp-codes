#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter the grade you received : ";
    cin>>grade;

    char A,B,C,D;

    switch(grade)
    {
        case 'A': // always remeber a character is written in ' ' (single inverted comma)
        { 
            cout<<"You are excellent";
            break;
        }
        case 'B':
        {
            cout<<"You are good";
            break;
        }
        case 'C':
        {
            cout<<"I Expect more from you";
            break;
        }
        default:
        {
            cout<<"Bettre luck next time!!!";
            break;
        }
    }
    return 0;
}