#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next ;
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

//display the LL  
void disply(struct Node* temp){
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL";
}

//counting the no of nodes
int Rcount(struct Node*p){
    if(p!=NULL)
        return Rcount(p-> next)+1;
    else return 0;    
}

int main() 
{
    int A[]={2,3,3,4,40,5};
    create(A,6);
    // disply(first);
    cout<<Rcount(first);

    return 0;
}