#include <iostream>
using namespace std;

int main() 
{
    int  n , i;
    cout << "enter the number of terms : ";
    cin>>n;
    int a =1;
    for(i = 1 ; i<=n ; i++){
        cout<<a<<"\n";
        a = a*2;
    }
    return 0;
}