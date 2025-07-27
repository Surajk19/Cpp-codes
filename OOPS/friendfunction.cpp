#include <iostream>
#include <string>
using namespace std;

class Chai
{
    private:
        string chai_name;
        int servings;

    public:
        Chai(string name, int serve)
        {
            chai_name = name;
            servings = serve;
        }
    
        friend bool compareservings(const Chai& chai1 , const Chai& chai2);

    void display() const
    {
        cout<<"Tea Name :"<<chai_name<<endl;
    }

};

bool compareservings(const Chai& chai1 , const Chai& chai2)
{
    return chai1.servings > chai2.servings;
}

int main()
{
    Chai MasalaChai("Masala Chai", 4);
    Chai RoseChai("Rose Chai", 8);

    MasalaChai.display();
    RoseChai.display();

    if(compareservings(MasalaChai, RoseChai))
    {
        cout<<"Masala Chai Have More Servings";
    }
    else
    {
        cout<<"Rose Chai have less servings";
    }
    return 0;
}