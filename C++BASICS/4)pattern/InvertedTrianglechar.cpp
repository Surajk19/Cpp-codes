#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char ch = 'A'; // by putting here we can update and change if inner loop then it will reset every time
    for(int i = 0; i < n; i++) //no of lines
    {
        for(int j = 0; j <i ;j++) // for spaces
        {
            cout<<" ";
        }
        for(int j = 0; j <n-i; j++) // for character in each line
        {
            cout<<ch;
        }
        ch = ch+1;
        cout<<endl;
    }   
    return 0;
}