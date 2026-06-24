#include <iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x ;
    *x = *y;
    *y = temp;
    return;
}

int main() 
{
    int x = 6 , y = 9;
    swap(&x,&y);
    cout<<x<<" "<<y;    
    
}