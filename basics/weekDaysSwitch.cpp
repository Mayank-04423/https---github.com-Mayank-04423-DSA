#include <iostream>
using namespace std;

int main() 
{
    int x;
    cout<<"enter a number btw 1 and 7 : ";
    cin>>x;
    switch(x){
        case 1: cout<<"Monday";
        break;
        case 2: cout<<"Tuesday";
        break;
        case 3: cout <<"wednesday";
        break;
        case 4: cout<<"Thursday";
        break;
        case 5: cout<<"friday";
        break;
        case 6: cout<<"Saturday";
        break;
        case 7: cout<<"Sunday";
        break;
        
        default:
         cout <<"invalid choice";
    }
    
    return 0;
}