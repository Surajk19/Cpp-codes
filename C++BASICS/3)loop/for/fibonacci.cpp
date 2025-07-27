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
        b = result % 1000000007;  // multiplying it 10^9+7 	to Keep the answer in a safe range
    }                             // 	Prevent integer overflow and get consistent results
    cout<<b<<endl;
}

int main()
{
    int T;
    cout<<"Enter the number of test case :";
    cin>>T;

    for(int i =1; i<=T; i++)
    {
        int n;
        cout<<"Enter the nth number till you want sum of fibonacci :";
        cin>>n;
        cout<<"Sum of the fibonacci series till the input number :";
        fibonacciNumber(n);
    }
    return 0;
}