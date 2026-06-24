#include <iostream>
using namespace std;

int main() 
{
    int r;
    cout<< "enter number of rows : ";
    cin>>r;

    for(int i =1; i <=r ; i++){
        //for spaces 
        for(int k =1 ; k<= r-i; k++){
            cout<<" ";
        }
        //for stars
        for(int j =1; j <= 2*i - 1; j++){
            cout<<"*";
        }
        
        cout<<"\n";

    }
    return 0;
}
