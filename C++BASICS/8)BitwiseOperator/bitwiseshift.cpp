#include <iostream>
using namespace std;
int main()
{
    cout<<(4 << 1)<<endl; // left shift operator (shifts the value to the left and add zero at the end)
    cout<<(4 << 2)<<endl; // this is equivalent to ans = 4 * 2^2 = 16 means a * 2^b "In left shift"
    cout<<(10>> 1)<<endl; // right shift operator (shifts the value to the right elimination the righmost element and adding zero to the front)
    cout<<(10>> 2)<<endl; // this is equivalent to ans = 10 / 2^2 = 10/4 = 2 means a/2^b
    return 0;
}