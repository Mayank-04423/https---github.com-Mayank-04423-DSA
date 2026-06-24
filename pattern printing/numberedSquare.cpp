#include <iostream>
using namespace std;

int main() 
{
    int r ;
    cout<<"Enter the number of rows : ";
    cin>>r; 

    for(int i =1; i<= r ; i++){
        for(int j =1 ; j <=r ; j++){
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}