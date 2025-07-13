#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter the letter :"; 
    cin>>letter;

    switch(letter) // don't need to write different output statement for all club them together
    {
        case 'A' :
        
        case 'E':
        
        case 'I':
        
        case 'O':
        
        case 'U':
        
        case 'a':
        
        case 'e':
        
        case 'i':
        
        case 'o':
        
        case 'u':
        cout<<"It is a vowel";
        break;
        default:
        cout<<"It is a consonant";
        break;
    }
    return 0;
}