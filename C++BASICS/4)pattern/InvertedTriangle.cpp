#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int i = 0; i < n;  i++) // outer loops for line
    {
        for(int j = 0; j <i; j++) // 1st inner loops for spaces by considering i value (Run i times)
        {
            cout<<" ";
        }
        for(int j = 0; j< n-i; j++) // 2nd inner loops for number logic is each number is n-i ex) 1111 = n - i = 4 - 0 = 4 numbers
        {
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}