#include <iostream>
using namespace std;

int main() 
{
    
     int n,x ;
    cout<<"enter the number of elements :";
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<= n-1 ; i++){         //taking input 
        cin>>arr[i]; 
    }
    cout<<"enter the element you want to search : ";
    cin>>x;
//checkmark ka use
    bool flag = false;      //false -> element is not there
    for(int i = 0 ; i<=n-1; i++){
        if(arr[i]==x) flag = true;
    }

    if (flag == true) cout<<"element found .";
    else cout<<"not found .";
}

//bool ke use se repeated print nahi hoga for duplcate elements found

