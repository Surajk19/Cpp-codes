#include <iostream> 
using namespace std;

int main() {
    
    int basicsalary;
    int totalSalary;
    char ch;
    float hra = 0.2*basicsalary;
    float da = 0.5*basicsalary;
    float pf = 0.11*basicsalary;
    cin>>basicsalary;
    cin>>ch;

    if(ch == 'A')
    {
        int allow = 1700;
        totalSalary = (basicsalary + hra + da + allow) - pf;
        cout<<ceil(totalSalary); // if 10.4 then 10 (ceil function)
    }

    else if(ch == 'B')
    {
        int allow = 1500;
        totalSalary = (basicsalary + hra + da + allow) - pf;
        cout<<ceil(totalSalary);
    }

    else
    {
        int allow = 1300;
        totalSalary = (basicsalary + hra + da + allow) - pf;
        cout<<ceil(totalSalary);
    }
    return 0;
}
