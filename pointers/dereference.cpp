#include <iostream>
using namespace std;

int main() 
{
    int x = 15;
    
    int* p = &x;
    cout<<*p<<"\n";

    *p = 78;
    cout<<x<<"\n";

    cout<<&x;
}