#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i = 1;
    int evensum = 0;

    do{
        if(i%2 == 0)
        {
            evensum = evensum + i;
        }
        i++;
    }
    while(i<=n);
    
    cout<<evensum;
    return 0;
}