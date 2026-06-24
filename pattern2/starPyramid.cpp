#include <iostream>
using namespace std;

int main() 
{
    int r;
    cout<< "enter number of rows : ";
    cin>>r;

    for(int i =1; i <=r ; i++){
        //for spaces
        for(int j =1; j <=r-i ; j++){
            cout<<" ";
        }
        //for stars 
        for(int k =1 ; k<=r ; k++){
            cout<<"*";
        }
        cout<<"\n";

    }
    return 0;
}