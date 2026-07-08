#include <iostream>
using namespace std;

class circularQueue{
int size;
int front;
int rear;
int* Q;

    public:
    circularQueue(int size){
    this->size = size;
    this->front= 0;
    this->rear=0;
    this->Q = new int[this->size];  //dynamic allocation of array 
    }

    ~circularQueue(){
        delete[]Q;
    }

    void enqueue(int n){
        if((rear + 1)%size == front){
            cout<<"Queue is full"<<"\n";
        }else{
            rear = (rear+1)%size;
            Q[rear] = n;    //storing the value 
        }
    }

    int dequeue(){
        //if queue is empty
        if(front == rear){
            cout<<"queue is empty"<<"\n";
        }else{
            front = (front+1)%size;
           return  Q[front];
        }
    }
};

int main() 
{
    circularQueue Q(5);
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    cout<<"full"<<"\n";
    Q.enqueue(50);

    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    cout<<"should be empty now"<<"\n";
    Q.dequeue();


    return 0;
}