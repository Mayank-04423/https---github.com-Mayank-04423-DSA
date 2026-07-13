#include <iostream>
#include<vector>
using namespace std;

class numArray{
    vector<int>prefixSum;
    public:
        numArray(vector<int>& nums){
            int n = nums.size();
            prefixSum.resize(n+1 , 0);

            //utilizing previous sum 
            for(int i=0; i< n;i++){
                prefixSum[i+1] = prefixSum[i]+nums[i];
            }
        }

        int sumRange(int left, int right){
            return prefixSum[right +1] - prefixSum[left];
        }

};

int main() 
{
    
    return 0;
}