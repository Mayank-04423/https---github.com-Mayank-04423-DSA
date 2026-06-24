#include <iostream>
using namespace std;

int main() 
{
    int a ;
    cout<<"enter the number : "<<"\n";
    cin>>a;
    //100,97,94....
    for(int i = a; i >= 1; i-=3){
        cout <<i<<"\n";
    }

// for(int i =1 ; a>0 ; i++){
//   cout<<a<<"\n";
//      a-=3;
//   }

    return 0;
}