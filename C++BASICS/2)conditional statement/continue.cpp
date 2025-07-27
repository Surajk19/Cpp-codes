#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 0, -3, 3, -2, 1};
    int size = 7; // no of elements in array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            // If arr[i] < 0, then skip the current iteration i.e no statements following
            // continue will be executed.
            continue;
        }
        cout<<arr[i]<<" ";
    }
}
