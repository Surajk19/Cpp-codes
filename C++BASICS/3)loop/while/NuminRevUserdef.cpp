#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter a number: ";
     cin >> n;
     int count;
     cout<<"Enter a count:";
     cin >> count;
     
     while (count >= n)
     {
      cout << count << " ";
      count--;
     }
     cout<<endl;
     return 0;
}