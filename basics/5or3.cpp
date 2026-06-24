#include <iostream>
using namespace std;

int main() 
{
    int a ;
    cout<<"enter an integer : ";
    cin>>a;
    if(a%5==0 || a%3==0){
        cout<<"the number is divisible by 5 or 3";
    }
    else
    {
        cout<<"not divisible";
    }
    return 0;
}