#include <iostream>
#include<vector>
using namespace std;

int main() 
{

    int x,n ;
    cout<<"enter the target number : ";
    cin>>x;

    cout<<"enter the size of array : ";
    cin>>n;
    vector<int> v;

    cout<<"enter the elemets : ";
    for(int i = 0 ; i< n; i++){
        int a ;
        cin>>a;
        v.push_back(a);
    }

    
    
    for(int i = 0 ; i<v.size()-2; i++){
        for(int j = i+1; j <v.size()-1; j++){
            if(v[i]+v[j]==x) 
            cout<<"("<<i<<","<<j<<")"<<"\n";
        }

    }
   
}