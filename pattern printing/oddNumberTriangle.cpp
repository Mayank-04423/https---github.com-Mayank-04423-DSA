#include <iostream>
using namespace std;

int main() 
{
    int r ; 
    cout<<"enter the number of terms : ";
    cin>>r;

    for (int i = 1 ; i <=r ; i++){
        for(int j = 1; j <=i ; j++){
            cout<<(2*j)-1;
        }
        cout<<"\n";
    }

        return 0;
}