#include <iostream>
using namespace std;

int fact(int n ){
    if(n<=1) return 1;
    else return fact(n-1)*n;
}

//combination function using factorial 
int nCr(int n,int r){
    int num = fact(n);
    int den = fact(n-r)*fact(r);

    if(n==0 || n==r) return 1;
    else    return num/den;
}

//combination using recursion
int NCR(int n, int r){
    if(r==0 || n==r) return 1;
    else return NCR(n-1,r-1)+NCR(n-1,r);
}

int main() 
{
    cout<<nCr(5,2)<<" ";
    cout<<NCR(5,2);
    return 0;
}