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
            cout<<"Parameterized Constructor"<<endl;
        }

        ~Movie() // Deconstructor
        {

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
    Movie movie1("Lootera", 4, {"Slice of Life", "Emotional"});
    movie1.displaymovie();

    
}