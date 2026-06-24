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

    for(int i=0; i<=m-1;i++){
        for(int j =0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<"\n";    
    }

    //transpose
     for(int j=0; j<=m-1;j++){
        for(int i =0; i<=n-1; i++){
            cout<<arr[i][j]<<" ";
        }
    cout<<"\n";    
    }
}


// vector<vector<int>> transpose (vector<vector<int>>& matrix) {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     //int t[n][m]
//     vector<vector<int>> int(n,vector<int>(m));
//     //storing the transposed matrix
//     for(int j=0; j<=m-1;j++){
//         for(int i =0; i<=n-1; i++){
//            t[i][j]=matrix[j][i]
//         }   
//     } return t;    
// }