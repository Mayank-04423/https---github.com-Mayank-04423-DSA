#include <iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i = 0 ; i<a.size(); i++){
        cout<<a[i]<<" ";
    };
    cout<<"\n";
}

int main() 
{
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(9);
    v1.push_back(0);

    display(v1);
    // using while loop
    // int i = 0 ;
    // int j = v1.size() - 1;
    // while (i<=j)
    // {
    //     int temp = v1[i];
    //     v1[i]=v1[j];
    //     v1[j]= temp;
    //     i++;
    //     j--;
    // }
    //using for loop
    for(int i = 0, j= v1.size()-1; i <=j ; i++,j--){
         int temp = v1[i];
        v1[i]=v1[j];
        v1[j]= temp;
    }
    display(v1);
    
   
    
   
}