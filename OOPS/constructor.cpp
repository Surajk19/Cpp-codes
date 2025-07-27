#include <iostream>
#include <vector>
using namespace std;

class Movie{
    public:
        string moviename ; 
        int tickets;
        vector<string> genre;

        Movie() // constuctor
        {                                 
        moviename = "Random Movie";          // the values shows here will get set but not print
        tickets = 4;
        genre = {"Emotional, Sad"};
        cout<<"Constructor Called"<<endl;
        }

        void displaymovie()
        {
            cout<<"Movie Name :"<<moviename<<endl;
            cout<<"tickets available :"<<tickets<<endl;
            cout<<"genres :";
            for(string elements : genre) // elements represent elements of an array
            { 
                cout<< elements <<" "; // will print each element in an array
            }
            cout<<endl;
        }
};

int main()
{
    Movie movie1;

    movie1.displaymovie();
}