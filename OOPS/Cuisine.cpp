#include <iostream>
#include <vector>
using namespace std;

class Cuisine{
    public:

    string cuisine_name;
    float taste_rating;
    string origin;
    vector<string> dish_names;

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
    Cuisine number1;
    number1.cuisine_name = "Indian Cuisine";
    number1.taste_rating = 9.23;
    number1.origin = "India";
    number1.dish_names = {"Butter Chicken, Biryani, Panner Butter Masala, Malai Kofta"};
    
    number1.Cuisines();
    cout<<endl;
    
    Cuisine number2;
    number2.cuisine_name = "Japanese Cuisine";
    number1.taste_rating = 8.98;
    number1.origin = "Japanese";
    number1.dish_names = {"Ramen, Sushi, Rice Balls"};
    
    number1.Cuisines();
    return 0;

}