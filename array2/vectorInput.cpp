#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    vector<int>v; //size of vector= 5 , each element = 6
    for(int i = 0 ; i<5; i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0 ; i<5;i++){
        cout<<v[i]<<" ";
    }
}