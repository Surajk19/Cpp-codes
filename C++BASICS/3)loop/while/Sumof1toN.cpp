#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int count = 0;
    int i = 0;
    
    while ( i <= n)
    {
        count = count + i;
        i++;
    }
    cout << "THE SUM IS : "<< count << endl;
    return 0;
}