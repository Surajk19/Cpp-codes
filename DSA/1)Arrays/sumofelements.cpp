#include <iostream>
using namespace std;

int disheswashed(int dish[], int size) // input parameters are a array named dish and a limiter size
{
    int total = 0; 
    for(int i = 0 ; i < size ; i++) // indexing from the 0 to size
    {
        total += dish[i]; // adds each element to total
    } 
    return total; // returns total
}

int main()
{
    int dish[5] = {34, 23, 34, 20 ,11}; //  create a new local variable array dish
    cout<<"Total number of dishes washed :";
    cout<<disheswashed(dish, 5); // passed the dish array which we created above and a size
    return 0;
}