#include <iostream>

using namespace std;

    //Write your countBits function here
    int binary(int n)
    {
        int a = 0;
        int pow = 1;

        int rem = n%2;
        int n = n/2;

        int number = a + rem*p;
        int pow = 10*pow;

        return number;
    }

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}