#include <iostream>
#include <vector>
using namespace std;

class Anime{
    public:
    
    string anime_name ;
    int episodes;
    vector<string> characters;


    void anime()
    {
        cout<<"Anime is:"<<anime_name<<endl;
        cout<<"No of episodes is (around):"<<episodes<<endl;
        for(string name : characters)
        {
            cout<<"Names of characters :"<<name<<endl;
        }
    }
};

int main()
{
    Anime myanime;

    myanime.anime_name = "Naruto";
    myanime.episodes = 500;
    myanime.characters = {"Naruto", "Sasuke", "Lee", "Madara", "Kakashi"};

    myanime.anime();
    return 0;
}