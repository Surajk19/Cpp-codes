#include <iostream> 
using namespace std;
int fibonacciNumber(int n){
    // Write your code here.
    int a = 0;
    int b = 1;
    
    for(int i = 1; i<n; i++)
    {
        int result = a + b;
        a = b;
        b = result; 
    }
    cout<<b<<endl;
}

int main()
{
    int T;
    cin>>T;

    for(int i =1; i<=T; i++)
    {
        int n;
        cin>>n;
        fibonacciNumber(n);
    }
    return 0;
}