#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter number of lines :";
    cin>>n;

    for(int i=1;i<=n;i++){
        int m = 5;
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}