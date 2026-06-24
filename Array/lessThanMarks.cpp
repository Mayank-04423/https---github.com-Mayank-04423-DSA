#include <iostream>
using namespace std;

int main() 
{
     int n ;
    cout<<"enter the number of students :";
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<= n-1 ; i++){         //taking input 
        cin>>arr[i]; 
    }
    for(int i = 0 ; i<= n-1 ; i++){        
        if(arr[i]<35)
        cout<<i<<" ";
        
    }
    
    return 0;
}