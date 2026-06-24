#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    vector<int> v;  //no need to mention the size
    v.push_back(8);
    cout<<v.capacity()<<"\n";
    v.push_back(9);
    cout<<v.size()<<"\n";
    v.push_back(4);
    cout<<v.capacity()<<"\n";
    v.push_back(5);
    cout<<v.size();
    cout<<"\n";

    for(int i = 0 ; i <=3 ; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    v.pop_back();
    cout<<v.size();

//     cout<<v[0]<<"\n";
//     cout<<v[1]<<"\n";
//     cout<<v[2]<<"\n";
}