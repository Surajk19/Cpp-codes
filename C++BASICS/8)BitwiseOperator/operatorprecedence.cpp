#include <iostream>
using namespace std;
int main()
{
    cout<< 5 * 2 + 4 <<endl;
    cout<< 5 * (2+4) <<endl; // use paranthesis to overide the precendency rule
    cout<< 5 * 2 / 4 <<endl; // Associativity same rank L to R
    cout<< 5 * (2 / 4) <<endl; // precendency overridden    
}