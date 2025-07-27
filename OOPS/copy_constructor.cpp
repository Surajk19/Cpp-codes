#include <iostream>
#include <vector>
using namespace std;

class Movie{
    public:
        string moviename ; 
        int tickets;
        vector<string> genre;

        Movie(string movie_name, int ticket, vector<string> genres) // Parameterized construtor
        {                 
            moviename = movie_name;
            tickets = ticket;
            genre = genres;                
            cout<<"Copy Constructor is Called"<<endl;
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
    Movie movie1("Lootera", 4, {"Slice of Life,", "Emotional"});

    // Copy the object and it will obtain the value of original object  
    Movie movie_new = movie1;

    movie_new.moviename = "Sultan";//name changed in the new object from the original one
    movie_new.tickets = 22;

    cout<<"Copied object"<<endl;
    movie_new.displaymovie();
    cout<<endl;
    cout<<"Original object"<<endl;
    movie1.displaymovie();

}