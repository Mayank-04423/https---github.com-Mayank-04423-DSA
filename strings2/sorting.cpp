#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
    string s;
    cin>>s; 

    //sorting alphabetically rearrange kr dega, spaces ko aage eksath print kr dega
    //ASCII values ke according sort hota hai
    sort(s.begin(),s.end());
    cout<<s;
    
}