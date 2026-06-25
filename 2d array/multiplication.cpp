#include <iostream>
using namespace std;

int main() 
{
    int m , n,p,q;
    cout<<"enter the rows of first matrix :";
    cin>>m;
    cout<<"enter the columns of first matrix :";
    cin>>n;
    cout<<"enter the rows of second matrix :";
    cin>>p;
    cout<<"enter the columns of second matrix :";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter element of first matrix";
        for(int i =0; i<m;i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
        }
    }

    int b[p][q];
    cout<<"Enter elements of second matrix";
    for(int i =0; i<p;i++){
        for(int j=0; j<q; j++){
            cin>>b[i][j];
        }
    }  

    //resultant matrix
    int res[m][q];
    for(int i=0; i<m;i++){
        for(int j=0;j<q;j++){
            //multiplication
            res[i][j]= 0;
            for(int k=0; k<n; k++){
                res[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    }
    else//n not equal to p 
    {
        cout<<"matices can not be multiplied .";
    }
}
