#include <iostream>
using namespace std;

void find(int n , int* ptr1, int* ptr2){
    *ptr2 = n%10;
    while (n>9)
    {
       n/=10; 
    }
    *ptr1 = n;
    return;
}

int main() 
{
    int n;
    cout<<"enter the number :";
    cin>>n;

    int firstDig, lastDig;
    int* ptr1 = &firstDig;
    int* ptr2 = &lastDig;
    find(n , ptr1 , ptr2);
    cout<<firstDig<<" "<<lastDig;    
    return 0;
}