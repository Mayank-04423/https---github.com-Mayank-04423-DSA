#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int trap(vector<int>& height){
    int n = height.size();
    //prev greatest element array
    int prev[n];
    prev[0]= -1;
    int max = height[0];
    for(int i =0; i<=n ;i++){
        prev[i]= max;
        if(max<height[i]) max = height[i];
    }

    //  //next greatest element array --> prev as nxt    is method se minimum array nahi banai padegi
    //  prev[n-1]= -1;
    //  max = height[n-1];
    //  for(int i=n-2; i<=0;i++){
    //     if(max<prev[i]) prev[i]=max;  
    //     if(max<height[i]) height[i]=max;
    //  }

    //next greatest element array
    int nxt[n];
    nxt[n-1]= -1;
    max= height[n-1];
    for(int i = n-2; i>=0;i--){
        nxt[i]= max;
        if(max<height[i]) max = height[i];
    } 

    //minimum array
    int mini[n];
    for(int i = 0; i<= n;i++){
        mini[i]=min(prev[i],nxt[i]);
    }

    //calculating wATER
    int water = 0;
    for(int i =1; i<=n-1;i++){
        if(height[i]<mini[i]){
            water+=(mini[i]-height[i]);
        }
    }
    return water;
}

