#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a<b)
    {
       if(b<c)
       {
        cout<< "C" <<endl;
       }
       else
       {
        cout<< "B" <<endl;
       }
    }
    else
    {
        if(a<c)
        {
            cout<<"C"<<endl;
        }
        else
        {
            cout<<"A"<<endl;
        }
    }

}
