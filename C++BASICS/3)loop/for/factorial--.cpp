#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter a Number: ";
   cin>>n;
   int fact = 1;

   for(int i = n; i > 0; i--)
   {
       fact = fact * i;
   }
   cout<<"The factorial is : "<< fact <<endl;
   return 0;
}