#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int x;
    int n;
    int result = 1;

    cin>>x;
    cin>>n;

    if(n == 0)
    {
        x = 1;
       cout<<x;
    }
    else
    {
        for(int i =0; i<n; i++)
        {
            result *= x;
        }
        cout<<result;
    }
    return 0;
}