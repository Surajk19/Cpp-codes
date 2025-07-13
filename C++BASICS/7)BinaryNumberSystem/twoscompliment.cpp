#include <iostream>
using namespace std;
int twocompliment(int num)
{
    int ans = 0;
    int pow = 1; // 10^0 -> 10^1 -> 10^2

    while(num >0)
    {
        int rem = num % 2;
        ans = ans + rem * pow;

        num = num/2;
        pow = pow * 10;
    }
    return ans;
}







int main()
{
    cout<<twocompliment(16)<<endl;
    return 0;
}