#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number:";
    cin >> n;
    int num = 0;
    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<n; j++)
        {
           num = num + 1;
           cout<<num;
        }
          cout<<endl;
    }
    return 0;
}