#include <iostream>
using namespace std;

int main() 
{
    int arr[]= {2,4,2,5,6};
    int* ptr = arr;
    // cout<<ptr<<"\n";
    // cout<<&arr[0];
    // int* ptr = &arr[0];
    for(int i = 0 ; i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<"\n";
    ptr = arr;  //loop le baad pointer array ko point nahi krega islie rewrite krna pada

    *ptr = 8;
    ptr++;
    *ptr = 6;
    ptr--;    //pointer ab firse 1st pe aa gya .
      for(int i = 0 ; i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

}