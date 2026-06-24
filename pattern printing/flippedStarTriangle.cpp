#include <iostream>
using namespace std;

int main() 
{
    int r ;
    cout<<"enter number of rows  : ";
    cin>>r;

    int k = 1;

    for(int i= 1 ; i <=r ; i++){
        //for space
        for(int j = 1 ; j<=r-i; j++){
            cout<<" ";          
        }
    //for stars
        for(int k = 1; k<=i;k++){
            cout<<"*";
        }

        cout<<"\n";
    }
    return 0;
}   