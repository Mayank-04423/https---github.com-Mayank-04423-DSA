#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<< "enter number of rows : ";
    cin>>n ;

    for (int i = 1; i <= 2*n -1 ;i++) {
        
        for(int j = 0 ;j<=i ; j++){
            cout <<j;
        }

    }    
    return 0;
}