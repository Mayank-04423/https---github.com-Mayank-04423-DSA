#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
    string s,t;
    cout<<"enter first word:"<<"\n";
    cin>>s;
    cout<<"Enter the second word:"<<"\n";
    cin>>t; 
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"yes the strings are anagram";
    else cout<<"no ";
    
}