// print number 1 to n

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter a number : ";
    cin >> n;
    int count = 0;

    while(count <= n)
    {
        cout << count << " ";
        count++;
    }
    cout<<endl;
}
