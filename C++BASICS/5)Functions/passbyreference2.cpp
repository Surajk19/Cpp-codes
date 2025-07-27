#include<iostream>
using namespace std;

void func(int &x) {
    x = 50; // any changes made to these will reflect in the output
    cout << "Value of x in func function: " << x << endl;
}

//Main Code
int main() {
    int x = 10;
    func(x);
    cout << "Value of x in main function: " << x;
}


