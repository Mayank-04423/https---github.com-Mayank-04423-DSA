#include <iostream>
using namespace std;

int swap(int &x , int &y ){ //&x  qki yaha pass by value ho rhi hai original mai koi change nahi aa raha hai 
    int temp = x;
    x = y;
    y = temp; 
}

int main() 
{
    int x=5,y=9;
    // cout<<"enter the numbers : ";
    // cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y;
} 