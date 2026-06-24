#include <iostream>
using namespace std;

int main() 
{
    int x = 98;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<"\n";
    cout<<&ptr<<"\n";
    cout<<**p<<"\n";

    


}