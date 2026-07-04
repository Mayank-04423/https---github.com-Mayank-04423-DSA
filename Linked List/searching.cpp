#include <iostream>
using namespace std;

//declaration 
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

//searching 
Node* Lsearch(struct Node*p,int key){
    while(p!=0)
    {if(key ==p->data)
        return p;
        p=p->next;
    }
    return NULL;
}


int main() 
{
    int A[]={2,3,3,4,40,5};
    create(A,6);
    
    struct Node* temp;
    temp = Lsearch(first,40);
    if(temp) cout<<"key is found :"<<temp->data<<" "<<temp;
    else cout<<"key not found";

    return 0;
}