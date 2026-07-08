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

    cout << "--- Testing Enqueue (Filling it up) ---\n";
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    
    // This 5th element should fail because 1 slot must remain an empty buffer
    Q.enqueue(50); 

    cout << "\n--- Testing Dequeue (Creating Space) ---\n";
    Q.dequeue(); // Removes 10
    Q.dequeue(); // Removes 20

    cout << "\n--- Testing Circular Wrap-Around ---\n";
    // Since we deleted two items, indexes 1 and 2 are open.
    // These next two should wrap around and use index 0 and 1!
    Q.enqueue(60); 
    Q.enqueue(70); 

    cout << "\n--- Emptying the remaining Queue ---\n";
    Q.dequeue(); // Removes 30
    Q.dequeue(); // Removes 40
    Q.dequeue(); // Removes 60
    Q.dequeue(); // Removes 70
    Q.dequeue(); // Should say Queue is empty!

    return 0;
}