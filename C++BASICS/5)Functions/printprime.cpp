#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) 
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to print all prime numbers up to n
void printPrimesUpTo(int n) 
{
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++) 
    {
        if (isPrime(i)) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}


// Main function
int main() {
    int limit;
    cout << "Enter a number: ";
    cin >> limit;

    printPrimesUpTo(limit);

    return 0;
}
