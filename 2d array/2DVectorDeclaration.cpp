#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
   vector<vector<int>>v(3,vector<int> (4,2));   //3 vector banenge or har vector mai 4 element honge 
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cout<<v[i][j]<<" ";
        }
    cout<<"\n";    

    }
    cout<<v.size();
}