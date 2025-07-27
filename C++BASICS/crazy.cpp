#include <iostream>
using namespace std;

int* printDivisors(int n, int &size) {
    // First count the number of divisors to determine the array size
    size = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            size++;
        }
    }

    // Create a dynamic array to store the divisors
    int* divisors = new int[size];
    int index = 0;

    // Store the divisors in the array
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors[index++] = i;
        }
    }

    return divisors;  // Return the pointer to the array
}
