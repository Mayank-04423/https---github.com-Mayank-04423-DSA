#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
    // string str = "mississipi";

    // cout<<str.length();     //o to str.length() - 1


    // string str = "abcde";
    // cout<<str<<"\n";
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<"\n";
    // str.pop_back();
    // cout<<str;

    // string s = "abc";
    // cout<<s<<"\n";
    // s = s+"def"; //add kr sakte hai aage ya piche se place krke
    // cout<<s;


    string str = "abcdef";  //0,1,2,3,4,5
    cout<<str<<"\n";
    // reverse(str.begin(),str.end());
    // cout<<str<<"\n";
    reverse(str.begin()+2, str.begin()+5);  //cde ko everse krna hai jo 2nd se 4th tk hai  
    cout<<str;

    string s = "abcdef";
    //s.substr(index,length)
    cout<<s.substr(0);
    cout<<s.substr(2);

}