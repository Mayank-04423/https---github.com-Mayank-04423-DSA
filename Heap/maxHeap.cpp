#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class maxHeap{

    vector<int>heap;
    //helper formula for parent navigation 
    int parent(int i) { return (i-1)/2; }
    int leftChild(int i){ return 2*i + 1 ;}
    int rightChild(int i){ return 2*i + 2 ;}

    public:
    //functions to implement    
    void insert(int val){
        //push to end -> grab index of newly inserted ->up heapify (swapping upwards)
        heap.push_back(val);
        int curr = heap.size() -1;

        while(curr>0 && heap[curr]> heap [parent(curr)]){
            swap(heap[curr], heap[parent(curr)]);
            curr = parent(curr);
        }
    };


    void deleteRoot(){
        if(heap.empty()) return ;

        //overwite rooot i.e.[0] with last element -> remove duplicate -> down heapify
        heap[0] = heap.back();  //1
        heap.pop_back();        //2 
        
        int curr = 0 ;
        int n = heap.size();

        //sinking loop - boss lvl
        while(leftChild(curr)< n){
            int largest = curr;     //assuming parent is largest initially
            int left = leftChild(curr);
            int right = rightChild(curr);

             // compare left and right child to parent/
            if(left <n && heap[left]>heap[largest]){
                largest = left;
            }

            if(right<n && heap[right]>heap[largest]){
                right = largest;
            }

            if(largest == curr){
                break;
            }

            swap(heap[curr],heap[largest]);
            curr = largest;
        }     

    };
    int getMax(){
        if(heap.empty()) return -1;
        return heap[0];

    };
    void printHeap();

};

int main() 
{
    
    return 0;
}