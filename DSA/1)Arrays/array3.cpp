#include <iostream>
using namespace std;
int main() {
    int arr[] {40, 50, 60, 70, 80, 90, 100}; // didn't need an assignment operator here
    for (auto element: arr)
        cout << element << " ";
    return 0;
}