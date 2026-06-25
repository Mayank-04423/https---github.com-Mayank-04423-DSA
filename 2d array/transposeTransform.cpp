#include <iostream>
#include<Climits>
using namespace std;

int main() 
{
    int m;
    cout<<"enter no of rows"<<"\n";
    cin>>m;

    int arr[m][m];
    for(int i=0; i<=m-1;i++){
        for(int j =0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n";

    //print
    for(int i=0; i<=m-1;i++){
        for(int j =0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<"\n";    
    }

    //transpose int the same matrix
    for(int i =0; i<=m-1; i++){
        for(int j = i+1; j<= m-1;j++){
            int temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i]= temp;
        }
    }
    cout<<"\n";    
    
    for(int i=0; i<=m-1;i++){
        for(int j =0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<"\n";    
    }

}


