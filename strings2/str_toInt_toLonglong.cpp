#include <iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main() 
{
    string x = "12345";
    int a = stoi(x);
    cout<<a<<"\n";

    string y = "12345678912";   //long long as it can store -2^63 to 2^63 -1.
    long long l = stoll(y);
    cout<<l;    

}

