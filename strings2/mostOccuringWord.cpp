#include <iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main() 
{
    string str="hey coding coding there i am a coding profile and i am very curious";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    
   cout<<"\n";
   sort(v.begin(),v.end());
   int maxCount = 1;
   int count =1 ;
   for(int i=0; i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    maxCount= max(maxCount, count);
   }
//    cout<<maxCount;

   count = 1;
   for(int i=0; i<v.size(); i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    if(maxCount==count){
        cout<<v[i]<<" "<<maxCount<<"\n";
    }
   }

}