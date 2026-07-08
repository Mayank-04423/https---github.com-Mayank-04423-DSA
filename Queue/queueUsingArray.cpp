#include <iostream>
using namespace std;

class queue{
int size ; int rear;int front; int* Q;
    public:

    queue(int size){
        this->size = size;
        this->front = -1;
        this->rear = -1;
        this->Q = new int[this->size];
    }

    ~queue(){delete[] Q;};

    void enqueue(int n){
        if(rear == size -1){
            cout<<"queue overflow"<<"\n";
        }
        else {
            rear++;
            Q[rear]=n;
        }
    }


    int dequeue(){
        int n = -1;

        if(front == rear){
            cout<<"queue underflow"<<"\n";
        }else{
            front++;
            n = Q[front];
        }
        return n;
    }

};

int main() 
{
    
    return 0;
}   