#include <iostream>
using namespace std;

int power(int m ,int n){
    if(n==0) return 1;
    else{
        return power(m,n-1)*m;
    }
}

//another method having less no of multiplication operation
int power1(int m,int n){
    if(n==0) return 1;
    else if (n%2==0){
        return power1(m*m,n/2);
    }
    else return m*power1(m*m,(n-1)/2);
}

int main() 
{
    cout<<power1(2,9);
    return 0;
}