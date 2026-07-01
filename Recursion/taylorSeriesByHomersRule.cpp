#include <iostream>
using namespace std;


//using homers rule -> decreased time complexiy to O(n)
double e(int x , int n){
    static double s =1;
    if(n==0) return s;
    else{
        s = 1+ x*s/n;
        return e(x, n-1);
    }
}

//using loops 
double e1(int x, int n){
    double s1 = 1;
    double num = 1;
    double den = 1;

    for(int i =1; i<=n; i++){
        num*=x;
        den*=i;
        s1+=num/den;
    }
    return s1;
}

int main() 
{
    cout<<e1(1,10);
    return 0;
}