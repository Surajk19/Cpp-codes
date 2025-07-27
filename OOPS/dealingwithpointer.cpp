#include <iostream>
#include <vector>
using namespace std;

class Movie{
    public:
        string* moviename ; 
        int tickets;
        vector<string> genre;

        Movie(string movie_name, int ticket, vector<string> genres) // Parameterized construtor
        {                 
            moviename =new string (movie_name);
            tickets = ticket;
            genre = genres;                
            cout<<"Parameterized Constructor is Called"<<endl;
        }

        Movie(const Movie& other) // Copy construntor is called here is the reference of memory is provided
        {     // const is because we want to copy as it is not want to change it
            moviename =new string(*other.moviename); //new cause pointers
            tickets = other.tickets;
            genre = other.genre;                
            cout<<"Copy Constructor is Called"<<endl;
        }

        ~Movie()
        {
            delete moviename;
            cout<<"Deconstructor called"<<endl;
        }

        void displaymovie()
        {
            cout<<"Movie Name :"<<*moviename<<endl;
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
    movie1.displaymovie();
    cout<<endl;
    // Copy the object and it will obtain the value of original object  
    Movie movie_new = movie1;
    movie_new.displaymovie();
    cout<<endl;

    *movie_new.moviename = "Sultan";//name changed in the new object from the original one
    movie_new.tickets = 22;

    cout<<"Copied object"<<endl;
    movie_new.displaymovie();
    cout<<endl;
    cout<<"Original object"<<endl;
    movie1.displaymovie();

}