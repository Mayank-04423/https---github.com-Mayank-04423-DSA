#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*next ;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* first = nullptr;
//creating first node using 'new'
void create(int A[],int n){
    first= new Node(A[0]);
    Node* last = first;
    
    for(int i=1; i<n;i++){
        Node* t = new Node(A[i]);
        last -> next = t;   //linking to new node 
        last = t;           //moving the tracker forward
    }
}

void disply(struct Node* temp){
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL";
}
int main() 
{
    int A[]={2,3,3,4,40,5};
    create(A,6);
    disply(first);
    return 0;
}