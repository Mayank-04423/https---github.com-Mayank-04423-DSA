#include <iostream>
using namespace std;

class DEQueue {
private:
    int size;
    int front;
    int rear;
    int* Q;

public:
    DEQueue(int size) {
        this->size = size;
        this->front = -1;
        this->rear = -1;
        this->Q = new int[this->size];
    }

    ~DEQueue() { delete[] Q; }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void insertRear(int x) {
        if (isFull()) {
            cout << "Queue Overflow at Rear!\n";
            return;
        }
        // If queue is empty, initialize both pointers to 0
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        Q[rear] = x;
    }

    void insertFront(int x) {
        if (isFull()) {
            cout << "Queue Overflow at Front!\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            // Circular backward step
            front = (front - 1 + size) % size;
        }
        Q[front] = x;
    }

    int deleteFront() {
        if (isEmpty()) {
            cout << "Queue Underflow at Front!\n";
            return -1;
        }
        int x = Q[front];
        
        // If there was only one element left, reset queue to empty state
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        return x;
    }

    int deleteRear() {
        if (isEmpty()) {
            cout << "Queue Underflow at Rear!\n";
            return -1;
        }
        int x = Q[rear];

        if (front == rear) {
            front = rear = -1;
        } else {
            // Circular backward step
            rear = (rear - 1 + size) % size;
        }
        return x;
    }
};

int main() 
{
    
    return 0;
}