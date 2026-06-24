#include <iostream>
using namespace std;

int main() 
{
    int a,d,m,i;
    cout<<"enter the first term : "<<"\n";
    cin>>a; 
    cout<<"Enter the common difference : "<<"\n";
    cin>>d;
    cout<<"enter the number of terms : ";
    cin>>m;

    for(i=1 ; i<=m ; i++){
        cout<< a + (i-1)*d<< "\n";
    }

    return 0;
}