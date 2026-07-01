#include <iostream>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    else {
        return n*fact(n-1);
    }
}

//iteratively using loop
int Ifact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}


int main() 
{
    int r;
    r = Ifact(5);
    cout<<r;
    return 0;
}