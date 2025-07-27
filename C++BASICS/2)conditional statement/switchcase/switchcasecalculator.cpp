#include <iostream>
using namespace std;
int main()
{
    float num1, num2, result; // variable declared
    char oper; //to store operator choice

    cout << "Enter first number: " << endl;
    cin >> num1; // first Number
    cout << "Enter second number: " << endl;
    cin >> num2; // Second Number

    cout << "Choose operation to perform (+,-,*,/): " << endl;
    cin >> oper; //Operator

    switch (oper){
    case '+': //addition operation
        result = num1 + num2; //Stored in result
        cout << "Result: " << num1 << " " << oper << " " << num2 << " = " << result; // num1+num2=result
        break;

    case '-':
        result = num1 - num2;
        cout << "Result: " << num1 << " " << oper << " " << num2 << " = " << result;
        break;

    case '*':
        result = num1 * num2;
        cout << "Result: " << num1 << " " << oper << " " << num2 << " = " << result;
        break;

    case '/':
        result = num1 / num2;
        cout << "Result: " << num1 << " " << oper << " " << num2 << " = " << result;
        break;

    default:
        cout << "Invalid operation.";
    }

    return 0;
}

 

