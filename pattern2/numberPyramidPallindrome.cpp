#include <iostream>
using namespace std;

int main() 
{
    int r;
    cout<< "enter number of rows : ";
    cin>>r;

    for(int i =1; i <=r ; i++){
        //for spaces
        for(int k = 1; k <=r-i;k++){
            cout<<" ";
        }

        for(int j =1; j <=i; j++){
            cout<<j;
        }

        for(int l=i-1 ; l>=1; l--){
            
            cout<<l;
        }
        cout<<"\n";
    }
    return 0;
}