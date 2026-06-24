#include <iostream>
using namespace std;

int main() 
{
    int n ;
    cout<<"Enter the number to check : ";
    cin>>n;

    for(int i =2; i<n ; i++){
        if(n%i == 0){
            cout<<n<<" is a composite number.";
            break;    //bina break ke ye loop hr successful division mai statement print krte rehta .
        }
    else{
        cout<<n<<" is a prime number .";
        break;
    }
    }

    return 0;
}