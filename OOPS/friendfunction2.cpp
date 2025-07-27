#include <iostream>
#include <string>
using namespace std;

class Marks
{
    private : // can only be accessed by member function or friend function
        string student_name ;
        int marks;

    public : // These are the functions that can be called from outside the class to interact to interact with object of this class
    Marks(string name, int mark)
    {
        student_name = name;
        marks = mark;
    }
    //friend function declaration gives comparemarks a special permission to access the private members 

    friend bool comparemarks(const Marks& marks1, const Marks& marks2);

    // Member function Display name 
    void displayname() const
    {
        cout<<"The Result is Declared of "<<student_name<<endl; // using private class variable
    }
};

    // friend function implementation 

    bool comparemarks(const Marks& marks1, const Marks& marks2)
    {
        return marks1.marks > marks2.marks; // access marks from private return true if the marks1 > marks2
    }

int main()
{
    Marks Student_1("Suraj", 78); 
    Marks Student_2("Pranay", 67);
    
    Student_1.displayname();
    Student_2.displayname();

    if(comparemarks(Student_1, Student_2))
    {
        cout<<"Suraj got more marks than pranay";
    }
    else
    {
        cout<<"Pranay got more marks than suraj";
    }
    
    return 0;
}