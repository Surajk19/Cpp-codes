#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"ENter Char : ";
    cin>>ch;
    cout << (ch>='a' && ch<='z' ? "Lowercase letter" : "Uppercase Letter");
    return 0;
}