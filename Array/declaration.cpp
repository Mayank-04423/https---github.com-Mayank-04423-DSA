#include <iostream>
using namespace std;

int main() 
{
    int n ;
    cout<<"enter the number of elements :";
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<= n-1 ; i++){         //taking input 
        cin>>arr[i]; 
    }

    for(int i = 0 ; i<= n-1 ; i++){         //printing array
        cout<<arr[i];
    }
    return 0;
}