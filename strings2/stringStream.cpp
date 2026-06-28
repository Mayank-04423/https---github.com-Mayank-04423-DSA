#include <iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main() 
{
    string str = "programming is a fun activity";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<"\n";
    }
    
}