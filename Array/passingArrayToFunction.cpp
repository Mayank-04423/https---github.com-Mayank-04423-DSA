#include <iostream>
using namespace std;

void display(int a[] , int size){
    for(int i = 0 ; i<= size -1 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void change(int b[], int size){
    b[0]= 100;
}

int main() 
{
    int arr[5] = {1,4,5,12,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr , size);
    change(arr , size);
    display(arr , size);
}

//array mai pass by value nahi hota hai 
//array ka address(add of arr[0]) hi transfer ho jata hai (reference)