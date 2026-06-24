#include <iostream>
using namespace std;

int main() 
{
    int r ;
    cout<<"enter the number of rows :";
    cin>>r;

    // int mid = r/2 + 1;
    
    for(int i= 1 ; i <=r ; i++){
        for(int j = 1 ; j<=r; j++){
            if(i == r/2 + 1 || j == r/2 + 1 ) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}