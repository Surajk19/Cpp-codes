#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin >> marks;

    if(marks>=90)
    {
        cout<<"You received A Grade" <<endl;
    }
    else if (marks >= 80 && marks<90)
    {
        cout<<"You received B Grade" <<endl;
    }
    else 
    {
        cout<<"You received C Grade" <<endl;
    }
    return 0;
}