#include <iostream>
using namespace std;

int main() 
{
    
     int n ;
    cout<<"enter the number of elements :";
    cin>>n;

    int sum = 0;
    int arr[n];
    for(int i = 0 ; i<= n-1 ; i++){         //taking input 
        cin>>arr[i]; 
        sum +=arr[i];
    }

    cout<<"sum of array : "<<sum;
    
}