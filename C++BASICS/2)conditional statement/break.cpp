#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 0, -3, 3, -2, 1};
    int size = 7; // No of elements in array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0) // this is true as -3 and -2 are there
        {
            // Array contains a negative value, so break the loop
            cout << "Array contains negative value."; 
            break; // breaks the loop here
        }
    }
}
