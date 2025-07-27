#include <iostream>
#include <vector>
using namespace std;

class Cuisine{
    public:

    string cuisine_name;
    float taste_rating;
    string origin;
    vector<string> dish_names;

    Cuisine(string cuisine, float rating, string org, vector<string> dish)
    {
        cuisine_name = cuisine;
        taste_rating = rating;
        origin = org;
        dish_names = dish;
        cout<<"Parameterized Constructor Called"<<endl;
    }

    void Cuisines()
    {
        cout<<"Name of the Cuisine :"<<cuisine_name<<endl;
        cout<<"Taste rating :"<<taste_rating<<endl;
        cout<<"Origin Country :"<<origin<<endl;
        for(string element : dish_names)
        {
            cout<<"Names of the famous dishes :"<<element<<endl;
        }
    }

};

int main()
{
    Cuisine cui_1("Italy", 8.34, "Italy", {"Pasta", "Noodles", "Alfredo"});

    cui_1.Cuisines();
       
}