#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1;

    for(int i = 0; i < n ; i++) //it will run the loop till the input number and give series of the number entered
    {
        cout<<a<<" "; // start with a 
        int next = a + b; // sum of two numbers for the next number in series
        a = b; // updated value of a
        b = next; // updated value of b

        // Iteration 1: a = 0, b = 1
        // Iteration 2: a = 1, b = 1
        // Iteration 3: a = 1, b = 2
        // Iteration 4: a = 2, b = 3
        // Iteration 5: a = 3, b = 5
        // Iteration 6: a = 5, b = 8
        // Iteration 7: a = 8, b = 12
    }
}

int main()
{
    fibonacci(7);
    return 0;
}