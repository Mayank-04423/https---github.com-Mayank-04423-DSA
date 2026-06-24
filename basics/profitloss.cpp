#include <iostream>
using namespace std;

int main() 
{
    int c; int s;
    cout<<"enter the cost price : ";
    cin>>c;
    cout<<"enter the selling price : ";
    cin>>s;

    if(s>c){
        cout<<"profit is :  " << s-c;
    } else if(s<c){
        cout<<"loss is : " << c-s;
    }
    else 
    cout<<"no profit no loss";
    return 0;
}