#include <iostream>
using namespace std;

int main() 
{
    int r ;
    cout<<"Enter the number of rows : ";
    cin>>r;

    for(int i = 1 ; i<=r ; i++){
        for(int j =1 ; j <= i ; j++){   // for reverse we'll use j <= r+1-i ;
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}