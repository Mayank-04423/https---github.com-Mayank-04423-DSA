#include <iostream>
using namespace std;

class stack{
    int*arr, capacity , top;
public:
//costructor
    stack(int size){
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~stack() {
        delete[] arr;
    }

};


int main() 
{
    
    return 0;
}