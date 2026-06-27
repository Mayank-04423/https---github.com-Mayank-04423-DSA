#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void change2DVector(vector<vector<int> >&v){ 
    v[0][0]=100;
}
int main() 
{
    
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<vector<int> >v;
    v.push_back(v1);
    v.push_back(v2);

    cout<<v[0][0]<<"\n";
    change2DVector(v);
    cout<<v[0][0]<<"\n";

}