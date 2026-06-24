#include <iostream>
using namespace std;

void starTriangle(int x){
    for(int i =1 ; i<= x ; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main() 
{
    starTriangle(3);
    cout<<"hello"<<"\n";
    starTriangle(4);
    starTriangle(5);
}