#include <iostream>
using namespace std;

int main() {
    int i;
    for (i = 0; i < 10; i++); // body less loop
    {
        cout << i;
    }
    return 0;
}

// for loop with a semicolon is called as body-less for loop. 
// It is used only for incrementing the variable values.
// So in this program, the value is incremented and printed as 10.