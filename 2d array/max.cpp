#include <iostream>
#include<Climits>
using namespace std;

int main() 
{
    int m,n;
    cout<<"enter no of rows"<<"\n";
    cin>>m;

    cout<<"enter no of columns"<<"\n";
    cin>>n;

    int arr[m][n];
    for(int i=0; i<=m-1;i++){
        for(int j =0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    //max
    int max =INT_MIN;
    for(int i=0; i<=m-1;i++){
        for(int j =0; j<=n-1; j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<"the biggest element is :"<<max;
    
}