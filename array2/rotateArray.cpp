#include <iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){
    for(int i = 0 ; i<a.size(); i++){
        cout<<a[i]<<" ";
    };
    cout<<"\n";
}

void reversePart(int i , int j , vector<int>&v){
    while(i<=j){
    int temp = v[i];
    v[i]=v[j];
    v[j]= temp;
    i++;
    j--;
    }
    return;
}

// void reverse(vector<int> &v){
//  int i = 0;
//  int j = v.size() - 1;
//  while(i<=j){
//     int temp = v[i];
//     v[i]=v[j];
//     v[j]= temp;
//     i++;
//     j--;
//  }
// }


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
    
    int k = 2;
    int n = v1.size();
    reversePart(0 , n-k-1 , v1);
    reversePart(n-k , n-1 , v1);
    reversePart(0, n-1 , v1);
   display(v1);  
    
   
}