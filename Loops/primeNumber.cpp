#include <iostream>
using namespace std;

int main() 
{
    int n ;
    cout<<"enter the number : ";
    cin>>n;

    bool flag = true; // ture means prime here 

    for(int i =2 ; i<n ; i++){
        if(n%i == 0){
           flag = false;
            break;
        }
              
    }
     if(flag == true)  cout<<n<<" is prime number.";
            
        else    cout<<n<<" is composite number .";
 //cout<<n<<" is a prime number.";
    return 0;
}