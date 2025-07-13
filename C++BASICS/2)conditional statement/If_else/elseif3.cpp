#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout<< "Enter your character: ";
    cin>>ch;

    if( 65>= ch && ch<=90)
    {
        cout<<"Uppercase character" <<endl;// ASCII value 65 to 90 belongs to A-Z
    }
    else if( 97>= ch && ch<= 122)
    {
        cout<<"Lowercase character" <<endl;// ASCII value 97 to 122 belongs to a-z
    }
    else
    {
        cout<<"Not a character"<<endl;
    }
    return 0;
 }
     

