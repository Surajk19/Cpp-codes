#include <iostream>
#include <vector>
using namespace std;

class Friend{ // a class declared "Friend is the class which acts like the blueprint"
    public: // a public keyword is defined
        string friend_name; //var for name
        int age;            //var for age
        float CGPA;         //var for cgpa
        vector<string> personality; // vector(array for their personality)

        void myfriends() // a function is created
        {
            cout<<"Friend name :"<<friend_name<<endl; //print name
            cout<<"Age :"<<age<<endl;                 //print age
            cout<<"CGPA :"<<CGPA<<endl;               //print cgpa 
            cout<<"personality Traits :";
            for(string characteristics : personality) //loop for passing each value into the array
            {
                cout<<characteristics<<" "; //print traits
            }
            cout<<endl;
        }
};

int main()
{
    Friend friend1; //object friend1 is created from Friend class which acts like a instance of a class

    friend1.friend_name = "Pranay";
    friend1.age = 20;
    friend1.CGPA = 7.45;
    friend1.personality = {"smart", "shy", "introvert", "handsome"};

    friend1.myfriends(); // Calling the function to take above values as input and return a output
    cout<<endl;
    
    Friend friend2;

    friend2.friend_name = "Shreyansh";
    friend2.age = 20;
    friend2.CGPA = 6.90;
    friend2.personality = {"Coder", "sweet", "kind", "simpleton"};

    friend2.myfriends();
    cout<<endl;

    Friend friend3;

    friend3.friend_name = "Pallavi";
    friend3.age = 21;
    friend3.CGPA = 7.40;
    friend3.personality = {"beautiful", "Extrovert", "mytype", "Smart"};

    friend3.myfriends();
    return 0;
}