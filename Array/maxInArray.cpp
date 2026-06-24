#include <iostream>
using namespace std;

int main() 
{
    int arr[5]= {45,54,13,1,79};

    int max = arr[0];
    for(int i = 1; i<=4 ; i++){
        if (max < arr[i]) 
        max = arr[i];
    }
    cout<<max;

    return 0;
}