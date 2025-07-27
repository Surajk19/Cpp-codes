#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Write your code here 
    int S;
    int E;
    int W;
    float celsius;

    cin>>S;
    cin>>E;
    cin>>W;

    while(S <= E)
    {
       celsius = ((S-32)*5)/9;
       cout<<S<<"\t"<<floor(celsius)<<endl;
       S = S+W;
    }
       cout<<endl;
       return 0;
}