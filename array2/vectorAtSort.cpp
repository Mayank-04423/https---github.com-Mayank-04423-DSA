#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    vector<int> v; //size of vector= 5 , each element = 6
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(2);
    v.push_back(4);
    // cout<<v.at(3);        //print the value at that index

    for(int i = 0 ; i< v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";
    
    //sorting
    // sort(v.begin(),v.end());
    // for(int i = 0 ; i< v.size(); i++){
    //     cout<<v.at(i)<<" ";
    // }
}