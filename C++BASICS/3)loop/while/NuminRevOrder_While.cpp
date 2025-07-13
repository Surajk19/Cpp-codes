#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number";
    cin>>n;
    int count = 50;

    while(n<=count)
    {
        cout << count <<" ";
        count--; 
    }
    cout<<endl;
    return 0;
}