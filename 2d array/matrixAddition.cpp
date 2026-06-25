#include <iostream>
using namespace std;

int main() 
{
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={7,8,9,10,11,12};

    //array a;
    for(int i=0; i<2;i++){
        for(int j=0; j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    //array b
    for(int i=0; i<2;i++){
        for(int j=0; j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    //sum  storing in array b and printing
    int sum=0;
    for(int i=0; i<2;i++){
        for(int j=0; j<3;j++){
            b[i][j]+=a[i][j];
        }
    }
      for(int i=0; i<2;i++){
        for(int j=0; j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}