#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    char ch = 'A'; // by putting outside the outer loop it will not change again 
    for(int i = 0; i < n; i++)
    {
        
        for(int j = 0; j <i+1; j++)
        {
            cout<< ch;
        }
        ch = ch + 1 ; // By putting the equation here it will update after both loops run once
        cout<<endl;
    }
}