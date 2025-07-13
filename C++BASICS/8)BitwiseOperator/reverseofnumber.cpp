//Q) WAF to reverse an Integer N


#include <iostream>
using namespace std;
int Number(int n) // 2364
{   
    int newnumber = 0; 
    while(n>0)
    { 
        int rem = n % 10; // 4 - > 6 -> 3 -> 2
        
        newnumber = newnumber * 10 + rem; //  4 -> 40+6 -> 460 + 3 -> 4630 + 2 == 4632
        n = n / 10; // 236 -> 23 -> 2
    }
    return newnumber;
}

int main()
{
    int num = 2364;
    cout<<Number(num)<<endl;
    return 0;
}

