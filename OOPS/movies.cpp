#include <iostream>
#include <vector>
using namespace std;

class Movie{
    public:
        string moviename ; 
        int tickets;
        vector<string> genre;

        void displaymovie()
        {
            cout<<"Movie Name :"<<moviename<<endl;
            cout<<"tickets available :"<<tickets<<endl;
            cout<<"genres :";
            for(string elements : genre) // elements represent elements of an array
            { 
                cout<< elements <<" ,"; // will print each element in an array
            }
            cout<<endl;
        }
};

int main()
{
    Movie movie1;
    
    movie1.moviename = "Conjuring";
    movie1.tickets = 3;
    movie1.genre = {"horror","Thriller"};

    movie1.displaymovie();

    Movie movie2;
    
    movie1.moviename = "Shwashank Redemption";
    movie1.tickets = 3;
    movie1.genre = {"Slice of life","Action","Deep"};

    movie1.displaymovie();
    return 0;
}