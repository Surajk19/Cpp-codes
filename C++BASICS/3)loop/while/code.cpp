//Write a program to input an integer N and print the sum of all its even digits and 
//all its odd digits separately.

//Digits mean numbers, not the places! If the given integer is "13245", the even digits 
//are 2 and 4, and the odd digits are 1, 3, and 5.

#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int N;
    int oddsum = 0;
    int evensum = 0;

    cin >> N;
    while(N>0)
    {
        int n = N % 10;
        N = N/10;
        
        if(n%2 == 0)
        {
           evensum = evensum + n;
        }
        else
        {
           oddsum = oddsum + n;
        }
    }
    cout<<evensum<<" "<<oddsum;
    return 0;
}