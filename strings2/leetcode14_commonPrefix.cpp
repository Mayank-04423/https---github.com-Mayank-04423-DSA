#include <iostream>
#include<vector>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() 
{
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<"\n";
    }
    cout<<"\n";
    sort(v.begin(),v.end());
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<"\n";
    }

//     class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         int n = strs.size();
//         if(n==1) return strs[0];
//         sort(strs.begin(),strs.end());
//         string first = strs[0];
//         string last = strs[n-1];
//         string s ="";
//         for(int i=0; i<(min(first.size(),last.size()));i++){
//             if(first[i]==last[i]){
//                 s+=first[i];
//             }
//             else return s;
//         }
//         return s;
//     }
// };
}