#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Enter number of lines :";
    cin >> l;

    for(int i = 1; i<=l ; i++)
    {
        int s=5;
        for(int j = 1; j<= s ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
            }
    return 0;
}