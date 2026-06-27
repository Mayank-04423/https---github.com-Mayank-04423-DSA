#include <iostream>
#include<string>
using namespace std;

int main() 
{
    // string str = "my name is mayank";
    // cout<<str;
    
    string name ;
    // cin>>s;  //can only be used if string does not have any space
    getline(cin,name);
    cout<<name;
}