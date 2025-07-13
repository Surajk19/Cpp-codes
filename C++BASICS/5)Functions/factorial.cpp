#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i<= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int BinomialCoefficient(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);

    return fact_n/ (fact_r*fact_n_r);
}

int main()
{
    int n =9;
    int r =5;
    cout<<BinomialCoefficient(n , r)<<endl;
    return 0;
}