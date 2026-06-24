#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<< "enter number of rows : ";
    cin>>n ;

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= 2*n-1; j++) {
            
            // IF we are in the left star zone OR the right star zone
            if (j <= (n - i + 1) || j >= (n + i - 1)) {
                cout << "*";
            } 
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}