#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
    Node* front = nullptr;
    Node* rear = nullptr;

    void enqueue(int n){
        Node* t = new Node;
        if(t==nullptr) cout<<"queue overflow"<<"\n";
        else{
            t->data = n;
            t->next = nullptr;

            //if first node entering
            if(front == nullptr){
                front = rear = t;
            }
            else{
                rear->next = t;
                rear = t;
            }
        }
    }


    int dequeue(){
        int x =-1;
        if(front == nullptr) cout<<"queue is empty"<<"\n";
        else{
            Node* t = front;
            front = front->next;
            x = t->data;
            delete t;

            //safety check 
            if(front == nullptr){
                rear == nullptr;
            }
        }
        return x;
    }

int main() 
{
    
    return 0;
}