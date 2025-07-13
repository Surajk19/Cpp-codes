#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<< "Enter your character: ";
    cin>>ch;

    if('a'<= ch && ch<='z')
    {
        cout<<"Lowercase character" <<endl;
    }
    else if('A'<= ch && ch<='Z')
    {
        cout<<"Uppercase character" <<endl;
    }
    else
    {
        cout<<"Not a character"<<endl;
    }
    return 0;
 }
     