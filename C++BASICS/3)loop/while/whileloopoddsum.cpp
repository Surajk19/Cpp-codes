// sum of odd number from 1 to n by while loop

#include <iostream> 
using namespace std;
int main()
{   
    int i = 1;
    int oddsum = 0;
    int n;
    cout<<"Enter number:";
    cin>>n;

    while(i<=n)
    {
        if(i%2 != 0)
        {
            oddsum = oddsum + i;
        }
        i++;
    }
    cout<<"Oddsum: "<<oddsum<<endl;
    return 0;
}